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
File    : SEGGER_MEM_SYSTEM_HEAP.c
Purpose : SEGGER C library memory module implementation
Revision: $Rev: 15029 $
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "SEGGER_MEM.h"
#include <stdlib.h>

/*********************************************************************
*
*       Function prototypes
*
**********************************************************************
*/
static void*    _HAlloc     (void* pContext, unsigned NumBytes);
static void     _HFree      (void* pContext, void* pMem);
static void*    _HRealloc   (void* pContext, void* pMem, unsigned NumBytes);

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
static const SEGGER_MEM_API _HEAPAPI = {
  _HAlloc,
  _HFree,
  _HRealloc,
  NULL
};

/*********************************************************************
*
*       Static functions
*
**********************************************************************
*/

static void* _HAlloc(void* pContext, unsigned NumBytes) {
  SEGGER_MEM_USE_PARA(pContext);
  return malloc(NumBytes);
}

static void _HFree(void* pContext, void* pMem) {
  SEGGER_MEM_USE_PARA(pContext);
  free(pMem);
}

static void* _HRealloc(void* pContext, void* pMem, unsigned NumBytes) {
  SEGGER_MEM_USE_PARA(pContext);
  return realloc(pMem, NumBytes);
}

void SEGGER_MEM_SYSTEM_HEAP_Init(SEGGER_MEM_CONTEXT* pMem) {
  pMem->pAPI         = &_HEAPAPI;
  pMem->pContext     = NULL;
  pMem->pLockAPI     = NULL;
  pMem->pLockContext = NULL;
}

/****** End Of File* ************************************************/
