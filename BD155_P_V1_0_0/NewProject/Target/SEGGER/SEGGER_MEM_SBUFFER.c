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
File    : SEGGER_MEM_SBUFFER.c
Purpose : SEGGER Memory stack-like buffer implementation
Revision: $Rev: 15030 $
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "SEGGER_MEM.h"
#if DEBUG >= 3
  #include <stdio.h>
#endif

/*********************************************************************
*
*       Function prototypes
*
**********************************************************************
*/

static void*    _SAlloc     (void* pContext, unsigned NumBytes);
static void     _SFree      (void* pContext, void* pMem);
static void*    _SRealloc   (void* pContext, void* pMem, unsigned NumBytes);

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static const SEGGER_MEM_API _API = {
  _SAlloc,
  _SFree,
  _SRealloc,
  NULL
};

/*********************************************************************
*
*       Static functions
*
**********************************************************************
*/

/********************************************************************* 
* 
*       _SAlloc()
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
*   != 0: Pointer to sthe start of the memory block
* 
*/ 
static void* _SAlloc(void* pContext, unsigned NumBytes) {
  SEGGER_MEM_SBUFFER* p;
  void*               pMem;

  p = (SEGGER_MEM_SBUFFER*)pContext;

  if (p->NumBytesUsed + NumBytes > p->BufferSize) {
#if DEBUG >= 3
    printf("Alloc[%d] failed, used = %d\n", NumBytes, p->NumBytesUsed);
#endif
    return NULL;
  }
  pMem = p->pBuffer + p->NumBytesUsed;
  p->NumBytesUsed += NumBytes;

#if SEGGER_MEM_STATS
  if (p->NumBytesUsed > p->Stats.NumBytesMax) {
    p->Stats.NumBytesMax = p->NumBytesUsed;
  }
  p->Stats.NumAllocations++;
#endif
  p->pLastBlock = pMem;

#if DEBUG >= 3
  printf("Alloc[%d] %p, used = %d\n", NumBytes, pMem, p->NumBytesUsed);
#endif

  return pMem;
}

/********************************************************************* 
* 
*       _SFree()
* 
* Function description 
*   Marks a memory block in the buffer to be free again
* 
* Parameters 
*   pContext: Pointer to SBUFFER Context.
*   pMem:     Pointer to the start of the block.
* 
* Notes
*   _SFree will always mark all memory after pMem as freed. 
*   If pMem is not the last allocated block 
*   all blocks after pMem are freed, too.
* 
*/
static void _SFree(void* pContext, void* pMem) {
  SEGGER_MEM_SBUFFER* p;

  p = (SEGGER_MEM_SBUFFER*)pContext;
  
  if (pMem == 0) {
    return;
  }
  
  if ((pMem < (void*)p->pBuffer) || (pMem >= (void*)(p->pBuffer + p->BufferSize))) {
#if DEBUG >= 3
    printf("Free %p, pointer not in buffer\n", pMem);
#endif
    return;
  }
#if SEGGER_MEM_STATS
  p->Stats.NumFrees++;
#endif
  if (pMem >= (void*)(p->pBuffer + p->NumBytesUsed)) {
#if DEBUG >= 3
    printf("Free %p, pointer already free'd\n", pMem);
#endif
    return; // Already freed
  }
  p->NumBytesUsed = (U8*)pMem - p->pBuffer;
  p->pLastBlock = 0;
#if DEBUG >= 3
  printf("Free %p, used = %d\n", pMem, p->NumBytesUsed);
#endif
}

/********************************************************************* 
* 
*       _SRealloc()
* 
* Function description 
*   Changes the size of an allocated memory block.
* 
* Parameters 
*   pContext: Pointer to SBUFFER Context.
*   pMem:     Pointer to the start of the block.
*   NumBytes: Number of Bytes to allocate.
* 
* Return value 
*      0: If block could not be resized (e.g. because buffer is too small)
*         or block has been freed because NumBytes == 0
*   != 0: Pointer to sthe start of the memory block
*
* Notes
*   Only the last allocated block can be resized.
*   If the last block is freed, no block can be resized
*   unless it is newly allocated.
* 
*/
static void* _SRealloc(void* pContext, void* pMem, unsigned NumBytes) {
  SEGGER_MEM_SBUFFER* p;
  unsigned            BlockSize;
  unsigned            SizeChange;

  p = (SEGGER_MEM_SBUFFER*)pContext;
  
  if (pMem == 0) {
    pMem = _SAlloc(pContext, NumBytes);
  } else if ((p->pLastBlock == 0) || (pMem != p->pLastBlock)) { // No reallocation possible
#if DEBUG >= 3
    printf("Realloc[%d] %p but last block is %p\n", NumBytes, pMem, p->pLastBlock);
#endif
    pMem = 0;
  } else if (NumBytes == 0) {
#if DEBUG >= 3
    printf("Realloc[%d] %p to zero, free it\n", NumBytes, pMem);
#endif
    _SFree(pContext, pMem);
    pMem = 0;
  } else {    
    BlockSize = (unsigned)(p->pBuffer - (unsigned char*)pMem) + p->NumBytesUsed;
    if (NumBytes < BlockSize) {  // Shrink allocation block
      SizeChange = (BlockSize - NumBytes);
      p->NumBytesUsed -= SizeChange;
    } else if (NumBytes < BlockSize) {  // Extend allocation block
      SizeChange = NumBytes - BlockSize;
      if ((p->NumBytesUsed + SizeChange) > p->BufferSize) { // Not enough space
#if DEBUG >= 3
        printf("Realloc[%d] %p, no free memory\n", NumBytes, pMem);
#endif
        pMem = 0;
      } else {
        p->NumBytesUsed += SizeChange;
      }
    }
  }
  return pMem;
}

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/

/********************************************************************* 
* 
*       SEGGER_MEM_SBUFFER_Init()
* 
* Function description 
*   Initializes the memory context for SBUFFER
*   and the context for SEGGER_MEM with the SBUFFER parameters.
* 
*/
void SEGGER_MEM_SBUFFER_Init(SEGGER_MEM_CONTEXT* pMem, SEGGER_MEM_SBUFFER* pSBuffer, void* pBuffer, unsigned BufferSize) {
  //
  pMem->pAPI         = &_API;
  pMem->pContext     = pSBuffer;
  pMem->pLockAPI     = NULL;
  pMem->pLockContext = NULL;
  //
  pSBuffer->pBuffer        = pBuffer;
  pSBuffer->BufferSize     = BufferSize;
  pSBuffer->NumBytesUsed   = 0;
  pSBuffer->pLastBlock     = 0;
#if SEGGER_MEM_STATS
  pSBuffer->Stats.NumBytesMax    = 0;
  pSBuffer->Stats.NumAllocations = 0;
  pSBuffer->Stats.NumFrees       = 0;
#endif
}

/****** End Of File* ************************************************/
