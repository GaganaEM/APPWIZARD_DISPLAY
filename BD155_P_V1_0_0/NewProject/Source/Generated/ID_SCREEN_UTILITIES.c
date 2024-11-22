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
File        : ID_SCREEN_UTILITIES.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_UTILITIES.h"

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
    ID_SCREEN_UTILITIES, 0,
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
    ID_IMAGE_00, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_01, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_07, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_04, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_03, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_06, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_05, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_08, ID_SCREEN_UTILITIES,
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
    ID_IMAGE_09, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 9, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 60, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_10, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 17, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 151, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_11, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 270, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 75, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_12, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 12, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 46, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_13, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 571, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 147, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 57, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_14, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 571, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_15, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 571, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 404, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 59, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_16, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 560, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 70, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 20, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      160, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 151, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      125, 53, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 90, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 280, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      125, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_03, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 310, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      105, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_04, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 63, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 420, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      175, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_05, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 617, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 9, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      125, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 586, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 34, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      187, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_07, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 631, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 59, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      98, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_08, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 646, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 152, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      114, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_09, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 627, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 295, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      170, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_10, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 624, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      175, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_11, ID_SCREEN_UTILITIES,
    { { { DISPOSE_MODE_REL_PARENT, 330, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      140, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                       ARG_V(191986), } },
  { ID_IMAGE_01,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_IMAGE_02,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_IMAGE_07,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_07,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_IMAGE_04,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_IMAGE_03,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_IMAGE_06,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_IMAGE_05,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_05,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_IMAGE_08,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_08,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBEML300x111),
                                                       ARG_V(13501), } },
  { ID_IMAGE_09,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsystemSetup55x60),
                                                       ARG_V(3118), } },
  { ID_IMAGE_10,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_10,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acServiceremainder55x50),
                                                       ARG_V(2510), } },
  { ID_IMAGE_11,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_11,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acPasswordLock),
                                                       ARG_V(28131), } },
  { ID_IMAGE_12,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_12,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acvin_Cin50x46),
                                                       ARG_V(3940), } },
  { ID_IMAGE_13,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_13,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acRaw_can_data55x57),
                                                       ARG_V(16663), } },
  { ID_IMAGE_14,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_14,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acdatalogging_55X55),
                                                       ARG_V(1609), } },
  { ID_IMAGE_15,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_15,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acfault_logging_55x59),
                                                       ARG_V(13148), } },
  { ID_IMAGE_16,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_16,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsqrbckd),
                                                       ARG_V(20978), } },
  { ID_TEXT_00,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_00,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_18) } },
  { ID_TEXT_00,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_00,          APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_01,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_01,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_136) } },
  { ID_TEXT_01,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_01,          APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_02,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_02,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_02,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_12) } },
  { ID_TEXT_02,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_03,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_03,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_03,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_4) } },
  { ID_TEXT_03,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_04,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_04,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_04,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_13) } },
  { ID_TEXT_04,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_05,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_05,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_05,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_90) } },
  { ID_TEXT_05,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_06,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_06,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_148) } },
  { ID_TEXT_06,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_07,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_07,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_07,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_16) } },
  { ID_TEXT_07,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_08,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_08,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_08,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_65) } },
  { ID_TEXT_08,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_08,          APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_09,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_09,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_09,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DATA_LOGGING) } },
  { ID_TEXT_09,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_09,          APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_10,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_10,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_10,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_17) } },
  { ID_TEXT_10,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_10,          APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_11,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_11,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                       ARG_V(0),
                                                       ARG_V(0) } },
  { ID_TEXT_11,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_11,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_11,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_6) } },
  { ID_TEXT_11,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_11,          APPW_SET_PROP_WRAP,         { ARG_V(0) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 30 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
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

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAINMENU),
    }, 0, &_Condition_00
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_SYSTEM_SETUP_DATA),
    }, 0, &_Condition_01
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_SERVICE_REMINDER),
    }, 0, &_Condition_02
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_CHANGEPASSWORD),
    }, 0, &_Condition_03
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_IDENTIFICATION),
    }, 0, &_Condition_04
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_4,
    { ARG_V(ID_SCREEN_RAW_CAN_DATA),
    }, 0, &_Condition_05
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_5,
    { ARG_V(ID_SCREEN_DATA_LOGGING),
    }, 0, &_Condition_06
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_6,
    { ARG_V(ID_SCREEN_FAULT_LOGGING),
    }, 0, &_Condition_07
  },
  { ID_VAR_DISPSCREEN,   WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_SWAPSCREEN,     ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_8,
    { ARG_V(ID_SCREEN_SHFTWSWRKINGHRS_LOG),
    }, 0, &_Condition_08
  },
  { ID_VAR_POPUP,        WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_MODALMESSAGE,   ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_7,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_09
  },
  { ID_VAR_POPUP,        WM_NOTIFICATION_VALUE_CHANGED,    0,                   APPW_JOB_CLOSESCREEN,    ID_SCREEN_UTILITIES__WM_NOTIFICATION_VALUE_CHANGED_9,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_0a
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
*       ID_SCREEN_UTILITIES_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_UTILITIES_RootInfo = {
  ID_SCREEN_UTILITIES,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_UTILITIES,
  0
};

/*************************** End of file ****************************/
