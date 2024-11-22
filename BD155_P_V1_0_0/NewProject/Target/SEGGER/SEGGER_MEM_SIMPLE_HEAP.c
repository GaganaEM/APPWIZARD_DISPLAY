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
File    : SEGGER_MEM_SIMPLE_HEAP.c
Purpose : Simple best-fit allocator.
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

#define LINKED_HEAP_CHUNK_SIZE  8   /* Must be a power of two.*/
#define ADDADR(X, N)  ((void*)((U8*)(X)+(N)))

/*********************************************************************
*
*       Prototypes
*
**********************************************************************
*/

static void*    _Alloc     (void* pContext, unsigned NumBytes);
static void     _Free      (void* pContext, void* pMem);
static void*    _Realloc   (void* pContext, void* pMem, unsigned NumBytes);

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
*       _Alloc()
*
*  Function description
*    Allocate a block from the heap.
*
*  Parameters
*    pContext - Heap context.
*    Size     - Number of bytes to allocated.
*
*  Return value
*    == 0 - Zero-length allocation or no more memory
*    != 0 - Non-zero successful allocation
*/
static void* _Alloc(void* pContext, unsigned Size) {
  SEGGER_MEM_SIMPLE_HEAP*       pHeap;
  SEGGER_MEM_SIMPLE_HEAP_BLOCK* p;
  SEGGER_MEM_SIMPLE_HEAP_BLOCK* q;
  SEGGER_MEM_SIMPLE_HEAP_BLOCK* BestFitBlock;
  unsigned                      BestFitSize;
  //
  pHeap = (SEGGER_MEM_SIMPLE_HEAP *)pContext;
  //
#if SEGGER_MEM_STATS
  pHeap->Stats.AllocRequests++;
#endif
  //
  // Zero-allocation, no block allocated.
  //
  if (Size == 0) {
    return 0;
  }
  //
  // Round up to a multiple of thr base chunk size and account for size word.
  //
  Size = (Size + sizeof(unsigned) + pHeap->ChunkSize-1) & (unsigned)(-(int)pHeap->ChunkSize);
  //
  // Find first block that could satisfy request.
  //
  p = pHeap->pHead;
  q = 0;
  //
  // No best-fit block yet.
  //
  BestFitSize = ~0u;
  BestFitBlock = 0;
  //
  // Search for best-fit block.
  //
  while (p) {
    //
    // Check whether block is correct size.
    //
    if (p->Size == Size) {
      //
      // Exact fit - remove block from the free list.
      //
      if (q) {
        q->pNext = p->pNext;
      } else {
        pHeap->pHead = p->pNext;
      }
      //
      // Block is no longer free.
      //
#if SEGGER_MEM_STATS
      pHeap->Stats.Fragmentation--;
      pHeap->Stats.UsedBytes += Size;
      pHeap->Stats.FreeBytes -= Size;
      if (pHeap->Stats.FreeBytes < pHeap->Stats.MinFreeBytes) {
        pHeap->Stats.MinFreeBytes = pHeap->Stats.FreeBytes;
      }
      if (pHeap->Stats.UsedBytes > pHeap->Stats.MaxUsedBytes) {
        pHeap->Stats.MaxUsedBytes = pHeap->Stats.UsedBytes;
      }
#endif
      //
      // Short-cut return.
      //
      *((unsigned*)p) = Size;
      return ((U8*)p) + sizeof(unsigned);
    }
    //
    // Check whether block can be split.
    //
    else if (p->Size > Size && p->Size < BestFitSize) {
      BestFitBlock = p;
      BestFitSize = p->Size;
    }
    //
    // Consider next block.
    //
    q = p;
    p = p->pNext;
  }
  //
  // Block must be split; take free memory from top of block.
  //
  if (BestFitBlock) {
    BestFitBlock->Size -= Size;
    p =(SEGGER_MEM_SIMPLE_HEAP_BLOCK *) ADDADR(BestFitBlock, BestFitSize - Size);
    *((unsigned*)p) = Size;
    //
    // Block is no longer free, but we've not changed the number
    // of free fragments either.
    //
#if SEGGER_MEM_STATS
    pHeap->Stats.UsedBytes += Size;
    pHeap->Stats.FreeBytes -= Size;
    if (pHeap->Stats.FreeBytes < pHeap->Stats.MinFreeBytes) {
      pHeap->Stats.MinFreeBytes = pHeap->Stats.FreeBytes;
    }
    if (pHeap->Stats.UsedBytes > pHeap->Stats.MaxUsedBytes) {
      pHeap->Stats.MaxUsedBytes = pHeap->Stats.UsedBytes;
    }
#endif
    return ((U8*)p) + sizeof(unsigned);
  } else {
#if SEGGER_MEM_STATS
    pHeap->Stats.AllocFailures += 1;
#endif
    return 0;
  }
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
*    pAddr    - Pointer to data to free (can be zero).
*/
static void _Free(void* pContext, void* pAddr) {
  SEGGER_MEM_SIMPLE_HEAP*       pHeap;
  SEGGER_MEM_SIMPLE_HEAP_BLOCK* p;
  SEGGER_MEM_SIMPLE_HEAP_BLOCK* pRover;
  SEGGER_MEM_SIMPLE_HEAP_BLOCK* pPrev;
  unsigned                      Size;
  //
  pHeap = (SEGGER_MEM_SIMPLE_HEAP *)pContext;
  //
#if SEGGER_MEM_STATS
  pHeap->Stats.FreeRequests++;
#endif
  //
  // Freeing a void is a no-op.
  //
  if (pAddr == 0) {
    return;
  }
  //
  // Adjust backwards to actual memory block origin.
  //
  pAddr = ((U8*)pAddr) - sizeof(unsigned);
  //
  // Recover size.
  //
  Size =* ((unsigned*)pAddr);
  //
  // Validate size.  We might be really unlucky.
  //
  if (Size == 0 || Size % LINKED_HEAP_CHUNK_SIZE != 0) {
    //
    // Pretty sure this block's been corrupted or double-freed
    // because the size must be an positive integer multiple of
    // the chunk size.
    //
#if SEGGER_MEM_STATS
    pHeap->Stats.FreeFailures++;
#endif
    return;
  }
  //
  if (pHeap->pHead == 0) {
    //
    // Deallocated onto head of heap.
    //
    pHeap->pHead = (SEGGER_MEM_SIMPLE_HEAP_BLOCK *)pAddr;
    pHeap->pHead->pNext = 0;
    pHeap->pHead->Size = Size;
#if SEGGER_MEM_STATS
    pHeap->Stats.Fragmentation++;
    pHeap->Stats.FreeBytes += Size;
    pHeap->Stats.UsedBytes -= Size;
#endif
  } else {
    //
    // Search for block adjacent to p, but with lower address.
    //
    p = (SEGGER_MEM_SIMPLE_HEAP_BLOCK *)pAddr;
    pRover = pHeap->pHead;
    pPrev = 0;
    while (pRover && pRover < (SEGGER_MEM_SIMPLE_HEAP_BLOCK*)pAddr) {
      pPrev = pRover; pRover = pRover->pNext;
    }
    //
    // Return block to free list.
    //
    p->pNext = pRover;
    p->Size = Size;
    if (pPrev) {
      pPrev->pNext = p;
    } else {
      pHeap->pHead = p;
    }
    //
    // Block is now free.
    //
#if SEGGER_MEM_STATS
    pHeap->Stats.Fragmentation++;
    pHeap->Stats.FreeBytes += Size;
    pHeap->Stats.UsedBytes -= Size;
#endif
    //
    // See if can coalesce with block to right.
    //
    if (pRover && (ADDADR(p, Size) == pRover)) {
      p->Size += pRover->Size;
      p->pNext = pRover->pNext;
#if SEGGER_MEM_STATS
      pHeap->Stats.Fragmentation--;
#endif
    }
    //
    // See if can coalesce with block to left.
    //
    if (pPrev && ADDADR(pPrev, pPrev->Size) == p) {
      pPrev->Size += p->Size;
      pPrev->pNext = p->pNext;
#if SEGGER_MEM_STATS
      pHeap->Stats.Fragmentation--;
#endif
    }
    //
#if SEGGER_MEM_STATS
    if (pHeap->Stats.Fragmentation > pHeap->Stats.MaxFragmentation) {
      pHeap->Stats.MaxFragmentation = pHeap->Stats.Fragmentation;
    }
#endif
  }
}

/*********************************************************************
*
*       _Realloc()
*
*  Function description
*    Reallocate a block from the heap.
*
*  Parameters
*    pContext - Pointer to Heap context.
*    pAddr    - Pointer to object to reallocate.
*    Size     - Requested new size.
*
*  Return value
*    == 0 - Zero-length allocation or no more memory
*    != 0 - Non-zero successful allocation
*
*  Notes
*    Simple implementation that doesn't try to expand / shrink
*    the current block, it uses copy-and-free.
*/
static void* _Realloc(void* pContext, void* pAddr, unsigned Size) {
  SEGGER_MEM_SIMPLE_HEAP* pHeap;
  void*                   pNewBlock;
  unsigned                ExistingSize;
  //
  pHeap = (SEGGER_MEM_SIMPLE_HEAP *)pContext;
  //
  if (pAddr == 0) {
    return _Alloc(pContext, Size);
  } else if (Size == 0) {
    _Free(pContext, pAddr);
    return 0;
  }
  //
  // Recover existing size.
  //
  ExistingSize = *((unsigned*)(((U8*)pAddr) - sizeof(unsigned)));
  //
  pNewBlock = _Alloc(pHeap, Size);
  if (pNewBlock == 0) {
    return 0;
  }
  SEGGER_MEM_MEMCPY(pNewBlock, pAddr, SEGGER_MIN(Size, ExistingSize));
  _Free(pHeap, pAddr);
  //
  return pNewBlock;
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_MEM_SIMPLE_HEAP_Init()
*
*  Function description
*    Set up a best-fit heap allocator.
*
*  Parameters
*    pMem      - Memory allocator context.
*    pHeap     - Best-fit heap instance.
*    pStore    - Memory allocated to the best-fit heap.
*    StoreSize - Number of bytes allocated to the heap.
*    ChunkSize - Minimum allocator unit (rounded to 8,
*                 16, 32, 64, or 128 bytes).
*/
void SEGGER_MEM_SIMPLE_HEAP_Init(SEGGER_MEM_CONTEXT* pMem, SEGGER_MEM_SIMPLE_HEAP* pHeap, void* pStore, unsigned StoreSize, unsigned ChunkSize) {
  //
  // Heaps must be meaningful, at least.
  //
  if (StoreSize < 64) {
    for (;;) {
      /* Hang*/
    }
  }
  //
  // Initialize heap and head block.
  //
  pHeap->pStore   = pStore;
  pHeap->StoreLen = StoreSize;
  //
  pHeap->pHead = (SEGGER_MEM_SIMPLE_HEAP_BLOCK *)pStore;
  pHeap->pHead->pNext = 0;
  pHeap->pHead->Size = StoreSize;
  //
  // Only allow power-of-two chunks between 8 and 128 bytes.
  //
  if (ChunkSize < 8) {
    ChunkSize = 8;
  } else if (ChunkSize < 16) {
    ChunkSize = 16;
  } else if (ChunkSize < 32) {
    ChunkSize = 32;
  } else if (ChunkSize < 64) {
    ChunkSize = 64;
  } else {
    ChunkSize = 128;
  }
  //
  pHeap->ChunkSize = ChunkSize;
  //
  // Need to handle initialization of stats...
  //
#if SEGGER_MEM_STATS
  memset(&pHeap->Stats, 0, sizeof(pHeap->Stats));
  pHeap->Stats.TotalCapacity = StoreSize;
  pHeap->Stats.FreeBytes     = StoreSize;
  pHeap->Stats.MinFreeBytes  = StoreSize;
#endif
  //
  // Set up context.
  //
  pMem->pAPI         = &_API;
  pMem->pContext     = pHeap;
  pMem->pLockAPI     = NULL;
  pMem->pLockContext = NULL;
}

/*********************************************************************
*
*       SEGGER_MEM_SIMPLE_HEAP_Print()
*
*  Function description
*    Print the heap structure/
*
*  Parameters
*    pHeap    - Pointer to Best-fit heap instance.
*    pfPrintf - Pointer to printf() function to use.
*/
void SEGGER_MEM_SIMPLE_HEAP_Print(SEGGER_MEM_SIMPLE_HEAP* pHeap, SEGGER_MEM_PRINTF_FUNC *pfPrintf) {
  U8       * pBlock;
  U8       * pHead;
  unsigned   Size;
  //
  pBlock = (U8 *)(pHeap->pStore);
  pHead  = (U8 *)(pHeap->pHead);
  //
  pfPrintf("HEAP:\n");
  while (pBlock < pHeap->pStore + pHeap->StoreLen) {
    if (pHead == NULL || pBlock < pHead) {
      Size = *(unsigned *)pBlock;
      pfPrintf("[%7u]  USED  %u bytes\n", (U32)(pBlock) - (U32)(pHeap->pStore), Size);
      pBlock += Size;
    } else if (pBlock == pHead) {
      Size = ((SEGGER_MEM_SIMPLE_HEAP_BLOCK *)pBlock)->Size;
      pfPrintf("[%7u]  FREE  %u bytes\n", (U32)(pBlock) - (U32)(pHeap->pStore), Size);
      pBlock += Size;
      pHead = (U8 *)((SEGGER_MEM_SIMPLE_HEAP_BLOCK *)pHead)->pNext;
    } else {
      pfPrintf("Lost sync\n");
      return;
    }
  }
  pfPrintf("\n");
}

/****** End Of File* ************************************************/
