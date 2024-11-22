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
File        : ID_SCREEN_ENGHRS_EDIT.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_ENGHRS_EDIT_H
#define ID_SCREEN_ENGHRS_EDIT_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_00           (GUI_ID_USER + 1)
#define ID_TEXT_title         (GUI_ID_USER + 2)
#define ID_TEXT_title2        (GUI_ID_USER + 3)
#define ID_IMAGE_ENGHRS_RESET (GUI_ID_USER + 4)
#define ID_IMAGE_ADJENGHRS    (GUI_ID_USER + 5)
#define ID_IMAGE_ENGHRS       (GUI_ID_USER + 6)
#define ID_IMAGE_01           (GUI_ID_USER + 7)
#define ID_IMAGE_02           (GUI_ID_USER + 8)
#define ID_IMAGE_03           (GUI_ID_USER + 9)
#define ID_IMAGE_04           (GUI_ID_USER + 10)
#define ID_IMAGE_05           (GUI_ID_USER + 11)
#define ID_IMAGE_RESET_OR_UP  (GUI_ID_USER + 12)
#define ID_IMAGE_DOWN         (GUI_ID_USER + 13)
#define ID_BOX_00             (GUI_ID_USER + 14)
#define ID_BOX_01             (GUI_ID_USER + 15)
#define ID_BOX_03             (GUI_ID_USER + 16)
#define ID_TEXT_00            (GUI_ID_USER + 17)
#define ID_TEXT_01            (GUI_ID_USER + 19)
#define ID_TEXT_02            (GUI_ID_USER + 18)
#define ID_TEXT_03            (GUI_ID_USER + 20)
#define ID_TEXT_04            (GUI_ID_USER + 21)
#define ID_TEXT_05            (GUI_ID_USER + 22)
#define ID_TEXT_ADJD_ENG_HRS  (GUI_ID_USER + 23)
#define ID_TEXT_ENGHRS_EN_DIS (GUI_ID_USER + 24)
#define ID_TEXT_06            (GUI_ID_USER + 28)
#define ID_TEXT_07            (GUI_ID_USER + 27)
#define ID_TEXT_08            (GUI_ID_USER + 25)
#define ID_TEXT_09            (GUI_ID_USER + 26)
#define ID_TEXT_06_Copy       (GUI_ID_USER + 29)
#define ID_TEXT_CAL_HRS       (GUI_ID_USER + 30)
#define ID_TEXT_TTL_ENG_HRS   (GUI_ID_USER + 31)
#define ID_TEXT_10            (GUI_ID_USER + 32)
#define ID_TEXT_10_Copy       (GUI_ID_USER + 33)
#define ID_TEXT_06_Copy1      (GUI_ID_USER + 34)
#define ID_TEXT_06_Copy2      (GUI_ID_USER + 35)
#define ID_TEXT_SAVE_STATUS   (GUI_ID_USER + 36)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS_RESET__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS_RESET__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ADJENGHRS__APPW_JOB_SETBITMAP     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ADJENGHRS__APPW_JOB_SETBITMAP_0   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS__APPW_JOB_SETBITMAP        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS__APPW_JOB_SETBITMAP_0      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_RESET_OR_UP__APPW_JOB_SETBITMAP_0 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_RESET_OR_UP__APPW_JOB_SETBITMAP   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_DOWN__APPW_JOB_SETBITMAP_0        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_DOWN__APPW_JOB_SETBITMAP          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ADJD_ENG_HRS__APPW_JOB_SETVALUE    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGHRS_EN_DIS__APPW_JOB_SETTEXT    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGHRS_EN_DIS__APPW_JOB_SETTEXT_0  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED                                             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED_0                                           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED_1                                           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TTL_ENG_HRS__APPW_JOB_SETVALUE     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_CAL_HRS__APPW_JOB_SETVALUE         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT_0    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_ENGHRS_EDIT(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_ENGHRS_EDIT_H

/*************************** End of file ****************************/
