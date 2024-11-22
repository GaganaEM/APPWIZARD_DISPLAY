/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co KG                  *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 1995 - 2015  SEGGER Microcontroller GmbH & Co KG         *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File    : SEGGER_MEM.c
Purpose : SEGGER Memory implementation
Revision: $Rev: 15029 $
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "SEGGER_MEM.h"

/*********************************************************************
*
*       SEGGER_MEM_Alloc()
*
* Function description
*
*/
void* SEGGER_MEM_Alloc(SEGGER_MEM_CONTEXT* pContext, unsigned NumBytes) {
  void *pBlock;
  //
  NumBytes = (NumBytes+3) & ~3u;
  if (pContext->pLockAPI) {
    pContext->pLockAPI->pfLock(pContext->pLockContext);
    pBlock = pContext->pAPI->pfAlloc(pContext->pContext, NumBytes);
    pContext->pLockAPI->pfUnlock(pContext->pLockContext);
  } else {
    pBlock = pContext->pAPI->pfAlloc(pContext->pContext, NumBytes);
  }
  return pBlock;
}

/*********************************************************************
*
*       SEGGER_MEM_ChunkSize()
*
* Function description
*
*/
unsigned SEGGER_MEM_ChunkSize(SEGGER_MEM_CONTEXT* pContext) {
  if (pContext->pAPI->pfChunkSize) {
    return pContext->pAPI->pfChunkSize(pContext->pContext);
  } else {
    return 0;
  }
}

/*********************************************************************
*
*       SEGGER_MEM_ZeroAlloc()
*
* Function description
*
*/
void* SEGGER_MEM_ZeroAlloc(SEGGER_MEM_CONTEXT* pContext, unsigned NumBytes) {
  void *pMem;
  //
  pMem = SEGGER_MEM_Alloc(pContext, NumBytes);
  if (pMem) {
    memset(pMem, 0, NumBytes);
  }
  return pMem;
}

/*********************************************************************
*
*       SEGGER_MEM_Free()
*
* Function description
*
*/
void SEGGER_MEM_Free(SEGGER_MEM_CONTEXT* pContext, void * pMem) {
  if (pContext->pLockAPI != NULL) {
    pContext->pLockAPI->pfLock(pContext->pLockContext);
    pContext->pAPI->pfFree(pContext->pContext, pMem);
    pContext->pLockAPI->pfUnlock(pContext->pLockContext);
  } else {
    pContext->pAPI->pfFree(pContext->pContext, pMem);
  }
}

/*********************************************************************
*
*       SEGGER_MEM_Realloc()
*
* Function description
*
*/
void* SEGGER_MEM_Realloc(SEGGER_MEM_CONTEXT * pContext, void * pMem, unsigned NumBytes) {
  if (SEGGER_MEM_CanRealloc(pContext)) {
    if (pContext->pLockAPI != NULL) {
      pContext->pLockAPI->pfLock(pContext->pLockContext);
      pMem = pContext->pAPI->pfRealloc(pContext->pContext, pMem, NumBytes);
      pContext->pLockAPI->pfUnlock(pContext->pLockContext);
    } else {
      pMem = pContext->pAPI->pfRealloc(pContext->pContext, pMem, NumBytes);
    }
  } else {
    pMem = NULL;
  }
  return pMem;
}

/*********************************************************************
*
*       SEGGER_MEM_SetLocking()
*
* Function description
*
*/
void SEGGER_MEM_SetLocking(SEGGER_MEM_CONTEXT* pContext, const SEGGER_MEM_LOCK_API *pLockApi, void *pLockContext) {
  pContext->pLockAPI     = pLockApi;
  pContext->pLockContext = pLockContext;
}

/*********************************************************************
*
*       SEGGER_MEM_Panic()
*
* Function description
*
*/
void SEGGER_MEM_Panic(const char *sText) {
  SEGGER_USE_PARA(sText);

  for (;;) {
    /* Hang */
  }
}

/****** End Of File *************************************************/
