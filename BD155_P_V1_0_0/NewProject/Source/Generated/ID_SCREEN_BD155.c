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
File        : ID_SCREEN_BD155.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_BD155.h"

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
    ID_SCREEN_BD155, 0,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_POWERON, ID_SCREEN_BD155,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      800, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_BD155,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      207, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_BD155,
    { { { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 440, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      395, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_POWERON, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_POWERON, APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBD_155_3),
                                                    ARG_V(216194), } },
  { ID_TEXT_00,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_00,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_150) } },
  { ID_TEXT_00,       APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_30_Normal_EXT_AA4) } },
  { ID_TEXT_01,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_01,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_151) } },
  { ID_TEXT_01,       APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_30_Normal_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 27 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_06 = { "A", _aComparison_06, GUI_COUNTOF(_aComparison_06) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN, WM_NOTIFICATION_VALUE_CHANGED,    0,                APPW_JOB_MODALMESSAGE,   ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_RTC),
    }, 0, &_Condition_00
  },
  { ID_VAR_DISPSCREEN, WM_NOTIFICATION_VALUE_CHANGED,    0,                APPW_JOB_SWAPSCREEN,     ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_MAIN_DAY),
    }, 0, &_Condition_01
  },
  { ID_VAR_DISPSCREEN, WM_NOTIFICATION_VALUE_CHANGED,    0,                APPW_JOB_SWAPSCREEN,     ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_MAIN2_DAY),
    }, 0, &_Condition_02
  },
  { ID_VAR_DISPSCREEN, WM_NOTIFICATION_VALUE_CHANGED,    0,                APPW_JOB_SWAPSCREEN,     ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_RAWVALUE_ANALOG),
    }, 0, &_Condition_03
  },
  { ID_VAR_DISPSCREEN, WM_NOTIFICATION_VALUE_CHANGED,    0,                APPW_JOB_SWAPSCREEN,     ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_4,
    { ARG_V(ID_SCREEN_RAWVALUE_IO),
    }, 0, &_Condition_04
  },
  { ID_VAR_DISPSCREEN, WM_NOTIFICATION_VALUE_CHANGED,    0,                APPW_JOB_SWAPSCREEN,     ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_MAIN_NIGHT),
    }, 0, &_Condition_05
  },
  { ID_VAR_DISPSCREEN, WM_NOTIFICATION_VALUE_CHANGED,    0,                APPW_JOB_SWAPSCREEN,     ID_SCREEN_BH60__WM_NOTIFICATION_VALUE_CHANGED_5,
    { ARG_V(ID_SCREEN_MAIN2_NIGHT),
    }, 0, &_Condition_06
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
*       ID_SCREEN_BD155_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_BD155_RootInfo = {
  ID_SCREEN_BD155,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_BD155,
  0
};

/*************************** End of file ****************************/
