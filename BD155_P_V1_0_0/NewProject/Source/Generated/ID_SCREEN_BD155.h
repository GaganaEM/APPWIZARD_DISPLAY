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
File        : ID_SCREEN_BD155.h
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef ID_SCREEN_BD155_H
#define ID_SCREEN_BD155_H

#include "AppWizard.h"

/*********************************************************************
*
*       Objects
*/
#define ID_IMAGE_POWERON (GUI_ID_USER + 1)
#define ID_TEXT_00       (GUI_ID_USER + 2)
#define ID_TEXT_01       (GUI_ID_USER + 3)

/*********************************************************************
*
*       Slots
*/
void ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED  (APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_0(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_2(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_3(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_4(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_1(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);
void ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_5(APPW_ACTION_ITEM * pAction, WM_HWIN hScreen, WM_MESSAGE * pMsg, int * pResult);

/*********************************************************************
*
*       Callback
*/
void cbID_SCREEN_BD155(WM_MESSAGE * pMsg);

#endif  // ID_SCREEN_BD155_H

/*************************** End of file ****************************/
