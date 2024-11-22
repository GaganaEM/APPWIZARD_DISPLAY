/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 2003 - 2016  SEGGER Microcontroller GmbH & Co. KG        *
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
*       emFile version: Internal                                     *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : IDE_X_HW.h
Purpose     : IDE hardware layer
-------------------------- END-OF-HEADER -----------------------------
*/
#ifndef IDE_X_HW_H               // Avoid recursive and multiple inclusion
#define IDE_X_HW_H

#include "SEGGER.h"

#if defined(__cplusplus)
extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/

/*********************************************************************
*
*       Control and status functions
*/
void FS_IDE_HW_Reset     (U8 Unit);
int  FS_IDE_HW_IsPresent (U8 Unit);
void FS_IDE_HW_Delay400ns(U8 Unit);

/*********************************************************************
*
*       Register access functions
*/
U16  FS_IDE_HW_ReadReg   (U8 Unit, unsigned AddrOff);
void FS_IDE_HW_WriteReg  (U8 Unit, unsigned AddrOff, U16 Data);

/*********************************************************************
*
*       Data transfer functions
*/
void FS_IDE_HW_ReadData  (U8 Unit,       U8 * pData, unsigned NumBytes);
void FS_IDE_HW_WriteData (U8 Unit, const U8 * pData, unsigned NumBytes);

#if defined(__cplusplus)
}                /* Make sure we have C-declarations in C++ programs */
#endif

#endif // IDE_X_HW_H

/*************************** End of file ****************************/
