/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co. KG                 *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 2015  SEGGER Microcontroller GmbH & Co. KG               *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File    : SEGGER_MEM_BUDDY_HEAP.c
Purpose : Binary buddy allocator.

          Generally according to Fundamental Algorithms, but with the following
          differences:

          1. The TAG bit is inverted, 0 => block allocated, 1 => block free,
             which leads to more compact code.
          2. The minimum allocation size is 16 bytes for 32-bit architectures
             and 8 bytes for 16-bit architectures.  This allows for at least
             two addresses and an unsigned (total of three words) on machines
             whose addresses are no wider than an unsigned.
          3. Some extra checks, on deallocation, to at least have a go at
             diagnosing errors.  Some clients would like to be blind and
             not worry about this at runtime, but as the checks are cheap
             then we might as well carry them out.
          4. Some extra setup on freed blocks to ensure that the aforementioned
             checks work.

Revision: $Rev: 15029 $
--------  END-OF-HEADER  ---------------------------------------------
*/

/*********************************************************************
*
*       #include Section
*
**********************************************************************
*/

#include "SEGGER_MEM.h"

/*********************************************************************
*
*       Defines, fixed
*
**********************************************************************
*/

#define TAG_AND_KVAL(X)  (((unsigned*)(X))[-1])
#define KVAL(X)          (TAG_AND_KVAL(X) & ~T)
#define TAG(X)           (TAG_AND_KVAL(X) & T)
#define T                (1U << (8*sizeof(unsigned)-1))

/*********************************************************************
*
*       Prototypes
*
**********************************************************************
*/

static void*     _Alloc     (void* pContext, unsigned NumBytes);
static void      _Free      (void* pContext, void* pMem);
static void*     _Realloc   (void* pContext, void* pMem, unsigned NumBytes);

/*********************************************************************
*
*       Static const data
*
**********************************************************************
*/

static const SEGGER_MEM_API _API = {
  _Alloc,
  _Free,
  _Realloc,
  NULL
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

/*********************************************************************
*
*       _IsExactPowerOfTwo()
*
*  Function description
*    Is argument an exact power of two?
*
*  Parameters
*    N - Value to test.
*
*  Return value
*    != 0 - Argument is an exact power of two.
*    == 0 - Argument is not an exact power of two.
*/
static unsigned _IsExactPowerOfTwo(unsigned N) {
  return (N & (N - 1)) == 0;
}

/*********************************************************************
*
*       _IsExactPowerOfTwo()
*
*  Function description
*    Compute log2(N).
*
*  Parameters
*    N - Value to compute integer binary logarithm of.
*
*  Return value
*    log2(N).
*/
static unsigned _ilogb(unsigned N) {
  unsigned Exp;
  //
  Exp = 0;
  while (N > 1) {
    ++Exp;
    N >>= 1;
  }
  //
  return Exp;
}

/*********************************************************************
*
*       _Alloc()
*
*  Function description
*    Allocate a block from the heap.
*
*  Parameters
*    pContext - Heap context.
*    NumBytes - Number of bytes to allocated.
*
*  Return value
*    == 0 - Zero-length allocation or no more memory
*    != 0 - Non-zero successful allocation
*/
static void* _Alloc(void* pContext, unsigned NumBytes) {
  SEGGER_MEM_BUDDY_LINKS* L;
  SEGGER_MEM_BUDDY_LINKS* P;
  SEGGER_MEM_BUDDY_HEAP*  pHeap;
  unsigned j;
  unsigned k;
  //
  pHeap = (SEGGER_MEM_BUDDY_HEAP *)pContext;
  //
  // Zero-allocation, no block allocated.
  //
  if (NumBytes == 0) {
    return 0;
  }
#if SEGGER_MEM_STATS
  //
  // Only attempted allocations get into statistics.
  //
  pHeap->Stats.AllocRequests++;
#endif
  //
  // Need extra word for size and allocated bit.
  //
  NumBytes += sizeof(unsigned);
  //
  // Compute minimum block size.
  //
  if (NumBytes < pHeap->MinSize) {
    // There is a minimum allocation size.
    k = pHeap->MinK;
  } else if (_IsExactPowerOfTwo(NumBytes)) {
    // Already a power of two.
    k = _ilogb(NumBytes);
  } else {
    // Not a power of two, so round up to next power of two.
    k = _ilogb(NumBytes)+1;
  }
  //
  // Find Block.
  //
  for (j = k; j <= pHeap->MaxK; ++j) {
    if (pHeap->aFreeHead[j].pNext != &pHeap->aFreeHead[j]) {
      break;
    }
  }
  //
  // If no block of exact or greater size exists, we've no space left.
  //
  if (j > pHeap->MaxK) {
#if SEGGER_MEM_STATS
    pHeap->Stats.AllocFailures++;
#endif
    return 0;
  }
  //
  // Account for allocation.
  //
#if SEGGER_MEM_STATS
  NumBytes = 1U << k;
  pHeap->Stats.UsedBytes += NumBytes;
  pHeap->Stats.FreeBytes -= NumBytes;
  if (pHeap->Stats.FreeBytes < pHeap->Stats.MinFreeBytes) {
    pHeap->Stats.MinFreeBytes = pHeap->Stats.FreeBytes;
  }
#endif
  //
  // Remove block from free list.
  //
  L = pHeap->aFreeHead[j].pNext;
  pHeap->aFreeHead[j].pNext = L->pNext;
  L->pNext->pPrev = &pHeap->aFreeHead[j];
  TAG_AND_KVAL(L) = T | k;
  //
  // Step R3.
  //
  while (j > k) {
    //
    // Step R4.
    //
    --j;
    //
    P = (SEGGER_MEM_BUDDY_LINKS*)((U8*)L + (1U<<j));
    TAG_AND_KVAL(P) = j;
    //
#if SEGGER_MEM_STATS
    pHeap->Stats.BlocksSplit++;
#endif
    //
    P->pNext = P->pPrev = &pHeap->aFreeHead[j];
    pHeap->aFreeHead[j].pNext = pHeap->aFreeHead[j].pPrev = P;
  }
  //
  return L;
}

/*********************************************************************
*
*       _Free()
*
*  Function description
*    Free an allocated block.
*
*  Parameters
*    pContext - Heap context.
*    pData    - Data to free (can be zero).
*/
static void _Free(void* pContext, void* pData) {
  SEGGER_MEM_BUDDY_LINKS* L;
  SEGGER_MEM_BUDDY_LINKS* P;
  SEGGER_MEM_BUDDY_HEAP*  pHeap;
  unsigned k;
  //
  pHeap = (SEGGER_MEM_BUDDY_HEAP *)pContext;
  //
  // Deal with simple case.  Don't register frees of null.
  //
  if (pData == 0) {
    return;
  }
#if SEGGER_MEM_STATS
  //
  // Only attempted frees get into statistics.
  //
  pHeap->Stats.FreeRequests++;
#endif
  //
  // Quick sanity check on address of block.
  //
  if ((U8*)pData < pHeap->pStore || pHeap->pStore + pHeap->Size <= (U8*)pData) {
#if SEGGER_MEM_STATS
    pHeap->Stats.FreeFailures++;
#endif
    return;
  }
  //
  // Check for double dispose.
  //
  L = (SEGGER_MEM_BUDDY_LINKS*)pData;
  k = TAG_AND_KVAL(L);
  //
  // If this block is free, we're double-freeing.
  //
  if ((k & T) == 0) {
#if SEGGER_MEM_STATS
    pHeap->Stats.FreeFailures++;
#endif
    return;
  }
  //
  // If this doesn't have a valid 'k' value then the heap is corrupt.
  //
  k &= ~T;
  if (k < pHeap->MinK || pHeap->MaxK < k) {
#if SEGGER_MEM_STATS
    pHeap->Stats.FreeFailures++;
#endif
    return;
  }
#if SEGGER_MEM_STATS
  //
  // Adjust statistics.
  //
  pHeap->Stats.FreeBytes += 1 << k;
  pHeap->Stats.UsedBytes -= 1 << k;
#endif
  //
  // Step S1.
  //
  for (;;) {
    //
    // Compute buddy, P.
    //
    P = (SEGGER_MEM_BUDDY_LINKS*)((((U8*)L - (U8*)pHeap->pStore) ^ (1U<<k)) + (U8*)pHeap->pStore);
    //
    if (k == pHeap->MaxK || TAG(P) || (TAG(P) == 0 && KVAL(P) != k)) {
      // Step S3.
      TAG_AND_KVAL(L) = k;
      L->pNext = pHeap->aFreeHead[k].pNext;
      pHeap->aFreeHead[k].pNext->pPrev = L;
      L->pPrev = &pHeap->aFreeHead[k];
      pHeap->aFreeHead[k].pNext = L;
      return;
    } else {
      //
      // Step S2.
      //
      P->pPrev->pNext = P->pNext;
      P->pNext->pPrev = P->pPrev;
      k++;
#if SEGGER_MEM_STATS
      pHeap->Stats.BlocksMerged++;
#endif
      if (P < L) {
        L = P;
      }
    }
  }
}

/*********************************************************************
*
*       _Realloc()
*
*  Function description
*    Reallocate a block in the heap.
*
*  Parameters
*    pContext - Heap context.
*    pData    - Block to reallocate (can be zero)
*    NumBytes - New size of block in bytes.
*
*  Return value
*    == 0 - Cannot reallocate block, or successful reallocation to zero bytes.
*    != 0 - Reallocated block start address.
*/
static void* _Realloc(void* pContext, void* pData, unsigned NumBytes) {
  if (pData == 0) {
    return _Alloc(pContext, NumBytes);
  } else if (NumBytes == 0) {
    _Free(pContext, pData);
    return 0;
  } else {
    return 0;  // can't reallocate
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_MEM_BUDDY_HEAP_Init()
*
*  Function description
*    Set up a binary buddy heap allocator.
*
*  Parameters
*    pMem          - Memory allocator context.
*    pHeap         - Binary buddy heap instance.
*    pStore        - Memory allocated to the binary buddy heap.
*    NumBytesStore - Number of bytes allocated to the heap.
*/
void SEGGER_MEM_BUDDY_HEAP_Init(SEGGER_MEM_CONTEXT* pMem, SEGGER_MEM_BUDDY_HEAP* pHeap, void* pStore, unsigned NumBytesStore) {
  SEGGER_MEM_BUDDY_LINKS* pLinks;
  unsigned k;
  unsigned m;
  //
  // Heaps must be meaningful, at least.
  //
  if (NumBytesStore < 64) {
    for (;;) {
      /* Hang */
    }
  }
  //
  // Compute largest power of two.
  //
  m = pHeap->MaxK = _ilogb(NumBytesStore) - 1;
  //
  // Trim size of heap.
  //
  pHeap->pStore  = (U8*)pStore;
  pHeap->Size    = 1U << m;
  pHeap->MinK    = 4;
  pHeap->MinSize = 1U << pHeap->MinK;
  pHeap->MaxK    = m;
  //
  // Initialize statistics.
  //
#if SEGGER_MEM_STATS
  memset(&pHeap->Stats, 0, sizeof(pHeap->Stats));
  pHeap->Stats.TotalCapacity = pHeap->Size;
  pHeap->Stats.FreeBytes     = pHeap->Size;
  pHeap->Stats.MinFreeBytes  = pHeap->Size;
#endif
  //
  pLinks = (SEGGER_MEM_BUDDY_LINKS*)(pHeap->pStore + sizeof(unsigned));
  pLinks->pNext = &pHeap->aFreeHead[m];
  pLinks->pPrev = &pHeap->aFreeHead[m];
  pHeap->aFreeHead[m].pNext = pHeap->aFreeHead[m].pPrev = pLinks;
  TAG_AND_KVAL(pLinks) = m;
  //
  for (k = 0; k < m; ++k) {
    pHeap->aFreeHead[k].pNext = pHeap->aFreeHead[k].pPrev = &pHeap->aFreeHead[k];
  }
  for (k = m+1; k < sizeof(unsigned)*8; ++k) {
    pHeap->aFreeHead[k].pNext = 0;
    pHeap->aFreeHead[k].pPrev = 0;
  }
  //
  // Set up context.
  //
  pMem->pAPI         = &_API;
  pMem->pContext     = pHeap;
  pMem->pLockAPI     = NULL;
  pMem->pLockContext = NULL;
}

/****** End Of File* ************************************************/
