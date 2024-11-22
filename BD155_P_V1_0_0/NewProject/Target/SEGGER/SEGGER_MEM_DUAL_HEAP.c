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
File    : SEGGER_MEM_DUAL_HEAP.c
Purpose : SEGGER Memory stack-like buffer implementation
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

/*********************************************************************
*
*       Function prototypes
*
**********************************************************************
*/

/*********************************************************************
*
*       API functions
*
**********************************************************************
*/

static void*    _DAlloc     (void* pContext, unsigned NumBytes);
static void     _DFree      (void* pContext, void* pMem);
static void*    _DRealloc   (void* pContext, void* pMem, unsigned NumBytes);

static const SEGGER_MEM_API _API = {
  _DAlloc,
  _DFree,
  _DRealloc,
  NULL
};

static SEGGER_MEM_CONTEXT* _DSubcontextForAddr(SEGGER_MEM_DUAL_HEAP* pHeap, void* pMem) {
  if (pHeap->SmallHeap.pBaseAddr < pHeap->LargeHeap.pBaseAddr) {
    return pMem < pHeap->LargeHeap.pBaseAddr ? &pHeap->SmallContext : &pHeap->LargeContext;
  } else {
    return pMem < pHeap->SmallHeap.pBaseAddr ? &pHeap->LargeContext : &pHeap->SmallContext;
  }
}

static SEGGER_MEM_CONTEXT* _DSubcontextForSize(SEGGER_MEM_DUAL_HEAP* pHeap, unsigned NumBytes) {
  return NumBytes <= pHeap->SmallHeap.ChunkSize ? &pHeap->SmallContext : &pHeap->LargeContext;
}

static void* _DAlloc(void* pContext, unsigned NumBytes) {
  return SEGGER_MEM_Alloc(_DSubcontextForSize((SEGGER_MEM_DUAL_HEAP *)pContext, NumBytes), NumBytes);
}

static void _DFree(void* pContext, void* pMem) {
  if (pMem) {
    SEGGER_MEM_Free(_DSubcontextForAddr((SEGGER_MEM_DUAL_HEAP *)pContext, pMem), pMem);
  }
}

static void* _DRealloc(void* pContext, void* pMem, unsigned NumBytes) {
  SEGGER_MEM_DUAL_HEAP* pHeap;
  //
  pHeap = (SEGGER_MEM_DUAL_HEAP*)pContext;
  if (pMem == 0) {
    return _DAlloc(pContext, NumBytes);
  } else if (NumBytes == 0) {
    _DFree(pContext, pMem);
    return 0;
  } else if (NumBytes > pHeap->LargeHeap.ChunkSize) {
    return 0;
  } else {
    //
    // The semi-complex case of subheap relocation.
    //
    SEGGER_MEM_CONTEXT* pExistingSubcontext;
    SEGGER_MEM_CONTEXT* pNewSubcontext;
    void*               pNew;
    //
    pExistingSubcontext = _DSubcontextForAddr(pHeap, pMem);
    pNewSubcontext      = _DSubcontextForSize(pHeap, NumBytes);
    //
    if (pNewSubcontext == pExistingSubcontext) { // In-heap resize is a no-op.
      return pMem;
    }
    //
    // We must reallocate memory between heaps.
    //
    pNew = SEGGER_MEM_Alloc(pNewSubcontext, NumBytes);
    SEGGER_MEM_MEMCPY(pNew, pMem, pHeap->SmallHeap.ChunkSize);
    return pNew;
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
*       SEGGER_MEM_DUAL_HEAP_Init()
*
* Function description
*   Initializes the memory context for DUAL HEAP
*   and the context for SEGGER_MEM with the DUAL HEAP parameters.
*
*/
void SEGGER_MEM_DUAL_HEAP_Init(SEGGER_MEM_CONTEXT*    pMem,
                               SEGGER_MEM_DUAL_HEAP*  pHeap,
                               void*                  pSmallWorkspace,
                               unsigned               SmallNumChunks,
                               unsigned               SmallChunkSize,
                               void*                  pLargeWorkspace,
                               unsigned               LargeNumChunks,
                               unsigned               LargeChunkSize) {
  pMem->pAPI         = &_API;
  pMem->pContext     = pHeap;
  pMem->pLockAPI     = NULL;
  pMem->pLockContext = NULL;
  SEGGER_MEM_CHUNK_HEAP_Init(&pHeap->SmallContext, &pHeap->SmallHeap, pSmallWorkspace, SmallNumChunks, SmallChunkSize);
  SEGGER_MEM_CHUNK_HEAP_Init(&pHeap->LargeContext, &pHeap->LargeHeap, pLargeWorkspace, LargeNumChunks, LargeChunkSize);
}

/****** End Of File* ************************************************/
