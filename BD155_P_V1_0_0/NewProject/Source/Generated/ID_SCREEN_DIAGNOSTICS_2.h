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
File        : ID_SCREEN_DIAGNOSTICS_2.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_DIAGNOSTICS_2_H
#define ID_SCREEN_DIAGNOSTICS_2_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_BK          (GUI_ID_USER + 1)
#define ID_IMAGE_yellowup    (GUI_ID_USER + 2)
#define ID_IMAGE_yellowdown  (GUI_ID_USER + 3)
#define ID_IMAGE_blueup      (GUI_ID_USER + 4)
#define ID_IMAGE_bluedown    (GUI_ID_USER + 5)
#define ID_IMAGE_getfaults   (GUI_ID_USER + 6)
#define ID_IMAGE_table       (GUI_ID_USER + 7)
#define ID_TEXT_title        (GUI_ID_USER + 8)
#define ID_TEXT_tstatus      (GUI_ID_USER + 9)
#define ID_BOX_00            (GUI_ID_USER + 10)
#define ID_TEXT_ttsrc        (GUI_ID_USER + 11)
#define ID_TEXT_tplug        (GUI_ID_USER + 12)
#define ID_TEXT_tspn         (GUI_ID_USER + 13)
#define ID_TEXT_tfmi         (GUI_ID_USER + 14)
#define ID_TEXT_tcount       (GUI_ID_USER + 15)
#define ID_TEXT_tdescription (GUI_ID_USER + 16)
#define ID_TEXT_ECU          (GUI_ID_USER + 17)
#define ID_TEXT_VMS          (GUI_ID_USER + 18)
#define ID_TEXT_PLUG_ECU     (GUI_ID_USER + 19)
#define ID_TEXT_PLUG_VMS     (GUI_ID_USER + 20)
#define ID_TEXT_SPN_ECU      (GUI_ID_USER + 21)
#define ID_TEXT_SPN_VMS      (GUI_ID_USER + 22)
#define ID_TEXT_FMI_ECU      (GUI_ID_USER + 23)
#define ID_TEXT_FMI_VMS      (GUI_ID_USER + 24)
#define ID_TEXT_COUNT_ECU    (GUI_ID_USER + 25)
#define ID_TEXT_COUNT_VMS    (GUI_ID_USER + 26)
#define ID_TEXT_DES_ECU      (GUI_ID_USER + 27)
#define ID_TEXT_DES_VMS      (GUI_ID_USER + 28)
#define ID_TEXT_CurrErrEcu   (GUI_ID_USER + 29)
#define ID_TEXT_CurrErrVms   (GUI_ID_USER + 30)
#define ID_TEXT_ofEcu        (GUI_ID_USER + 31)
#define ID_TEXT_ofVms        (GUI_ID_USER + 32)
#define ID_TEXT_TotlErrEcu   (GUI_ID_USER + 33)
#define ID_TEXT_TotlErrVms   (GUI_ID_USER + 34)
#define ID_TEXT_STATUS       (GUI_ID_USER + 35)
#define ID_BOX_01            (GUI_ID_USER + 36)
#define ID_BOX_01_Copy       (GUI_ID_USER + 37)
#define ID_BOX_01_Copy1      (GUI_ID_USER + 38)
#define ID_BOX_01_Copy2      (GUI_ID_USER + 39)
#define ID_BOX_01_Copy3      (GUI_ID_USER + 40)
#define ID_BOX_01_Copy4      (GUI_ID_USER + 41)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED                                       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED_0                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED_1                                     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN_ECU__APPW_JOB_SETVALUE   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN_VMS__APPW_JOB_SETVALUE   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI_ECU__APPW_JOB_SETVALUE   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI_VMS__APPW_JOB_SETVALUE   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT_ECU__APPW_JOB_SETVALUE (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT_VMS__APPW_JOB_SETVALUE (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_CurrErrEcu__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_CurrErrVms__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TotlErrEcu__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TotlErrVms__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_STATUS__APPW_JOB_SETTEXT     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_STATUS__APPW_JOB_SETTEXT_0   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ECU__APPW_JOB_SETCOLOR_0     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ECU__APPW_JOB_SETCOLOR       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VMS__APPW_JOB_SETCOLOR       (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VMS__APPW_JOB_SETCOLOR_0     (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETCOLOR   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETCOLOR_0 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETCOLOR   (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETCOLOR_0 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_45 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_0  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_1  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_2  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_3  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_4  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_5  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_6  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_7  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_8  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_9  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_10 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_11 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_12 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_13 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_14 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_15 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_16 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_17 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_18 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_19 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_20 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_21 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_22 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_23 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_24 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_25 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_26 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_27 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_28 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_29 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_30 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_31 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_32 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_33 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_34 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_35 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_36 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_37 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_38 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_39 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_40 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_41 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_42 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_43 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_44 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_0  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_1  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_2  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_3  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_4  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_5  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_6  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_7  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_8  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_9  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_10 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_11 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_12 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_13 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_14 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_15 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_16 (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_DIAGNOSTICS_2(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_DIAGNOSTICS_2_H

/*************************** End of file ****************************/