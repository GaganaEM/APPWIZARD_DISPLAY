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
File        : ID_SCREEN_ENGHRS_EDIT.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_ENGHRS_EDIT.h"

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
    ID_SCREEN_ENGHRS_EDIT, 0,
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
    ID_IMAGE_00, ID_SCREEN_ENGHRS_EDIT,
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
    ID_TEXT_title, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 237, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      221, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_title2, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 464, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      66, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ENGHRS_RESET, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 59, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      600, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ADJENGHRS, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 130, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      600, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ENGHRS, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 200, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      600, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 63, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      590, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 134, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      590, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_03, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 204, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      590, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_05, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_RESET_OR_UP, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 729, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_DOWN, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_00, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 366, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 71, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 69, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 74, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 368, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 400, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 71, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_03, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 402, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 368, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 73, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 71, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 115, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      199, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 115, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 143, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      138, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 260, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 143, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      199, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_03, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 115, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 213, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      199, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_04, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 323, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_05, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 655, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 145, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ADJD_ENG_HRS, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 490, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 145, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      164, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ENGHRS_EN_DIS, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 559, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 213, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      129, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 79, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 379, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      113, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_07, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 365, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 379, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      26, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_08, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 405, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 379, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      190, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_09, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 698, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 379, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      26, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06_Copy, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 191, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 379, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_CAL_HRS, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 265, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 379, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      97, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_TTL_ENG_HRS, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 598, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 379, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      97, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_10, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 252, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 378, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      9, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_10_Copy, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 592, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 378, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      9, 19, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06_Copy1, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 83, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 422, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      65, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06_Copy2, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 161, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 418, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      517, 48, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SAVE_STATUS, ID_SCREEN_ENGHRS_EDIT,
    { { { DISPOSE_MODE_REL_PARENT, 327, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 314, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      145, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                         ARG_V(191986), } },
  { ID_TEXT_title,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_title,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_title,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_title,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_title,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_title,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_title2,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_title2,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_title2,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_title2,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_title2,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_166) } },
  { ID_TEXT_title2,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_IMAGE_ENGHRS_RESET, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ENGHRS_RESET, APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_421x45),
                                                         ARG_V(264), } },
  { ID_IMAGE_ADJENGHRS,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ADJENGHRS,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                         ARG_V(4730), } },
  { ID_IMAGE_ENGHRS,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ENGHRS,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                         ARG_V(4730), } },
  { ID_IMAGE_01,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                         ARG_V(185), } },
  { ID_IMAGE_02,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                         ARG_V(185), } },
  { ID_IMAGE_03,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                         ARG_V(185), } },
  { ID_IMAGE_04,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUP_arrow_Yellow_72x90),
                                                         ARG_V(5682), } },
  { ID_IMAGE_05,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_05,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_Yellow_72x90),
                                                         ARG_V(5915), } },
  { ID_IMAGE_RESET_OR_UP,  APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_RESET_OR_UP,  APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acReset_symbol_72x90),
                                                         ARG_V(8383), } },
  { ID_IMAGE_DOWN,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_DOWN,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, NULL), } },
  { ID_BOX_00,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_01,             APPW_SET_PROP_COLOR,        { ARG_V(0xff262626) } },
  { ID_BOX_03,             APPW_SET_PROP_COLOR,        { ARG_V(0xff262626) } },
  { ID_TEXT_00,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_00,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_00,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_00,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_01,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_01,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_169) } },
  { ID_TEXT_01,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_02,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_02,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_02,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_02,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_03,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_03,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_03,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_24) } },
  { ID_TEXT_03,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_04,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_04,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_04,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_170) } },
  { ID_TEXT_04,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_05,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_05,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_05,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_21) } },
  { ID_TEXT_05,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_ADJD_ENG_HRS,  APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_ADJD_ENG_HRS,  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_ADJD_ENG_HRS,  APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_ADJD_ENG_HRS,  APPW_SET_PROP_COLOR2,       { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_ADJD_ENG_HRS,  APPW_SET_PROP_DECMODE,      { ARG_V(8),
                                                         ARG_V(1),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_ADJD_ENG_HRS,  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_30_Bold_EXT_AA4) } },
  { ID_TEXT_ENGHRS_EN_DIS, APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_ENGHRS_EN_DIS, APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_ENGHRS_EN_DIS, APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ENGHRS_EN_DIS, APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_ENGHRS_EN_DIS, APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_171) } },
  { ID_TEXT_ENGHRS_EN_DIS, APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_06,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_06,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_173) } },
  { ID_TEXT_06,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_07,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_07,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_07,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_21) } },
  { ID_TEXT_07,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_08,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_08,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_08,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_140) } },
  { ID_TEXT_08,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_09,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_09,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_09,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_21) } },
  { ID_TEXT_09,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_06_Copy,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06_Copy,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_06_Copy,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_174) } },
  { ID_TEXT_06_Copy,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_CAL_HRS,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_CAL_HRS,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_CAL_HRS,       APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_CAL_HRS,       APPW_SET_PROP_COLOR2,       { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_CAL_HRS,       APPW_SET_PROP_DECMODE,      { ARG_V(8),
                                                         ARG_V(1),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_CAL_HRS,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_TTL_ENG_HRS,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_TTL_ENG_HRS,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_TTL_ENG_HRS,   APPW_SET_PROP_BKCOLOR,      { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_TTL_ENG_HRS,   APPW_SET_PROP_COLOR2,       { ARG_V(GUI_TRANSPARENT) } },
  { ID_TEXT_TTL_ENG_HRS,   APPW_SET_PROP_DECMODE,      { ARG_V(8),
                                                         ARG_V(1),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_TTL_ENG_HRS,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_10,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_10,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_10,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_10,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_10_Copy,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_10_Copy,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_10_Copy,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_10_Copy,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_10_Copy,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_10_Copy,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_06_Copy1,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06_Copy1,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_06_Copy1,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy1,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy1,      APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_176) } },
  { ID_TEXT_06_Copy1,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_06_Copy2,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06_Copy2,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_06_Copy2,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy2,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06_Copy2,      APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_175) } },
  { ID_TEXT_06_Copy2,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_06_Copy2,      APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_SAVE_STATUS,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_SAVE_STATUS,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                         ARG_V(0),
                                                         ARG_V(0) } },
  { ID_TEXT_SAVE_STATUS,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SAVE_STATUS,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SAVE_STATUS,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_EHE_SCROLL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_ENGHRS_EN_DIS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
  { { { APPW_IS_VAR, ID_VAR_ENGHRS_EN_DIS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_ENGHRS_EN_DIS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_WARNING }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_WARNING }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_SAVE_STATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_SAVE_STATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_0b = { "A", _aComparison_0b, GUI_COUNTOF(_aComparison_0b) };
static const APPW_COND _Condition_0c = { "A", _aComparison_0c, GUI_COUNTOF(_aComparison_0c) };
static const APPW_COND _Condition_0d = { "A", _aComparison_0d, GUI_COUNTOF(_aComparison_0d) };
static const APPW_COND _Condition_0e = { "A", _aComparison_0e, GUI_COUNTOF(_aComparison_0e) };
static const APPW_COND _Condition_0f = { "A", _aComparison_0f, GUI_COUNTOF(_aComparison_0f) };
static const APPW_COND _Condition_12 = { "A", _aComparison_12, GUI_COUNTOF(_aComparison_12) };
static const APPW_COND _Condition_13 = { "A", _aComparison_13, GUI_COUNTOF(_aComparison_13) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ENGHRS_RESET, APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS_RESET__APPW_JOB_SETBITMAP,
    { ARG_V(4472),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_00
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ENGHRS_RESET, APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS_RESET__APPW_JOB_SETBITMAP_0,
    { ARG_V(4472),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_01
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ADJENGHRS,    APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ADJENGHRS__APPW_JOB_SETBITMAP,
    { ARG_V(4472),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_02
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ADJENGHRS,    APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ADJENGHRS__APPW_JOB_SETBITMAP_0,
    { ARG_V(4472),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_03
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ENGHRS,       APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS__APPW_JOB_SETBITMAP,
    { ARG_V(4472),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_04
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_ENGHRS,       APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_ENGHRS__APPW_JOB_SETBITMAP_0,
    { ARG_V(4472),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_05
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_RESET_OR_UP,  APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_RESET_OR_UP__APPW_JOB_SETBITMAP_0,
    { ARG_V(4472),
      ARG_VP(0, acReset_symbol_72x90),
      ARG_V(8383),
    }, 1, &_Condition_06
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_RESET_OR_UP,  APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_RESET_OR_UP__APPW_JOB_SETBITMAP,
    { ARG_V(4472),
      ARG_VP(0, acUp_arrow_blue_72x90),
      ARG_V(6980),
    }, 1, &_Condition_07
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_DOWN,         APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_DOWN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4472),
      ARG_VP(0, acBLANK52X52),
      ARG_V(568),
    }, 1, &_Condition_08
  },
  { ID_VAR_EHE_SCROLL,     WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_DOWN,         APPW_JOB_SETBITMAP,      ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_DOWN__APPW_JOB_SETBITMAP,
    { ARG_V(4472),
      ARG_VP(0, acDown_arrow_blue_72x90),
      ARG_V(7593),
    }, 1, &_Condition_09
  },
  { ID_VAR_ADJD_ENG_HRS,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ADJD_ENG_HRS,  APPW_JOB_SETVALUE,       ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ADJD_ENG_HRS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_ENGHRS_EN_DIS,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ENGHRS_EN_DIS, APPW_JOB_SETTEXT,        ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGHRS_EN_DIS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_171),
    }, 65536, &_Condition_0b
  },
  { ID_VAR_ENGHRS_EN_DIS,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ENGHRS_EN_DIS, APPW_JOB_SETTEXT,        ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ENGHRS_EN_DIS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_172),
    }, 65536, &_Condition_0c
  },
  { ID_VAR_DISPSCREEN,     WM_NOTIFICATION_VALUE_CHANGED,    0,                     APPW_JOB_SWAPSCREEN,     ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAINMENU),
    }, 0, &_Condition_0d
  },
  { ID_VAR_WARNING,        WM_NOTIFICATION_VALUE_CHANGED,    0,                     APPW_JOB_MODALMESSAGE,   ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_WARNING_POPUP),
    }, 0, &_Condition_0e
  },
  { ID_VAR_WARNING,        WM_NOTIFICATION_VALUE_CHANGED,    0,                     APPW_JOB_CLOSESCREEN,    ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_WARNING_POPUP),
    }, 0, &_Condition_0f
  },
  { ID_VAR_HRMETER,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_TTL_ENG_HRS,   APPW_JOB_SETVALUE,       ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TTL_ENG_HRS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CAL_HRS,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_CAL_HRS,       APPW_JOB_SETVALUE,       ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_CAL_HRS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SAVE_STATUS,    WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SAVE_STATUS,   APPW_JOB_SETTEXT,        ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_SPACE),
    }, 65536, &_Condition_12
  },
  { ID_VAR_SAVE_STATUS,    WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SAVE_STATUS,   APPW_JOB_SETTEXT,        ID_SCREEN_ENGHRS_EDIT__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_158),
    }, 65536, &_Condition_13
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
*       ID_SCREEN_ENGHRS_EDIT_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_ENGHRS_EDIT_RootInfo = {
  ID_SCREEN_ENGHRS_EDIT,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_ENGHRS_EDIT,
  0
};

/*************************** End of file ****************************/
