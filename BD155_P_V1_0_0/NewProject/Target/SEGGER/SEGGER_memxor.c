/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co KG                  *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*       (c) 2014  SEGGER Microcontroller GmbH & Co KG                *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File    : SEGGER_memxor.c
Purpose : Exclusive-or blocks, quickly.
Revision: $Rev: 9275 $
--------  END-OF-HEADER  ---------------------------------------------
*/

/*********************************************************************
*
*       #include Section
*
**********************************************************************
*/

#include "SEGGER.h"

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       SEGGER_memxor()
*
*  Function description
*    Exclusive-or a block of memory from Src to Dest, i.e.
*    pDest ^= pSrc.
*
*  Parameters
*    pDest[ByteCnt] - Original data and result
*    pSrc[ByteCnt]  - Array to combine with pDest using xor.
*/
void SEGGER_memxor(void *pDest, const void *pSrc, unsigned ByteCnt) {
  U8       *pD;
  const U8 *pS;
  //
  // Manual loop unrolling.
  //
  pD = (U8 *)pDest;
  pS = (const U8 *)pSrc;
  while (ByteCnt >= 16) {
    *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++;
    *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++;
    *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++;
    *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++; *pD++ ^= *pS++;
    ByteCnt -= 16;
  }
  //
  // Last block, if any, handled by looping.
  //
  while (ByteCnt > 0) {
    *pD++ ^= *pS++;
    --ByteCnt;
  }
}

/****** End Of File *************************************************/
