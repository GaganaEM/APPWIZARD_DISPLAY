/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co KG                  *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 1995 - 2014  SEGGER Microcontroller GmbH & Co KG         *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : BSP_GPIO.h
Purpose     : BSP (Board support package) for GPIO.
---------------------------END-OF-HEADER------------------------------
*/

#ifndef _BSP_GPIO_H_     // Avoid multiple/recursive inclusion.
#define _BSP_GPIO_H_  1

#include "SEGGER.h"

#if defined(__cplusplus)
extern "C" {  /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

/*********************************************************************
*
*       GPIO
*
*   Functions for GPIO
*/
void BSP_GPIO_Init(void);
void BSP_GPIO_ConfigDir(unsigned PortNumber, U32 PinMask, unsigned Direction);
void BSP_GPIO_ClrValue(unsigned PortNumber, U32 PinMask);
void BSP_GPIO_SetValue(unsigned PortNumber, U32 PinMask);
void BSP_GPIO_GetValue(unsigned PortNumber, U32 PinMask, U32 * PinValue);


#if defined(__cplusplus)
  }     // Make sure we have C-declarations in C++ programs
#endif

#endif  // Avoid multiple/recursive inclusion

/****** End Of File *************************************************/
