/*********************************************************************
*                     SEGGER Microcontroller GmbH                    *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2024  SEGGER Microcontroller GmbH                *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : ID_SCREEN_INTENSITY.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_INTENSITY_H
#define ID_SCREEN_INTENSITY_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_00         (GUI_ID_USER + 4)
#define ID_SLIDER_INTENSITY (GUI_ID_USER + 1)
#define ID_TEXT_INTENSEPER  (GUI_ID_USER + 2)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_SLIDER_INTENSITY__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_INTENSEPER__APPW_JOB_SETVALUE (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_00__APPW_JOB_SETBITMAP       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_INTENSITY__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_00__APPW_JOB_SETBITMAP_0     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_INTENSITY(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_INTENSITY_H

/*************************** End of file ****************************/
