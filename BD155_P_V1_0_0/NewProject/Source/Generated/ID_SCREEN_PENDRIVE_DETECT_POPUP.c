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
File        : ID_SCREEN_PENDRIVE_DETECT_POPUP.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_PENDRIVE_DETECT_POPUP.h"

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
/*********************************************************************
*
*       _aCreate
*/
static APPW_CREATE_ITEM _aCreate[] = {
  { WM_OBJECT_WINDOW_Create,
    ID_SCREEN_PENDRIVE_DETECT_POPUP, 0,
    { { { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 146, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 231, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 203, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_MULTIEDIT_Create,
    ID_MULTIEDIT_00, ID_SCREEN_PENDRIVE_DETECT_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      347, 131, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_PENDRIVE_DETECT_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 37, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 20, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      36, 92, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_PENDRIVE_DETECT_POPUP,
    { { { DISPOSE_MODE_REL_PARENT, 93, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 27, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      237, 65, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_MULTIEDIT_00,                 APPW_SET_PROP_BKCOLORS,     { ARG_V(0xff7575af),
                                                                   ARG_V(GUI_INVALID_COLOR),
                                                                   ARG_V(GUI_BLACK) } },
  { ID_MULTIEDIT_00,                 APPW_SET_PROP_COLOR,        { ARG_V(0xff0000c3) } },
  { ID_MULTIEDIT_00,                 APPW_SET_PROP_RADIUS,       { ARG_V(15) } },
  { ID_MULTIEDIT_00,                 APPW_SET_PROP_BORDER,       { ARG_V(5) } },
  { ID_MULTIEDIT_00,                 APPW_SET_PROP_FRAME,        { ARG_V(5) } },
  { ID_IMAGE_00,                     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,                     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acpendrive_35x90),
                                                                   ARG_V(2360), } },
  { ID_TEXT_00,                      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,                      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                   ARG_V(0),
                                                                   ARG_V(0) } },
  { ID_TEXT_00,                      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,                      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_00,                      APPW_SET_PROP_WRAP,         { ARG_V(0) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_DETECT }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_DETECT }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_DETECT }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_DETECT }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_DETECT }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_DETECT }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_00 = { "A", _aComparison_00, GUI_COUNTOF(_aComparison_00) };
static const APPW_COND _Condition_01 = { "A", _aComparison_01, GUI_COUNTOF(_aComparison_01) };
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };
static const APPW_COND _Condition_03 = { "A", _aComparison_03, GUI_COUNTOF(_aComparison_03) };
static const APPW_COND _Condition_04 = { "A", _aComparison_04, GUI_COUNTOF(_aComparison_04) };
static const APPW_COND _Condition_05 = { "A", _aComparison_05, GUI_COUNTOF(_aComparison_05) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_PENDRIVE_DETECT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_00,                      APPW_JOB_SETTEXT,        ID_SCREEN_PENDRIVE_DETECT_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_00__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_PENDRIVE_DETECTED),
    }, 65536, &_Condition_00
  },
  { ID_VAR_PENDRIVE_DETECT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_00,                      APPW_JOB_SETTEXT,        ID_SCREEN_PENDRIVE_DETECT_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_00__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PENDRIVE_NOT_DETECTED),
    }, 65536, &_Condition_01
  },
  { ID_VAR_PENDRIVE_DETECT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_00,                      APPW_JOB_SETTEXT,        ID_SCREEN_PENDRIVE_DETECT_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_00__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_INSERT),
    }, 65536, &_Condition_02
  },
  { ID_VAR_PENDRIVE_DETECT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_00,                      APPW_JOB_SETTEXT,        ID_SCREEN_PENDRIVE_DETECT_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_00__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_RTEXT_PENDRIVE_REMOVED),
    }, 65536, &_Condition_03
  },
  { ID_VAR_PENDRIVE_DETECT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_00,                      APPW_JOB_SETTEXT,        ID_SCREEN_PENDRIVE_DETECT_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_00__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_RTEXT_Data_Unavailable),
    }, 65536, &_Condition_04
  },
  { ID_VAR_PENDRIVE_DETECT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_00,                      APPW_JOB_SETTEXT,        ID_SCREEN_PENDRIVE_DETECT_POPUP__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_00__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_RTEXT_DATA_CLEARED),
    }, 65536, &_Condition_05
  },
};

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/
/*********************************************************************
*
*       ID_SCREEN_PENDRIVE_DETECT_POPUP_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_PENDRIVE_DETECT_POPUP_RootInfo = {
  ID_SCREEN_PENDRIVE_DETECT_POPUP,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_PENDRIVE_DETECT_POPUP,
  0
};

/*************************** End of file ****************************/
