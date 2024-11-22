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
File        : ID_SCREEN_RAWVALUE_ANALOG.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_RAWVALUE_ANALOG_H
#define ID_SCREEN_RAWVALUE_ANALOG_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_00            (GUI_ID_USER + 1)
#define ID_TEXT_AI1RAW         (GUI_ID_USER + 14)
#define ID_TEXT_AI2RAW         (GUI_ID_USER + 8)
#define ID_TEXT_AI3RAW         (GUI_ID_USER + 34)
#define ID_TEXT_AI1_TYPE       (GUI_ID_USER + 15)
#define ID_TEXT_AI2_TYPE       (GUI_ID_USER + 9)
#define ID_TEXT_AI3_TYPE       (GUI_ID_USER + 35)
#define ID_TEXT_DI1            (GUI_ID_USER + 4)
#define ID_TEXT_DI2            (GUI_ID_USER + 2)
#define ID_TEXT_DI3            (GUI_ID_USER + 13)
#define ID_TEXT_DI4            (GUI_ID_USER + 12)
#define ID_TEXT_DI5            (GUI_ID_USER + 16)
#define ID_TEXT_VAL_FREQUENCY  (GUI_ID_USER + 17)
#define ID_TEXT_DIGITAL_OUTPUT (GUI_ID_USER + 23)
#define ID_TEXT_VAL_BATT       (GUI_ID_USER + 19)
#define ID_TEXT_VAL_COT        (GUI_ID_USER + 22)
#define ID_TEXT_VAL_TOP        (GUI_ID_USER + 25)
#define ID_TEXT_VAL_FUEL       (GUI_ID_USER + 11)
#define ID_TEXT_VAL_EOP        (GUI_ID_USER + 24)
#define ID_TEXT_VAL_ECT        (GUI_ID_USER + 21)
#define ID_TEXT_VAL_BOOST_PRES (GUI_ID_USER + 20)
#define ID_TEXT_VAL_EOT        (GUI_ID_USER + 27)
#define ID_TEXT_VAL_ENGSPD     (GUI_ID_USER + 30)
#define ID_TEXT_VAL_FIP        (GUI_ID_USER + 5)
#define ID_TEXT_HOUR           (GUI_ID_USER + 33)
#define ID_TEXT_MINUTE         (GUI_ID_USER + 36)
#define ID_TEXT_SECONDS        (GUI_ID_USER + 39)
#define ID_TEXT_MERIDIAN       (GUI_ID_USER + 37)
#define ID_TEXT_DAY            (GUI_ID_USER + 18)
#define ID_TEXT_AI1_S_RAW      (GUI_ID_USER + 3)
#define ID_TEXT_AI2_S_RAW      (GUI_ID_USER + 26)
#define ID_TEXT_AI3_S_RAW      (GUI_ID_USER + 10)
#define ID_TEXT_AI4_S_RAW      (GUI_ID_USER + 41)
#define ID_TEXT_AI1_S_TYPE     (GUI_ID_USER + 6)
#define ID_TEXT_AI2_S_TYPE     (GUI_ID_USER + 7)
#define ID_TEXT_AI3_S_TYPE     (GUI_ID_USER + 28)
#define ID_TEXT_AI4_S_TYPE     (GUI_ID_USER + 42)
#define ID_TEXT_AIN1_S_VALUE   (GUI_ID_USER + 31)
#define ID_TEXT_AIN2_S_VALUE   (GUI_ID_USER + 32)
#define ID_TEXT_AIN3_S_VALUE   (GUI_ID_USER + 45)
#define ID_TEXT_AIN4_S_VALUE   (GUI_ID_USER + 46)
#define ID_IMAGE_ICON16        (GUI_ID_USER + 29)
#define ID_TEXT_colon          (GUI_ID_USER + 38)
#define ID_TEXT_colon1         (GUI_ID_USER + 40)
#define ID_TEXT_UIN            (GUI_ID_USER + 43)
#define ID_IMAGE_OVRSPD        (GUI_ID_USER + 44)
#define ID_TEXT_MONTH          (GUI_ID_USER + 47)
#define ID_TEXT_YEAR           (GUI_ID_USER + 48)
#define ID_TEXT_colon_Copy     (GUI_ID_USER + 49)
#define ID_TEXT_colon1_Copy    (GUI_ID_USER + 50)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP_0                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ICON16__APPW_JOB_SETBITMAP_1                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_2                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_3                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_7                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_8                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_9                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_10                                                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1RAW__APPW_JOB_SETVALUE                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2RAW__APPW_JOB_SETVALUE                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3RAW__APPW_JOB_SETVALUE                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1_TYPE__APPW_JOB_SETVALUE                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2_TYPE__APPW_JOB_SETVALUE                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3_TYPE__APPW_JOB_SETVALUE                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI1_ECL__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI2_PARK_OR_TR_OL_FIL_CLOG__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI3__APPW_JOB_SETVALUE                       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI4_SEAT_BELT__APPW_JOB_SETVALUE             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DI5__APPW_JOB_SETVALUE                       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FREQUENCY__APPW_JOB_SETVALUE                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DIGITAL_OUTPUT__APPW_JOB_SETTEXT             (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DIGITAL_OUTPUT__APPW_JOB_SETTEXT_0           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_BATT__APPW_JOB_SETVALUE                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_5                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED                                                       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_0                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_1                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_6                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED_4                                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_COT__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_TOP__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_FUEL__APPW_JOB_SETVALUE                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_EOP__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_ECT__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_BOOST_PRES__APPW_JOB_SETVALUE            (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_EOT__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_ENGSPD__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_FIP__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE                      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE                    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SECONDS__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT_0                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_ECU_BATT__APPW_JOB_SETVALUE              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1_S_RAW__APPW_JOB_SETVALUE                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2_S_RAW__APPW_JOB_SETVALUE                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3_S_RAW__APPW_JOB_SETVALUE                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI4_S_RAW__APPW_JOB_SETVALUE                 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI1_S_TYPE__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI2_S_TYPE__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI3_S_TYPE__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AI4_S_TYPE__APPW_JOB_SETVALUE                (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_HOL__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VAL_HOT__APPW_JOB_SETVALUE                   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AIN3_S_VALUE__APPW_JOB_SETVALUE              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_AIN4_S_VALUE__APPW_JOB_SETVALUE              (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_UIN__APPW_JOB_SETTEXT                        (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_01__APPW_JOB_SETBITMAP                      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_OVRSPD__APPW_JOB_SETBITMAP                  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE                       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_RAWVALUE_ANALOG__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE                      (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_RAWVALUE_ANALOG(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_RAWVALUE_ANALOG_H

/*************************** End of file ****************************/
