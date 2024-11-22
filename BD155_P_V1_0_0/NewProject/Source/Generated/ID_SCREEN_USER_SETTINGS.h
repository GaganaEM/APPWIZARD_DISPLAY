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
File        : ID_SCREEN_USER_SETTINGS.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_USER_SETTINGS_H
#define ID_SCREEN_USER_SETTINGS_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_00                   (GUI_ID_USER + 2)
#define ID_EDIT_00                    (GUI_ID_USER + 3)
#define ID_IMAGE_01                   (GUI_ID_USER + 4)
#define ID_IMAGE_05                   (GUI_ID_USER + 5)
#define ID_IMAGE_02                   (GUI_ID_USER + 6)
#define ID_IMAGE_06                   (GUI_ID_USER + 7)
#define ID_IMAGE_07                   (GUI_ID_USER + 8)
#define ID_IMAGEBLOCK_LIGHT           (GUI_ID_USER + 9)
#define ID_IMAGE_04                   (GUI_ID_USER + 10)
#define ID_IMAGEBLOCK_BRIGHTNESS      (GUI_ID_USER + 11)
#define ID_IMAGE_06_Copy              (GUI_ID_USER + 12)
#define ID_IMAGEBLOCK_DAY             (GUI_ID_USER + 13)
#define ID_IMAGE_09                   (GUI_ID_USER + 14)
#define ID_EDIT_01                    (GUI_ID_USER + 15)
#define ID_EDIT_03                    (GUI_ID_USER + 17)
#define ID_EDIT_04                    (GUI_ID_USER + 18)
#define ID_EDIT_05                    (GUI_ID_USER + 19)
#define ID_EDIT_06                    (GUI_ID_USER + 20)
#define ID_EDIT_07                    (GUI_ID_USER + 16)
#define ID_EDIT_08                    (GUI_ID_USER + 21)
#define ID_EDIT_10                    (GUI_ID_USER + 22)
#define ID_IMAGEBLOCK_MONTH           (GUI_ID_USER + 23)
#define ID_IMAGE_09_Copy              (GUI_ID_USER + 24)
#define ID_IMAGEBLOCK_YEAR            (GUI_ID_USER + 25)
#define ID_IMAGE_09_Copy1             (GUI_ID_USER + 26)
#define ID_IMAGEBLOCK_HOUR            (GUI_ID_USER + 27)
#define ID_IMAGE_09_Copy2             (GUI_ID_USER + 28)
#define ID_IMAGEBLOCK_MINUTE          (GUI_ID_USER + 29)
#define ID_IMAGE_09_Copy3             (GUI_ID_USER + 30)
#define ID_IMAGEBLOCK_SECONDS         (GUI_ID_USER + 31)
#define ID_IMAGE_09_Copy4             (GUI_ID_USER + 32)
#define ID_TEXT_LIGHT                 (GUI_ID_USER + 33)
#define ID_TEXT_BRIGHTNESS            (GUI_ID_USER + 34)
#define ID_TEXT_02                    (GUI_ID_USER + 35)
#define ID_TEXT_DAY                   (GUI_ID_USER + 36)
#define ID_TEXT_MONTH                 (GUI_ID_USER + 37)
#define ID_TEXT_YEAR                  (GUI_ID_USER + 38)
#define ID_EDIT_06_Copy               (GUI_ID_USER + 44)
#define ID_TEXT_HOUR                  (GUI_ID_USER + 40)
#define ID_TEXT_MINUTE                (GUI_ID_USER + 41)
#define ID_TEXT_SECONDS               (GUI_ID_USER + 42)
#define ID_IMAGEBLOCK_MERIDIAN        (GUI_ID_USER + 39)
#define ID_IMAGE_09_Copy5             (GUI_ID_USER + 1)
#define ID_TEXT_MERIDIAN              (GUI_ID_USER + 43)
#define ID_IMAGEBLOCK_SCREEN_ON_OFF   (GUI_ID_USER + 48)
#define ID_IMAGE_09_Copy6             (GUI_ID_USER + 49)
#define ID_IMAGEBLOCK_SEL_HOME_SCREEN (GUI_ID_USER + 50)
#define ID_IMAGE_09_Copy7             (GUI_ID_USER + 51)
#define ID_TEXT_SCREEN_ON_OFF         (GUI_ID_USER + 52)
#define ID_TEXT_SEL_HOME_SCREEN       (GUI_ID_USER + 53)
#define ID_IMAGEBLOCK_SELCT_SCREEN    (GUI_ID_USER + 54)
#define ID_IMAGE_WHITE_SELCT_SCREEN   (GUI_ID_USER + 55)
#define ID_TEXT_SELCT_SCREEN          (GUI_ID_USER + 56)
#define ID_EDIT_HOME                  (GUI_ID_USER + 47)
#define ID_EDIT_01_Copy               (GUI_ID_USER + 45)
#define ID_EDIT_08_Copy               (GUI_ID_USER + 46)
#define ID_TEXT_SAVE_STATUS           (GUI_ID_USER + 60)
#define ID_IMAGE_SAVE                 (GUI_ID_USER + 57)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_0                                                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_1                                                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_LIGHT__APPW_JOB_SETBITMAP            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_LIGHT__APPW_JOB_SETBITMAP_0          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_BRIGHTNESS__APPW_JOB_SETBITMAP       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_BRIGHTNESS__APPW_JOB_SETBITMAP_0     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_DAY__APPW_JOB_SETBITMAP              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_DAY__APPW_JOB_SETBITMAP_0            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MONTH__APPW_JOB_SETBITMAP            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MONTH__APPW_JOB_SETBITMAP_0          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_YEAR__APPW_JOB_SETBITMAP             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_YEAR__APPW_JOB_SETBITMAP_0           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_HOUR__APPW_JOB_SETBITMAP             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_HOUR__APPW_JOB_SETBITMAP_0           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MINUTE__APPW_JOB_SETBITMAP           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MINUTE__APPW_JOB_SETBITMAP_0         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SECONDS__APPW_JOB_SETBITMAP          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SECONDS__APPW_JOB_SETBITMAP_0        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_LIGHT__APPW_JOB_SETTEXT                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_LIGHT__APPW_JOB_SETTEXT_0                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE_0                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BRIGHTNESS__APPW_JOB_SETVALUE              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SECONDS__APPW_JOB_SETVALUE                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_2                                                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_3                                                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT_0               (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MERIDIAN__APPW_JOB_SETBITMAP         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MERIDIAN__APPW_JOB_SETBITMAP_0       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SELCT_SCREEN__APPW_JOB_SETBITMAP     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SELCT_SCREEN__APPW_JOB_SETBITMAP_0   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SCREEN_ON_OFF__APPW_JOB_SETBITMAP    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SCREEN_ON_OFF__APPW_JOB_SETBITMAP_0  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SEL_HOME_SCREEN__APPW_JOB_SETBITMAP  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SEL_HOME_SCREEN__APPW_JOB_SETBITMAP_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SCREEN_ON_OFF__APPW_JOB_SETTEXT            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SCREEN_ON_OFF__APPW_JOB_SETTEXT_0          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SEL_HOME_SCREEN__APPW_JOB_SETTEXT          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SEL_HOME_SCREEN__APPW_JOB_SETTEXT_0        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_0           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_1           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_2           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_3           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT_0            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_USER_SETTINGS(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_USER_SETTINGS_H

/*************************** End of file ****************************/
