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
File        : ID_SCREEN_CHANGEPASSWORD.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_CHANGEPASSWORD_H
#define ID_SCREEN_CHANGEPASSWORD_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_00           (GUI_ID_USER + 2)
#define ID_IMAGE_PASSBLOCK1   (GUI_ID_USER + 3)
#define ID_IMAGE_PASSBLOCK2   (GUI_ID_USER + 4)
#define ID_IMAGE_PASSBLOCK3   (GUI_ID_USER + 5)
#define ID_IMAGE_PASSBLOCK4   (GUI_ID_USER + 6)
#define ID_IMAGE_PASSBLOCK5   (GUI_ID_USER + 7)
#define ID_IMAGE_CURSORBLOCK1 (GUI_ID_USER + 8)
#define ID_IMAGE_CURSORBLOCK2 (GUI_ID_USER + 9)
#define ID_IMAGE_CURSORBLOCK3 (GUI_ID_USER + 10)
#define ID_IMAGE_CURSORBLOCK4 (GUI_ID_USER + 11)
#define ID_IMAGE_CURSORBLOCK5 (GUI_ID_USER + 12)
#define ID_TEXT_BACK          (GUI_ID_USER + 13)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED                                           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED_0                                         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED_1                                         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK1__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK2__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK3__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK4__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK5__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK1__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK2__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK3__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK4__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK5__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BACK__APPW_JOB_SETTEXT           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BACK__APPW_JOB_SETTEXT_0         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_CHANGEPASSWORD(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_CHANGEPASSWORD_H

/*************************** End of file ****************************/
