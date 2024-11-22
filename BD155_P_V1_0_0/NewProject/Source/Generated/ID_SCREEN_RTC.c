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
File        : ID_SCREEN_RTC.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_RTC.h"

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
    ID_SCREEN_RTC, 0,
    { { { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 146, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 146, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_MULTIEDIT_Create,
    ID_MULTIEDIT_00, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      360, 188, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DAY, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 34, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 51, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MONTH, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 128, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 51, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_YEAR, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 218, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 51, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      110, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_HOUR, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 59, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 143, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MIN, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 178, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 143, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      61, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MERIDIAN, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 143, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      61, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_COLON2, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 178, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 51, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_COLON1, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 84, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 51, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      44, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_COLON3, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 132, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 143, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      37, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_MSG_DATE, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 129, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 14, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      92, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_MSG_TIME, ID_SCREEN_RTC,
    { { { DISPOSE_MODE_REL_PARENT, 122, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_MULTIEDIT_00,  APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_BLACK) } },
  { ID_MULTIEDIT_00,  APPW_SET_PROP_COLOR,        { ARG_V(GUI_CYAN) } },
  { ID_MULTIEDIT_00,  APPW_SET_PROP_RADIUS,       { ARG_V(15) } },
  { ID_MULTIEDIT_00,  APPW_SET_PROP_BORDER,       { ARG_V(5) } },
  { ID_MULTIEDIT_00,  APPW_SET_PROP_FRAME,        { ARG_V(5) } },
  { ID_TEXT_DAY,      APPW_SET_PROP_COLOR,        { ARG_V(0xff4df0f8) } },
  { ID_TEXT_DAY,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_DAY,      APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DAY,      APPW_SET_PROP_COLOR2,       { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DAY,      APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                    ARG_V(0),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_DAY,      APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_TEXT_DAY,      APPW_SET_PROP_RANGE,        { ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_MONTH,    APPW_SET_PROP_COLOR,        { ARG_V(0xff4df0f8) } },
  { ID_TEXT_MONTH,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_MONTH,    APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MONTH,    APPW_SET_PROP_COLOR2,       { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MONTH,    APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                    ARG_V(0),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_MONTH,    APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_TEXT_YEAR,     APPW_SET_PROP_COLOR,        { ARG_V(0xff4df0f8) } },
  { ID_TEXT_YEAR,     APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_YEAR,     APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_BLACK) } },
  { ID_TEXT_YEAR,     APPW_SET_PROP_COLOR2,       { ARG_V(GUI_BLACK) } },
  { ID_TEXT_YEAR,     APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                    ARG_V(0),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_YEAR,     APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_TEXT_HOUR,     APPW_SET_PROP_COLOR,        { ARG_V(0xff4df0f8) } },
  { ID_TEXT_HOUR,     APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_HOUR,     APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_BLACK) } },
  { ID_TEXT_HOUR,     APPW_SET_PROP_COLOR2,       { ARG_V(GUI_BLACK) } },
  { ID_TEXT_HOUR,     APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                    ARG_V(0),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_HOUR,     APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_30_Normal_EXT_AA4) } },
  { ID_TEXT_MIN,      APPW_SET_PROP_COLOR,        { ARG_V(0xff4df0f8) } },
  { ID_TEXT_MIN,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_MIN,      APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MIN,      APPW_SET_PROP_COLOR2,       { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MIN,      APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                    ARG_V(0),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_MIN,      APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_30_Normal_EXT_AA4) } },
  { ID_TEXT_MERIDIAN, APPW_SET_PROP_COLOR,        { ARG_V(0xff4df0f8) } },
  { ID_TEXT_MERIDIAN, APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                    ARG_V(0),
                                                    ARG_V(0) } },
  { ID_TEXT_MERIDIAN, APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MERIDIAN, APPW_SET_PROP_COLOR2,       { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MERIDIAN, APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_30_Normal_EXT_AA4) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_COLORS,       { ARG_V(0xff4df0f8),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_WHITE) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_BLACK) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_COLON2,   APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_COLORS,       { ARG_V(0xff4df0f8),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_WHITE) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_BLACK) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_COLON1,   APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_COLORS,       { ARG_V(0xff4df0f8),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_WHITE) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_BLACK) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_COLON3,   APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_30_Normal_EXT_AA4) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_COLORS,       { ARG_V(0xff4df0f8),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_WHITE) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_BLACK) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_EDIT_MSG_DATE, APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_28) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_COLORS,       { ARG_V(0xff4df0f8),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_WHITE) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                    ARG_V(GUI_INVALID_COLOR),
                                                    ARG_V(GUI_BLACK) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_29) } },
  { ID_EDIT_MSG_TIME, APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_MEREDIAN }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_MEREDIAN }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_05 = { "A", _aComparison_05, GUI_COUNTOF(_aComparison_05) };
static const APPW_COND _Condition_06 = { "A", _aComparison_06, GUI_COUNTOF(_aComparison_06) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DAY,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DAY,      APPW_JOB_SETVALUE,       ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MONTH,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MONTH,    APPW_JOB_SETVALUE,       ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_YEAR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_YEAR,     APPW_JOB_SETVALUE,       ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_HOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_HOUR,     APPW_JOB_SETVALUE,       ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MINUTE,    WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MIN,      APPW_JOB_SETVALUE,       ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MIN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MEREDIAN,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MERIDIAN, APPW_JOB_SETTEXT,        ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_05
  },
  { ID_VAR_MEREDIAN,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MERIDIAN, APPW_JOB_SETTEXT,        ID_SCREEN_RTC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_06
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
*       ID_SCREEN_RTC_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_RTC_RootInfo = {
  ID_SCREEN_RTC,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_RTC,
  0
};

/*************************** End of file ****************************/
