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
File        : ID_SCREEN_SYSTEM_SETUP_DATA.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_SYSTEM_SETUP_DATA_H
#define ID_SCREEN_SYSTEM_SETUP_DATA_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_00            (GUI_ID_USER + 2)
#define ID_MULTIEDIT_00        (GUI_ID_USER + 4)
#define ID_MULTIEDIT_01        (GUI_ID_USER + 6)
#define ID_TEXT_ADJUSTHRS      (GUI_ID_USER + 12)
#define ID_TEXT_ENGINE_ECU_HRS (GUI_ID_USER + 14)
#define ID_TEXT_DISPLAYHRS     (GUI_ID_USER + 15)
#define ID_TEXT_DISPHRS        (GUI_ID_USER + 1)
#define ID_TEXT_ENGHRS         (GUI_ID_USER + 9)
#define ID_TEXT_10             (GUI_ID_USER + 3)
#define ID_TEXT_00             (GUI_ID_USER + 5)
#define ID_TEXT_01             (GUI_ID_USER + 10)
#define ID_TEXT_02             (GUI_ID_USER + 11)
#define ID_TEXT_03             (GUI_ID_USER + 13)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED                                           (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED_0                                         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED_1                                         (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGINE_ECU_HRS__APPW_JOB_SETVALUE(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_SYSTEM_SETUP_DATA__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DISPLAYHRS__APPW_JOB_SETVALUE    (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_SYSTEM_SETUP_DATA(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_SYSTEM_SETUP_DATA_H

/*************************** End of file ****************************/
