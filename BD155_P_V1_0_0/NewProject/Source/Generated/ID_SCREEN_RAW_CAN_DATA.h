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
File        : ID_SCREEN_RAW_CAN_DATA.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_RAW_CAN_DATA_H
#define ID_SCREEN_RAW_CAN_DATA_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_03           (GUI_ID_USER + 2)
#define ID_EDIT_00            (GUI_ID_USER + 3)
#define ID_IMAGE_01           (GUI_ID_USER + 4)
#define ID_IMAGE_05           (GUI_ID_USER + 5)
#define ID_IMAGE_04           (GUI_ID_USER + 6)
#define ID_BOX_01             (GUI_ID_USER + 7)
#define ID_BOX_06             (GUI_ID_USER + 8)
#define ID_EDIT_05            (GUI_ID_USER + 9)
#define ID_EDIT_07            (GUI_ID_USER + 10)
#define ID_EDIT_08            (GUI_ID_USER + 11)
#define ID_EDIT_09            (GUI_ID_USER + 12)
#define ID_EDIT_10            (GUI_ID_USER + 13)
#define ID_EDIT_21            (GUI_ID_USER + 14)
#define ID_EDIT_22            (GUI_ID_USER + 15)
#define ID_TEXT_DAY           (GUI_ID_USER + 16)
#define ID_TEXT_MONTH         (GUI_ID_USER + 17)
#define ID_TEXT_YEAR          (GUI_ID_USER + 18)
#define ID_EDIT_02            (GUI_ID_USER + 19)
#define ID_EDIT_12            (GUI_ID_USER + 20)
#define ID_TEXT_HOUR          (GUI_ID_USER + 21)
#define ID_TEXT_MINUTE        (GUI_ID_USER + 22)
#define ID_TEXT_SECONDS       (GUI_ID_USER + 23)
#define ID_EDIT_14            (GUI_ID_USER + 24)
#define ID_EDIT_15            (GUI_ID_USER + 25)
#define ID_BOX_02             (GUI_ID_USER + 26)
#define ID_BOX_04             (GUI_ID_USER + 27)
#define ID_BOX_05             (GUI_ID_USER + 28)
#define ID_EDIT_03            (GUI_ID_USER + 29)
#define ID_EDIT_11            (GUI_ID_USER + 30)
#define ID_EDIT_04            (GUI_ID_USER + 31)
#define ID_EDIT_17            (GUI_ID_USER + 32)
#define ID_EDIT_16            (GUI_ID_USER + 33)
#define ID_EDIT_18            (GUI_ID_USER + 34)
#define ID_EDIT_20            (GUI_ID_USER + 35)
#define ID_EDIT_19            (GUI_ID_USER + 36)
#define ID_TEXT_COPYMESG      (GUI_ID_USER + 37)
#define ID_TEXT_READMESG      (GUI_ID_USER + 38)
#define ID_TEXT_IDMESG        (GUI_ID_USER + 39)
#define ID_TEXT_LOGFILESIZE   (GUI_ID_USER + 40)
#define ID_IMAGE_00           (GUI_ID_USER + 41)
#define ID_EDIT_23            (GUI_ID_USER + 42)
#define ID_LOGGINGTIMER_VALUE (GUI_ID_USER + 43)
#define ID_TEXT_TIMER30SEC    (GUI_ID_USER + 44)
#define ID_EDIT_01            (GUI_ID_USER + 45)
#define ID_EDIT_24            (GUI_ID_USER + 46)
#define ID_TEXT_RECORDSTATUS  (GUI_ID_USER + 47)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED                                          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_0                                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_1                                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TIMER30SEC__APPW_JOB_SETVALUE   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT_1(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_RECORDSTATUS__APPW_JOB_SETTEXT_2(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT_0    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT_1    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_READMESG__APPW_JOB_SETTEXT      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_IDMESG__APPW_JOB_SETTEXT        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SECONDS__APPW_JOB_SETVALUE      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_LOGFILESIZE__APPW_JOB_SETVALUE  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_LOGGINGTIMER_VALUE__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_2                                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_3                                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_4                                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAW_CAN_DATA__WM_NOTIFICATION_VALUE_CHANGED_5                                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_RAW_CAN_DATA(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_RAW_CAN_DATA_H

/*************************** End of file ****************************/
