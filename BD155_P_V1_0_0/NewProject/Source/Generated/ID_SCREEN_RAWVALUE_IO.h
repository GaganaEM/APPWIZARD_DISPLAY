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
File        : ID_SCREEN_RAWVALUE_IO.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_RAWVALUE_IO_H
#define ID_SCREEN_RAWVALUE_IO_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_00                (GUI_ID_USER + 1)
#define ID_TEXT_DI1                (GUI_ID_USER + 2)
#define ID_TEXT_DI3                (GUI_ID_USER + 4)
#define ID_TEXT_DI2                (GUI_ID_USER + 3)
#define ID_TEXT_DI13               (GUI_ID_USER + 14)
#define ID_TEXT_DI12               (GUI_ID_USER + 13)
#define ID_TEXT_DI11               (GUI_ID_USER + 12)
#define ID_TEXT_DI10               (GUI_ID_USER + 11)
#define ID_TEXT_DI8                (GUI_ID_USER + 9)
#define ID_TEXT_DI9                (GUI_ID_USER + 10)
#define ID_TEXT_DI7                (GUI_ID_USER + 8)
#define ID_TEXT_DI6                (GUI_ID_USER + 7)
#define ID_TEXT_DI5                (GUI_ID_USER + 6)
#define ID_TEXT_DI4                (GUI_ID_USER + 5)
#define ID_TEXT_DI20               (GUI_ID_USER + 21)
#define ID_TEXT_DI18               (GUI_ID_USER + 19)
#define ID_TEXT_DI19               (GUI_ID_USER + 20)
#define ID_TEXT_DI17               (GUI_ID_USER + 18)
#define ID_TEXT_DI16               (GUI_ID_USER + 17)
#define ID_TEXT_DI15               (GUI_ID_USER + 16)
#define ID_TEXT_DI14               (GUI_ID_USER + 15)
#define ID_TEXT_DI23               (GUI_ID_USER + 24)
#define ID_TEXT_DI22               (GUI_ID_USER + 23)
#define ID_TEXT_DI21               (GUI_ID_USER + 22)
#define ID_TEXT_DI30               (GUI_ID_USER + 31)
#define ID_TEXT_DI28               (GUI_ID_USER + 29)
#define ID_TEXT_DI29               (GUI_ID_USER + 30)
#define ID_TEXT_DI27               (GUI_ID_USER + 28)
#define ID_TEXT_DI26               (GUI_ID_USER + 27)
#define ID_TEXT_DI25               (GUI_ID_USER + 26)
#define ID_TEXT_DI24               (GUI_ID_USER + 25)
#define ID_TEXT_DI33               (GUI_ID_USER + 34)
#define ID_TEXT_DI32               (GUI_ID_USER + 33)
#define ID_TEXT_DI31               (GUI_ID_USER + 32)
#define ID_TEXT_DI35               (GUI_ID_USER + 36)
#define ID_TEXT_DI34               (GUI_ID_USER + 35)
#define ID_TEXT_HOUR_RUN           (GUI_ID_USER + 37)
#define ID_TEXT_CHARGE_FAIL        (GUI_ID_USER + 38)
#define ID_TEXT_CANRESISTOR_SET    (GUI_ID_USER + 39)
#define ID_TEXT_CANRESISTOR_FB     (GUI_ID_USER + 40)
#define ID_TEXT_DO3_SET            (GUI_ID_USER + 41)
#define ID_TEXT_DO3_FB             (GUI_ID_USER + 42)
#define ID_TEXT_CHARGEFAIL_SET     (GUI_ID_USER + 43)
#define ID_TEXT_CHARGEFAIL_FB      (GUI_ID_USER + 44)
#define ID_TEXT_DO2_SET            (GUI_ID_USER + 45)
#define ID_TEXT_DO2_FB             (GUI_ID_USER + 46)
#define ID_TEXT_DO1_SET            (GUI_ID_USER + 47)
#define ID_TEXT_DO1_FB             (GUI_ID_USER + 48)
#define ID_TEXT_DO6_SET            (GUI_ID_USER + 49)
#define ID_TEXT_DO6_FB             (GUI_ID_USER + 50)
#define ID_TEXT_DO5_SET            (GUI_ID_USER + 51)
#define ID_TEXT_DO5_FB             (GUI_ID_USER + 52)
#define ID_TEXT_DO4_SET            (GUI_ID_USER + 53)
#define ID_TEXT_DO4_FB             (GUI_ID_USER + 54)
#define ID_TEXT_freq1              (GUI_ID_USER + 55)
#define ID_TEXT_freq2              (GUI_ID_USER + 56)
#define ID_TEXT_AI1                (GUI_ID_USER + 57)
#define ID_TEXT_AI2                (GUI_ID_USER + 58)
#define ID_TEXT_AI3                (GUI_ID_USER + 59)
#define ID_TEXT_DI1_NA             (GUI_ID_USER + 60)
#define ID_TEXT_DI2_NA             (GUI_ID_USER + 61)
#define ID_TEXT_DI3_NA             (GUI_ID_USER + 62)
#define ID_TEXT_DI4_NA             (GUI_ID_USER + 63)
#define ID_TEXT_DI5_NA             (GUI_ID_USER + 64)
#define ID_TEXT_freq               (GUI_ID_USER + 65)
#define ID_TEXT_DIGITAL_OP         (GUI_ID_USER + 66)
#define ID_TEXT_BATTERY_VOL        (GUI_ID_USER + 67)
#define ID_TEXT_BUZZER             (GUI_ID_USER + 68)
#define ID_TEXT_ENG_ECUHRS         (GUI_ID_USER + 69)
#define ID_TEXT_DISPLAY_HRS        (GUI_ID_USER + 70)
#define ID_TEXT_HOUR               (GUI_ID_USER + 71)
#define ID_TEXT_MINUTE             (GUI_ID_USER + 72)
#define ID_TEXT_MERIDIAN           (GUI_ID_USER + 73)
#define ID_TEXT_colon              (GUI_ID_USER + 74)
#define ID_TEXT_DAY                (GUI_ID_USER + 75)
#define ID_TEXT_MONTH              (GUI_ID_USER + 76)
#define ID_TEXT_slash1             (GUI_ID_USER + 78)
#define ID_TEXT_YEAR               (GUI_ID_USER + 77)
#define ID_TEXT_slash              (GUI_ID_USER + 79)
#define ID_TEXT_ENG_RUNNING_STATUS (GUI_ID_USER + 80)
#define ID_IMAGE_ICON16            (GUI_ID_USER + 81)
#define ID_BOX_00                  (GUI_ID_USER + 82)
#define ID_BOX_01                  (GUI_ID_USER + 83)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_2                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_3                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_freq1__APPW_JOB_SETVALUE              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_freq2__APPW_JOB_SETVALUE              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BATTERY_VOL__APPW_JOB_SETVALUE        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE               (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE               (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT_0          (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENG_RUNNING_STATUS__APPW_JOB_SETTEXT  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENG_RUNNING_STATUS__APPW_JOB_SETTEXT_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI1__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI2__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI3__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI5__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI17__APPW_JOB_SETVALUE               (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI27__APPW_JOB_SETVALUE               (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENG_ECUHRS__APPW_JOB_SETVALUE         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DISPLAY_HRS__APPW_JOB_SETVALUE        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED                                                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_5                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_0                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_1                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_4                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_6                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_7                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_8                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_9                                              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED_10                                             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP_0         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_IO__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP_1         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_RAWVALUE_IO(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_RAWVALUE_IO_H

/*************************** End of file ****************************/
