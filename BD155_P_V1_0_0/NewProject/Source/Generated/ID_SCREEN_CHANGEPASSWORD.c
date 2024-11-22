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
File        : ID_SCREEN_CHANGEPASSWORD.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_CHANGEPASSWORD.h"

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
    ID_SCREEN_CHANGEPASSWORD, 0,
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
    ID_IMAGE_00, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      800, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_PASSBLOCK1, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 247, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 199, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_PASSBLOCK2, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 312, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 200, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_PASSBLOCK3, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 377, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_PASSBLOCK4, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 443, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 199, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      52, 52, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_PASSBLOCK5, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 508, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 199, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      52, 52, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_CURSORBLOCK1, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 256, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 2, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_CURSORBLOCK2, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 321, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 2, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_CURSORBLOCK3, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 387, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 2, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_CURSORBLOCK4, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 453, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 2, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_CURSORBLOCK5, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 517, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 2, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_BACK, ID_SCREEN_CHANGEPASSWORD,
    { { { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 439, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      101, 41, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acchange_password),
                                                            ARG_V(51565), } },
  { ID_IMAGE_PASSBLOCK1,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_PASSBLOCK1,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_PASSBLOCK2,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_PASSBLOCK2,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_PASSBLOCK3,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_PASSBLOCK3,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_PASSBLOCK4,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_PASSBLOCK4,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_PASSBLOCK5,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_PASSBLOCK5,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_CURSORBLOCK1,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_CURSORBLOCK1,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_CURSORBLOCK2,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_CURSORBLOCK2,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_CURSORBLOCK3,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_CURSORBLOCK3,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_CURSORBLOCK4,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_CURSORBLOCK4,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_IMAGE_CURSORBLOCK5,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_CURSORBLOCK5,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBLANK52X52),
                                                            ARG_V(568), } },
  { ID_TEXT_BACK,             APPW_SET_PROP_COLOR,        { ARG_V(0xffaa0000) } },
  { ID_TEXT_BACK,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(4294967294),
                                                            ARG_V(0) } },
  { ID_TEXT_BACK,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_BACK,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_BACK,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_BACK) } },
  { ID_TEXT_BACK,             APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP1 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP2 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP3 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP4 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP5 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP1 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP2 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP3 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP4 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_CURDISP5 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_PWDRETRY }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_PWDRETRY }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_07 = { "A", _aComparison_07, GUI_COUNTOF(_aComparison_07) };
static const APPW_COND _Condition_08 = { "A", _aComparison_08, GUI_COUNTOF(_aComparison_08) };
static const APPW_COND _Condition_09 = { "A", _aComparison_09, GUI_COUNTOF(_aComparison_09) };
static const APPW_COND _Condition_0a = { "A", _aComparison_0a, GUI_COUNTOF(_aComparison_0a) };
static const APPW_COND _Condition_0b = { "A", _aComparison_0b, GUI_COUNTOF(_aComparison_0b) };
static const APPW_COND _Condition_0c = { "A", _aComparison_0c, GUI_COUNTOF(_aComparison_0c) };
static const APPW_COND _Condition_0d = { "A", _aComparison_0d, GUI_COUNTOF(_aComparison_0d) };
static const APPW_COND _Condition_0e = { "A", _aComparison_0e, GUI_COUNTOF(_aComparison_0e) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,        WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_SWAPSCREEN,     ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_UTILITIES),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,             WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_MODALMESSAGE,   ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,             WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_CLOSESCREEN,    ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_CURDISP1,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK1,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK1__APPW_JOB_SETBITMAP,
    { ARG_V(4163),
      ARG_VP(0, acast),
      ARG_V(3129),
    }, 1, &_Condition_03
  },
  { ID_VAR_CURDISP2,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK2,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK2__APPW_JOB_SETBITMAP,
    { ARG_V(4164),
      ARG_VP(0, acast),
      ARG_V(3129),
    }, 1, &_Condition_04
  },
  { ID_VAR_CURDISP3,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK3,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK3__APPW_JOB_SETBITMAP,
    { ARG_V(4165),
      ARG_VP(0, acast),
      ARG_V(3129),
    }, 1, &_Condition_05
  },
  { ID_VAR_CURDISP4,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK4,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK4__APPW_JOB_SETBITMAP,
    { ARG_V(4166),
      ARG_VP(0, acast),
      ARG_V(3129),
    }, 1, &_Condition_06
  },
  { ID_VAR_CURDISP5,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK5,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK5__APPW_JOB_SETBITMAP,
    { ARG_V(4167),
      ARG_VP(0, acast),
      ARG_V(3129),
    }, 1, &_Condition_07
  },
  { ID_VAR_CURDISP1,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK1,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK1__APPW_JOB_SETBITMAP_0,
    { ARG_V(4163),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_08
  },
  { ID_VAR_CURDISP2,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK2,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK2__APPW_JOB_SETBITMAP_0,
    { ARG_V(4164),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_09
  },
  { ID_VAR_CURDISP3,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK3,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK3__APPW_JOB_SETBITMAP_0,
    { ARG_V(4165),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0a
  },
  { ID_VAR_CURDISP4,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK4,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK4__APPW_JOB_SETBITMAP_0,
    { ARG_V(4166),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0b
  },
  { ID_VAR_CURDISP5,          WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_PASSBLOCK5,      APPW_JOB_SETBITMAP,      ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_PASSBLOCK5__APPW_JOB_SETBITMAP_0,
    { ARG_V(4167),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_0c
  },
  { ID_VAR_PWDRETRY,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_BACK,             APPW_JOB_SETTEXT,        ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BACK__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_RETRY),
    }, 65536, &_Condition_0d
  },
  { ID_VAR_PWDRETRY,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_BACK,             APPW_JOB_SETTEXT,        ID_SCREEN_CHANGEPASSWORD__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BACK__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_BACK),
    }, 65536, &_Condition_0e
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
*       ID_SCREEN_CHANGEPASSWORD_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_CHANGEPASSWORD_RootInfo = {
  ID_SCREEN_CHANGEPASSWORD,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_CHANGEPASSWORD,
  0
};

/*************************** End of file ****************************/
