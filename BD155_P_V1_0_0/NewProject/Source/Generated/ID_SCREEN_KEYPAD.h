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
File        : ID_SCREEN_KEYPAD.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_KEYPAD_H
#define ID_SCREEN_KEYPAD_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_08            (GUI_ID_USER + 2)
#define ID_IMAGE_KEYPAD_CURSOR (GUI_ID_USER + 3)
#define ID_EDIT_CHARACTERS     (GUI_ID_USER + 4)
#define ID_TEXT_WARNING        (GUI_ID_USER + 1)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_KEYPAD_CURSOR__APPW_JOB_SETX0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_KEYPAD_CURSOR__APPW_JOB_SETY0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_EDIT_CHARACTERS__APPW_JOB_SETTEXT  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED                                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED_0                                      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_KEYPAD__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_WARNING__APPW_JOB_SETTEXT     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_KEYPAD(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_KEYPAD_H

/*************************** End of file ****************************/
