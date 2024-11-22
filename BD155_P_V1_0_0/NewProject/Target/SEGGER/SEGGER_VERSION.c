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
File    : SEGGER_VERSION.c
Purpose : SEGGER version number support functions.
Revision: $Rev: 9290 $
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "SEGGER.h"

void SEGGER_VERSION_GetString(char acText[], unsigned Version) {
  unsigned Revision;
  //
  acText[0] = '0' + ((Version / 10000) & 0xFF);
  acText[1] = '.';
  acText[2] = '0' + (Version /  1000 % 10);
  acText[3] = '0' + (Version /   100 % 10);
  //
  Revision = Version % 100;
  if (Revision > 26) {
    Revision -= 26;
    acText[4] = 'z';
    acText[5] = '0' + ((Revision / 10) & 0xFF);
    acText[6] = '0' + (Revision % 10);
    acText[7] = 0;
  } else if (Revision > 0) {
    acText[4] = 'a' + ((Revision - 1) & 0xFF);
    acText[5] = 0;
  } else {
    acText[4] = 0;
  }
}

/****** End Of File *************************************************/
