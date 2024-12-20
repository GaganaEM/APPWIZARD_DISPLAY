/*********************************************************************
*                     SEGGER Microcontroller GmbH                    *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 1995 - 2019 SEGGER Microcontroller GmbH                  *
*                                                                    *
*       Internet: segger.com  Support: support_embos@segger.com      *
*                                                                    *
**********************************************************************
*                                                                    *
*       embOS * Real time operating system for microcontrollers      *
*                                                                    *
*       Please note:                                                 *
*                                                                    *
*       Knowledge of this file may under no circumstances            *
*       be used to write a similar product or a real-time            *
*       operating system for in-house use.                           *
*                                                                    *
*       Thank you for your fairness !                                *
*                                                                    *
**********************************************************************
*                                                                    *
*       OS version: 5.06                                             *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File    : BSP.h
Purpose : BSP (Board support package)
--------  END-OF-HEADER  ---------------------------------------------
*/

#ifndef BSP_H                           /* Avoid multiple inclusion */
#define BSP_H

/*********************************************************************
*
*       Defines, non-configurable
*
**********************************************************************
*/

/* In order to avoid warnings for undefined parameters */
#ifndef BSP_USE_PARA
  #if defined(NC30) || defined(NC308)
    #define BSP_USE_PARA(para)
  #else
    #define BSP_USE_PARA(para) para=para
  #endif
#endif

/*********************************************************************
*
*       Prototypes
*
**********************************************************************
*/

#ifdef __cplusplus
extern "C" {
#endif

/*********************************************************************
*
*       General
*/
void BSP_Init      (void);
void BSP_SetLED    (int Index);
void BSP_ClrLED    (int Index);
void BSP_ToggleLED (int Index);
void BSP_SDRAM_Init(void);

#ifdef __cplusplus
}
#endif

#endif                                  /* avoid multiple inclusion */

/****** End Of File *************************************************/
