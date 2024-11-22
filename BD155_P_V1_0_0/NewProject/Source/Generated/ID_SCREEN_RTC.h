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
File        : ID_SCREEN_RTC.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_RTC_H
#define ID_SCREEN_RTC_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_MULTIEDIT_00  (GUI_ID_USER + 1)
#define ID_TEXT_DAY      (GUI_ID_USER + 3)
#define ID_TEXT_MONTH    (GUI_ID_USER + 4)
#define ID_TEXT_YEAR     (GUI_ID_USER + 5)
#define ID_TEXT_HOUR     (GUI_ID_USER + 6)
#define ID_TEXT_MIN      (GUI_ID_USER + 7)
#define ID_TEXT_MERIDIAN (GUI_ID_USER + 8)
#define ID_EDIT_COLON2   (GUI_ID_USER + 9)
#define ID_EDIT_COLON1   (GUI_ID_USER + 10)
#define ID_EDIT_COLON3   (GUI_ID_USER + 11)
#define ID_EDIT_MSG_DATE (GUI_ID_USER + 12)
#define ID_EDIT_MSG_TIME (GUI_ID_USER + 13)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MIN__APPW_JOB_SETVALUE      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_RTC(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_RTC_H

/*************************** End of file ****************************/
