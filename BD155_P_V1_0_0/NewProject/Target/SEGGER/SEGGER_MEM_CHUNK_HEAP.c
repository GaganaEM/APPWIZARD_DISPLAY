/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co. KG                 *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 1995 - 2015  SEGGER Microcontroller GmbH & Co. KG        *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File    : SEGGER_MEM_CHUNK_HEAP.c
Purpose : SEGGER fixed-size block heap implementation.
Revision: $Rev: 15029 $
--------  END-OF-HEADER  ---------------------------------------------
*/

/*********************************************************************
*
*       #include section
*
**********************************************************************
*/

#include "SEGGER_MEM.h"

struct SEGGER_MEM_CHUNK_tag {
  SEGGER_MEM_CHUNK* pNext;
};

/*********************************************************************
*
*       Function prototypes
*
**********************************************************************
*/

static void*    _KAlloc     (void* pContext, unsigned NumBytes);
static void     _KFree      (void* pContext, void* pMem);
static void*    _KRealloc   (void* pContext, void* pMem, unsigned NumBytes);
static unsigned _KChunkSize (void* pContext);


/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static const SEGGER_MEM_API _API = {
  _KAlloc,
  _KFree,
  _KRealloc,
  _KChunkSize
};

/*********************************************************************
*
*       Static functions
*
**********************************************************************
*/

/*********************************************************************
*
*       _KChunkSize()
*
*  Function description
*    Return chunk size.
*
*  Parameters
*    pContext - Heap context.
*
*  Return value
*    Selected chunk size.
*/
static unsigned _KChunkSize(void* pContext) {
  SEGGER_MEM_SELFTEST_HEAP* pHeap;
  //
  pHeap = (SEGGER_MEM_SELFTEST_HEAP*)pContext;
  return pHeap->ChunkSize;
}

/********************************************************************* 
* 
*       _KAlloc()
*
* Function description
*   Allocates a block from the buffer
*
* Parameters
*   pContext: Pointer to SBUFFER Context.
*   NumBytes: Number of Bytes to allocate.
*
* Return value
*      0: If block could not be allocated (e.g. because buffer is too small)
*   != 0: Pointer to the start of the memory block
*/
static void* _KAlloc(void* pContext, unsigned NumBytes) {
  SEGGER_MEM_CHUNK_HEAP* pHeap;
  void*                  pMem;
  //
  pHeap = (SEGGER_MEM_CHUNK_HEAP*)pContext;
  //
  pMem = 0;
  if (NumBytes <= pHeap->ChunkSize && pHeap->pFreeChunks) {
#if SEGGER_MEM_STATS
    pHeap->Stats.NumAllocations++;
    pHeap->Stats.NumInUse++;
    if (pHeap->Stats.NumInUse > pHeap->Stats.NumInUseMax) {
      pHeap->Stats.NumInUseMax = pHeap->Stats.NumInUse;
    }
#endif
    //
    // Allocate the head chunk.
    //
    pMem = pHeap->pFreeChunks;
    pHeap->pFreeChunks = pHeap->pFreeChunks->pNext;
  } else {
    //
    // Cannot satisfy oversize request or no chunks left.
    //
    pMem = 0;
  }
  //
  return pMem;
}

/*********************************************************************
*
*       _KFree()
*
* Function description
*   Marks a memory block in the buffer to be free again
*
* Parameters
*   pContext: Pointer to SBUFFER Context.
*   pMem:     Pointer to the start of the block.
*/
static void _KFree(void* pContext, void* pMem) {
  SEGGER_MEM_CHUNK_HEAP* pHeap;
  SEGGER_MEM_CHUNK*      pChunk;

  pHeap  = (SEGGER_MEM_CHUNK_HEAP*)pContext;

  if (pMem == 0) {
    return;
  }

#if SEGGER_MEM_STATS
  pHeap->Stats.NumFrees++;
  pHeap->Stats.NumInUse--;
#endif
  //
  // Is this chunk already in the free list?
  //
#if 0
  for (pChunk = pHeap->pFreeChunks; pChunk; pChunk = pChunk->pNext) {
    CRYPTO_ASSERT(pChunk != pMem);
  }
#endif
  //
  pChunk = (SEGGER_MEM_CHUNK *)pMem;
  pChunk->pNext = pHeap->pFreeChunks;
  pHeap->pFreeChunks = pChunk;
}

/*********************************************************************
*
*       _KRealloc()
*
* Function description
*   Changes the size of an allocated memory block.
*
* Parameters
*   pContext: Pointer to heap context.
*   pMem:     Pointer to the start of the block.
*   NumBytes: Number of bytes to allocate.
*
* Return value
*      0: If block could not be resized (e.g. because buffer is too small)
*         or block has been freed because NumBytes == 0
*   != 0: Pointer to the start of the memory block
*/
static void* _KRealloc(void* pContext, void* pMem, unsigned NumBytes) {
  SEGGER_MEM_CHUNK_HEAP* pHeap;
  //
  pHeap = (SEGGER_MEM_CHUNK_HEAP*)pContext;
  if (pMem == 0) {
    return _KAlloc(pContext, NumBytes);
  } else if (NumBytes == 0) {
    _KFree(pContext, pMem);
    return 0;
  } else if (NumBytes <= pHeap->ChunkSize) {
    return pMem;
  } else {
    return 0;
  }
}

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_MEM_CHUNK_HEAP_Init()
*
* Function description
*   Initializes the memory context for heap
*   and the context for SEGGER_MEM with the heap parameters.
*
*/
void SEGGER_MEM_CHUNK_HEAP_Init(SEGGER_MEM_CONTEXT* pMem, SEGGER_MEM_CHUNK_HEAP* pHeap, void* pBuffer, unsigned NumChunks, unsigned ChunkSize) {
  //
  SEGGER_MEM_MEMSET(pHeap, 0, sizeof(*pHeap));
  pMem->pAPI         = &_API;
  pMem->pContext     = pHeap;
  pMem->pLockAPI     = NULL;
  pMem->pLockContext = NULL;
  //
  if (ChunkSize < sizeof(void*) || NumChunks == 0) {
    for (;;) {
      /* Hang*/
    }
  }
  pHeap->pBaseAddr   = pBuffer;
  pHeap->ChunkSize   = ChunkSize;
  pHeap->pFreeChunks = (SEGGER_MEM_CHUNK *)pBuffer;
  while (NumChunks > 1) {
   *(void**)pBuffer = (U8*)pBuffer + ChunkSize;
    pBuffer           = (U8*)pBuffer + ChunkSize;
    --NumChunks;
  }
 *(void**)pBuffer = 0;
}

/****** End Of File* ************************************************/
