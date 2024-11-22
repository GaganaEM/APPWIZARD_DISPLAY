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
File        : ID_SCREEN_MAINMENU.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_MAINMENU.h"

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
    ID_SCREEN_MAINMENU, 0,
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
    ID_IMAGE_00, ID_SCREEN_MAINMENU,
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
    ID_IMAGE_01, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 246, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 181, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      300, 111, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_03, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 560, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 394, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 394, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_05, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_06, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_07, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 2, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 22, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      58, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_08, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 13, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 151, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 13, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 281, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 49, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_10, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 13, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 49, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_11, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 578, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 409, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 49, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_12, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 560, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_13, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 560, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_14, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 560, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_15, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 575, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 21, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      40, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_16, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 578, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 282, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 49, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 60, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 34, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      170, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 163, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      145, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 93, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 280, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 51, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_03, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 90, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 420, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      105, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_04, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 650, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 408, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      109, 54, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_05, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 633, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      158, 34, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 597, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 147, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      180, 29, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_07, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 642, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 270, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      125, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_08, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 669, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 293, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      73, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_09, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 650, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 318, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      112, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_10, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 305, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      189, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06_Copy, ID_SCREEN_MAINMENU,
    { { { DISPOSE_MODE_REL_PARENT, 657, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 176, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                      ARG_V(191986), } },
  { ID_IMAGE_01,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBEML300x111),
                                                      ARG_V(13501), } },
  { ID_IMAGE_02,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_03,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_04,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_05,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_05,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_06,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_07,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_07,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acGuageDisplay),
                                                      ARG_V(15678), } },
  { ID_IMAGE_08,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_08,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDiagnostic),
                                                      ARG_V(4866), } },
  { ID_IMAGE_09,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUserSetting),
                                                      ARG_V(14830), } },
  { ID_IMAGE_10,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_10,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUtilities),
                                                      ARG_V(9892), } },
  { ID_IMAGE_11,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_11,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSystemSetting),
                                                      ARG_V(13188), } },
  { ID_IMAGE_12,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_12,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_13,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_13,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_14,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_14,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                      ARG_V(20978), } },
  { ID_IMAGE_15,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_15,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acmin_max_logging_40x50),
                                                      ARG_V(2317), } },
  { ID_IMAGE_16,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_16,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acedit2_50x49),
                                                      ARG_V(1597), } },
  { ID_TEXT_00,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_00,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_2) } },
  { ID_TEXT_00,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_01,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_01,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_3) } },
  { ID_TEXT_01,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_02,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_02,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_02,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_144) } },
  { ID_TEXT_02,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_02,         APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_03,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_03,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_03,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_6) } },
  { ID_TEXT_03,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_04,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_04,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_04,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_103) } },
  { ID_TEXT_04,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_04,         APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_05,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_05,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_05,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_05,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_06,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_06,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_06,         APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_06,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_07,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_07,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_07,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_90) } },
  { ID_TEXT_07,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_08,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_08,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_08,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_146) } },
  { ID_TEXT_08,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_09,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_09,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_09,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_4) } },
  { ID_TEXT_09,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_10,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_10,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_10,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_1) } },
  { ID_TEXT_10,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_06_Copy,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06_Copy,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                      ARG_V(0),
                                                      ARG_V(0) } },
  { ID_TEXT_06_Copy,    APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy,    APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_166) } },
  { ID_TEXT_06_Copy,    APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_06_Copy,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 27 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_ENGHRS_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_ENGHRS_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_ENGFUELRATE_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_ENGFUELRATE_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 29 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 31 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 32 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_0f = { "A", _aComparison_0f, GUI_COUNTOF(_aComparison_0f) };
static const APPW_COND _Condition_10 = { "A", _aComparison_10, GUI_COUNTOF(_aComparison_10) };
static const APPW_COND _Condition_11 = { "A", _aComparison_11, GUI_COUNTOF(_aComparison_11) };
static const APPW_COND _Condition_12 = { "A", _aComparison_12, GUI_COUNTOF(_aComparison_12) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_POPUP,       WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_MODALMESSAGE,   ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_4,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,       WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_CLOSESCREEN,    ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_5,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAIN_DAY),
    }, 0, &_Condition_02
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_8,
    { ARG_V(ID_SCREEN_MAIN2_DAY),
    }, 0, &_Condition_03
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_9,
    { ARG_V(ID_SCREEN_RAWVALUE_ANALOG),
    }, 0, &_Condition_04
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_10,
    { ARG_V(ID_SCREEN_RAWVALUE_IO),
    }, 0, &_Condition_05
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DIAGNOSTIC),
    }, 0, &_Condition_06
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_USER_SETTINGS),
    }, 0, &_Condition_07
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_UTILITIES),
    }, 0, &_Condition_08
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_SYSTEM_SETTINGS),
    }, 0, &_Condition_09
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_6,
    { ARG_V(ID_SCREEN_MAIN_NIGHT),
    }, 0, &_Condition_0a
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_7,
    { ARG_V(ID_SCREEN_MAIN2_NIGHT),
    }, 0, &_Condition_0b
  },
  { ID_VAR_ENGHRS_POPUP, WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_MODALMESSAGE,   ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_11,
    { ARG_V(ID_SCREEN_ENGHRS_POPUP),
    }, 0, &_Condition_0c
  },
  { ID_VAR_ENGHRS_POPUP, WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_CLOSESCREEN,    ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_12,
    { ARG_V(ID_SCREEN_ENGHRS_POPUP),
    }, 0, &_Condition_0d
  },
  { ID_VAR_ENGFUELRATE_POPUP, WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_MODALMESSAGE,   ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_13,
    { ARG_V(ID_SCREEN_ENGFUELRATE_POPUP),
    }, 0, &_Condition_0e
  },
  { ID_VAR_ENGFUELRATE_POPUP, WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_CLOSESCREEN,    ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_14,
    { ARG_V(ID_SCREEN_ENGFUELRATE_POPUP),
    }, 0, &_Condition_0f
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_15,
    { ARG_V(ID_SCREEN_SHFTWSCLKSETTING),
    }, 0, &_Condition_10
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_16,
    { ARG_V(ID_SCREEN_DIAGNOSTICS_2),
    }, 0, &_Condition_11
  },
  { ID_VAR_DISPSCREEN,  WM_NOTIFICATION_VALUE_CHANGED,    0,                  APPW_JOB_SWAPSCREEN,     ID_SCREEN_MAINMENU__WM_NOTIFICATION_VALUE_CHANGED_17,
    { ARG_V(ID_SCREEN_ENGHRS_EDIT),
    }, 0, &_Condition_12
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
*       ID_SCREEN_MAINMENU_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_MAINMENU_RootInfo = {
  ID_SCREEN_MAINMENU,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_MAINMENU,
  0
};

/*************************** End of file ****************************/
