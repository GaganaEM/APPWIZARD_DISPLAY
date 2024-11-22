/*********************************************************************
*                     SEGGER Microcontroller GmbH                    *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 1995 - 2018 SEGGER Microcontroller GmbH                  *
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
*       OS version: 5.00a                                            *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File    : UDPCOM.h
Purpose : Header file for embOSView communication using UDP
---------------------------END-OF-HEADER------------------------------
*/

#ifndef UDPCOM_H
#define UDPCOM_H             // Avoid multiple inclusion

void UDP_Process_Init (void);
void UDP_Process_Send1(char c);

#endif                         // Avoid multiple inclusion

/****** End Of File *************************************************/


