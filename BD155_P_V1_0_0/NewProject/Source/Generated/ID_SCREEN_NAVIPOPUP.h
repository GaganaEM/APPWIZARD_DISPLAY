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
File        : ID_SCREEN_NAVIPOPUP.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_NAVIPOPUP_H
#define ID_SCREEN_NAVIPOPUP_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_01      (GUI_ID_USER + 1)
#define ID_IMAGE_02      (GUI_ID_USER + 2)
#define ID_IMAGE_00      (GUI_ID_USER + 3)
#define ID_IMAGE_HOME    (GUI_ID_USER + 4)
#define ID_IMAGE_LEFT    (GUI_ID_USER + 5)
#define ID_IMAGE_RIGHT   (GUI_ID_USER + 6)
#define ID_IMAGE_PLUS    (GUI_ID_USER + 7)
#define ID_IMAGE_MINUS   (GUI_ID_USER + 8)
#define ID_IMAGE_ERROR   (GUI_ID_USER + 9)
#define ID_TEXT_DAYLIGHT (GUI_ID_USER + 10)
#define ID_TEXT_HOME     (GUI_ID_USER + 11)
#define ID_TEXT_Next     (GUI_ID_USER + 13)
#define ID_TEXT_Previous (GUI_ID_USER + 14)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_NAVIPOPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ERROR__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_NAVIPOPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ERROR__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_NAVIPOPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ERROR__APPW_JOB_SETBITMAP_1(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_NAVIPOPUP(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_NAVIPOPUP_H

/*************************** End of file ****************************/
