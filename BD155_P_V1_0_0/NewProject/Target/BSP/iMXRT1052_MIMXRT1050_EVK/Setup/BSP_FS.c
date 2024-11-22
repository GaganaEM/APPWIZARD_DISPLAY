/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 2003 - 2017  SEGGER Microcontroller GmbH & Co. KG        *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       emFile * File system for embedded applications               *
*                                                                    *
*                                                                    *
*       Please note:                                                 *
*                                                                    *
*       Knowledge of this file may under no circumstances            *
*       be used to write a similar product for in-house use.         *
*                                                                    *
*       Thank you for your fairness !                                *
*                                                                    *
**********************************************************************
*                                                                    *
*       emFile version: V4.04c                                       *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File    : BSP_FS.c
Purpose : BSP for NXP iMXRT1052 and NXP MIMXRT1050 EVK evaluation board.
--------  END-OF-HEADER  ---------------------------------------------
*/

/*********************************************************************
*
*       #include section
*
**********************************************************************
*/
#include "Global.h"
#include "BSP_FS.h"
#include "SEGGER.h"
#include "MIMXRT1052.h"

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       BSP_FS_CleanCacheRange
*/
void BSP_FS_CleanCacheRange(void * p, unsigned NumBytes) {
  SCB_CleanDCache_by_Addr(p, NumBytes);
}

/*********************************************************************
*
*       BSP_FS_InvalidateCacheRange
*/
void BSP_FS_InvalidateCacheRange(void * p, unsigned NumBytes) {
  SCB_InvalidateDCache_by_Addr(p, NumBytes);
}

/*************************** End of file ****************************/

