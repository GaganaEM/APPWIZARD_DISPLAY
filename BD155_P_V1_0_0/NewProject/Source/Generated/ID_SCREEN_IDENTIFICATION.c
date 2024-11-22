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
File        : ID_SCREEN_IDENTIFICATION.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_IDENTIFICATION.h"

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
    ID_SCREEN_IDENTIFICATION, 0,
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
    ID_IMAGE_00, ID_SCREEN_IDENTIFICATION,
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
    ID_IMAGE_01, ID_SCREEN_IDENTIFICATION,
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
    ID_IMAGE_02, ID_SCREEN_IDENTIFICATION,
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
    ID_IMAGE_03, ID_SCREEN_IDENTIFICATION,
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
    ID_IMAGE_UIN, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 67, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      421, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 224, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 71, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      413, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_MAKE, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 130, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      421, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_06, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 224, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 134, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      413, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_MODEL, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 193, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      421, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 224, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 197, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      413, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_SERIALNO, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 256, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      421, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_11, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 224, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 260, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      413, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_UNITNO, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 220, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 319, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      421, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_13, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 224, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 323, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      413, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_02, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 163, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 418, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 98, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 10, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 165, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 420, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 11, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_UIN, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 236, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 71, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      382, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MAKE, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 236, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 134, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      382, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MODEL, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 236, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 197, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      382, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SERIALNO, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 236, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 260, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      382, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_UNITNO, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 236, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 323, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      382, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_00, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 80, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      640, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_01, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 146, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 71, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      52, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 123, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 134, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_03, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 111, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 197, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      87, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_04, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 81, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 260, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      117, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_05, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 81, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 323, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      117, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_06, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 68, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_07, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 131, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_08, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_09, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 257, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_10, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 198, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 320, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_WARN, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 168, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 431, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      114, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_WARN_DISCP, ID_SCREEN_IDENTIFICATION,
    { { { DISPOSE_MODE_REL_PARENT, 282, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 419, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      420, 49, 0, 0, 0, 0
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
  { ID_IMAGE_00,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                            ARG_V(191986), } },
  { ID_IMAGE_01,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUP_arrow_Yellow_72x90),
                                                            ARG_V(5682), } },
  { ID_IMAGE_02,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_Yellow_72x90),
                                                            ARG_V(5915), } },
  { ID_IMAGE_03,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acedit_symbol),
                                                            ARG_V(6794), } },
  { ID_IMAGE_UIN,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_UIN,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_421x45),
                                                            ARG_V(264), } },
  { ID_IMAGE_04,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                            ARG_V(185), } },
  { ID_IMAGE_MAKE,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_MAKE,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                            ARG_V(4730), } },
  { ID_IMAGE_06,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                            ARG_V(185), } },
  { ID_IMAGE_MODEL,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_MODEL,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                            ARG_V(4730), } },
  { ID_IMAGE_09,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                            ARG_V(185), } },
  { ID_IMAGE_SERIALNO,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_SERIALNO,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                            ARG_V(4730), } },
  { ID_IMAGE_11,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_11,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                            ARG_V(185), } },
  { ID_IMAGE_UNITNO,          APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_UNITNO,          APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                            ARG_V(4730), } },
  { ID_IMAGE_13,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_13,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqureblack),
                                                            ARG_V(185), } },
  { ID_BOX_02,                APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_02,                APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_BOX_01,                APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_BOX_01,                APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_TEXT_UIN,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_UIN,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_UIN,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_UIN,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_UIN,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_UIN1) } },
  { ID_TEXT_UIN,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_MAKE,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_MAKE,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_MAKE,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MAKE,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MAKE,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_MAKE1) } },
  { ID_TEXT_MAKE,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_MODEL,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_MODEL,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_MODEL,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MODEL,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MODEL,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_MODEL1) } },
  { ID_TEXT_MODEL,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_SERIALNO,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_SERIALNO,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_SERIALNO,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SERIALNO,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SERIALNO,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_SERIAL1) } },
  { ID_TEXT_SERIALNO,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_UNITNO,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_UNITNO,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_UNITNO,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_UNITNO,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_UNITNO,           APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_UNIT1) } },
  { ID_TEXT_UNITNO,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_00,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_00,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_00,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_00,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_96) } },
  { ID_TEXT_00,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_01,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_01,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_01,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_01,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_97) } },
  { ID_TEXT_01,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_02,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_02,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_02,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_98) } },
  { ID_TEXT_02,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_03,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_03,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_03,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_03,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_99) } },
  { ID_TEXT_03,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_04,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_04,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_04,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_04,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_100) } },
  { ID_TEXT_04,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_05,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_05,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_05,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_05,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_101) } },
  { ID_TEXT_05,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_06,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_06,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_06,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_06,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_06,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_07,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_07,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_07,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_07,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_07,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_08,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_08,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_08,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_08,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_08,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_09,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_09,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_09,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_09,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_09,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_10,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_10,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_TOP),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_10,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_10,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_TEXT_10,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_WARN,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_RED) } },
  { ID_TEXT_WARN,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_WARN,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_WARN,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_WARN,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_102) } },
  { ID_TEXT_WARN,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_WARN_DISCP,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_RED) } },
  { ID_TEXT_WARN_DISCP,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                            ARG_V(0),
                                                            ARG_V(0) } },
  { ID_TEXT_WARN_DISCP,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_WARN_DISCP,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_WARN_DISCP,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_167) } },
  { ID_TEXT_WARN_DISCP,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_WARN_DISCP,       APPW_SET_PROP_WRAP,         { ARG_V(0) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 28 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_BLOCK_SELECTED }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_UIN }, { APPW_IS_VAL, 250 } }, APPW__CompareIsLess },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_MAKE }, { APPW_IS_VAL, 250 } }, APPW__CompareIsLess },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_MODEL }, { APPW_IS_VAL, 250 } }, APPW__CompareIsLess },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_SERIAL_NO }, { APPW_IS_VAL, 250 } }, APPW__CompareIsLess },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_UNIT_NO }, { APPW_IS_VAL, 250 } }, APPW__CompareIsLess },
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
  { ID_VAR_DISPSCREEN,        WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_SWAPSCREEN,     ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_UTILITIES),
    }, 0, &_Condition_00
  },
  { ID_VAR_DISPSCREEN,        WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_SWAPSCREEN,     ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_KEYPAD),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,             WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_MODALMESSAGE,   ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_POPUP,             WM_NOTIFICATION_VALUE_CHANGED,    0,                        APPW_JOB_CLOSESCREEN,    ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_03
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_UIN,             APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_UIN__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_04
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_UIN,             APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_UIN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_05
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_MAKE,            APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_MAKE__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_06
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_MAKE,            APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_MAKE__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_07
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_MODEL,           APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_MODEL__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_08
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_MODEL,           APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_MODEL__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_09
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_SERIALNO,        APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_SERIALNO__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0a
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_SERIALNO,        APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_SERIALNO__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_0b
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_UNITNO,          APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_UNITNO__APPW_JOB_SETBITMAP,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0c
  },
  { ID_VAR_BLOCK_SELECTED,    WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_UNITNO,          APPW_JOB_SETBITMAP,      ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_UNITNO__APPW_JOB_SETBITMAP_0,
    { ARG_V(4135),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_0d
  },
  { ID_VAR_UIN,               WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_UIN,              APPW_JOB_SETTEXT,        ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_UIN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_UIN1),
    }, 65536, &_Condition_0e
  },
  { ID_VAR_MAKE,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MAKE,             APPW_JOB_SETTEXT,        ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MAKE__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_MAKE1),
    }, 65536, &_Condition_0f
  },
  { ID_VAR_MODEL,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MODEL,            APPW_JOB_SETTEXT,        ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MODEL__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_MODEL1),
    }, 65536, &_Condition_10
  },
  { ID_VAR_SERIAL_NO,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SERIALNO,         APPW_JOB_SETTEXT,        ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SERIALNO__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_SERIAL1),
    }, 65536, &_Condition_11
  },
  { ID_VAR_UNIT_NO,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_UNITNO,           APPW_JOB_SETTEXT,        ID_SCREEN_IDENTIFICATION__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_UNITNO__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_UNIT1),
    }, 65536, &_Condition_12
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
*       ID_SCREEN_IDENTIFICATION_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_IDENTIFICATION_RootInfo = {
  ID_SCREEN_IDENTIFICATION,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_IDENTIFICATION,
  0
};

/*************************** End of file ****************************/
