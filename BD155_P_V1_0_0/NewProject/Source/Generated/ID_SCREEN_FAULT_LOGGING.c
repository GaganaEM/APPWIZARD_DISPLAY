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
File        : ID_SCREEN_FAULT_LOGGING.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_FAULT_LOGGING.h"

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
    ID_SCREEN_FAULT_LOGGING, 0,
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
    ID_IMAGE_03, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      800, 480, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_00, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 276, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 9, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      247, 44, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 1, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_05, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 599, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 599, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 576, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 418, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_06, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 576, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 69, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 349, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_07, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 630, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 275, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      146, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_08, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 663, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 305, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      77, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_09, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 630, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 400, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      146, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_10, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 663, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 430, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      73, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_21, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 592, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 3, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      207, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_22, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 611, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 72, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      170, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DAY, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 582, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MONTH, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 652, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_YEAR, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 722, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 29, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_02, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 627, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 33, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_12, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 697, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 33, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_HOUR, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 592, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      48, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MINUTE, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 665, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      48, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SECONDS, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 738, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 97, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      48, 33, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_14, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 640, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_15, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 713, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 101, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      25, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_04, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 260, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 260, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_05, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 282, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 411, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 283, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 12, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_03, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 301, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 175, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      197, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_11, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 285, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 375, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      240, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_04, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 280, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      57, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_17, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 303, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      29, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_16, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      57, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_18, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 336, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      28, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_20, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 335, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      28, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_19, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 336, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      28, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COPYMESG, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 365, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 222, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      167, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_READMESG, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 365, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 254, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      167, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_IDMESG, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 365, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 287, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      167, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_LOGFILESIZE, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 352, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 420, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      132, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_00, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 558, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 228, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      35, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_MULTIEDIT_Create,
    ID_MULTIEDIT_00, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 286, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      225, 54, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FAULTSTATUS, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 305, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 98, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      187, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_02, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 1, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_06, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 1, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 80, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_05, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 30, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 160, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      153, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_06, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 290, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      170, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_01, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 8, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      165, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_04_, ID_SCREEN_FAULT_LOGGING,
    { { { DISPOSE_MODE_REL_PARENT, 23, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 45, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      153, 31, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_03,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                           ARG_V(191986), } },
  { ID_EDIT_00,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_00,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_00,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_00,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_00,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_00,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_17) } },
  { ID_EDIT_00,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_00,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_EDIT_00,              APPW_SET_PROP_LENGTH,       { ARG_V(17) } },
  { ID_IMAGE_01,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                           ARG_V(3863), } },
  { ID_IMAGE_05,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_05,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                           ARG_V(3863), } },
  { ID_IMAGE_04,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                           ARG_V(3863), } },
  { ID_BOX_01,               APPW_SET_PROP_COLOR,        { ARG_V(0xffb3b3b3) } },
  { ID_BOX_01,               APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_BOX_06,               APPW_SET_PROP_COLOR,        { ARG_V(0xffb3b3b3) } },
  { ID_BOX_06,               APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_EDIT_07,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_07,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_07,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_07,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_07,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_07,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_51) } },
  { ID_EDIT_07,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_07,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_07,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_08,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_08,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_08,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_08,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_08,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_08,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_52) } },
  { ID_EDIT_08,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_08,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_08,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_09,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_09,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_09,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_09,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_09,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_09,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_53) } },
  { ID_EDIT_09,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_09,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_09,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_10,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_10,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_10,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_10,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_10,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_10,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_54) } },
  { ID_EDIT_10,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_10,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_10,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_21,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_21,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_21,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_21,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_21,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_21,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_55) } },
  { ID_EDIT_21,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_21,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_21,              APPW_SET_PROP_LENGTH,       { ARG_V(16) } },
  { ID_EDIT_22,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_22,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_22,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_22,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_22,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_22,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_56) } },
  { ID_EDIT_22,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_22,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_22,              APPW_SET_PROP_LENGTH,       { ARG_V(16) } },
  { ID_TEXT_DAY,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DAY,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_DAY,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,             APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_DAY,             APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_MONTH,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MONTH,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_MONTH,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,           APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_MONTH,           APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_TEXT_YEAR,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_YEAR,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_YEAR,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,            APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_YEAR,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_20_Normal_EXT_AA4) } },
  { ID_EDIT_02,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_02,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_02,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_02,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_02,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_02,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_SLASH) } },
  { ID_EDIT_02,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_02,              APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_EDIT_12,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_12,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_12,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_12,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_12,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_12,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_SLASH) } },
  { ID_EDIT_12,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_12,              APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_TEXT_HOUR,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_HOUR,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_HOUR,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,            APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_HOUR,            APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_TEXT_MINUTE,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MINUTE,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_MINUTE,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,          APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_MINUTE,          APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_TEXT_SECONDS,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SECONDS,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_SECONDS,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,         APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_SECONDS,         APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_24_Normal_EXT_AA4) } },
  { ID_EDIT_14,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_14,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_14,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_14,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_14,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_14,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_14,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_14,              APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_EDIT_15,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_15,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_15,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_15,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_15,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_15,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_15,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_15,              APPW_SET_PROP_FONT,         { ARG_VP(0, acBasicSquare7Solid_18_Bold_EXT_AA4) } },
  { ID_BOX_04,               APPW_SET_PROP_COLOR,        { ARG_V(0xffd0d0d0) } },
  { ID_BOX_04,               APPW_SET_PROP_RADIUS,       { ARG_V(20) } },
  { ID_BOX_05,               APPW_SET_PROP_COLOR,        { ARG_V(0xffd0d0d0) } },
  { ID_BOX_05,               APPW_SET_PROP_RADIUS,       { ARG_V(20) } },
  { ID_EDIT_03,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_03,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_03,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_03,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_03,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_03,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_63) } },
  { ID_EDIT_03,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_03,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_03,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_11,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_11,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_11,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_11,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_11,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_11,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_no_of_rec) } },
  { ID_EDIT_11,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_11,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_11,              APPW_SET_PROP_LENGTH,       { ARG_V(20) } },
  { ID_EDIT_04,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_04,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_04,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_04,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_04,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_04,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_59) } },
  { ID_EDIT_04,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_04,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_17,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_17,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_17,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_17,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_17,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_17,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_61) } },
  { ID_EDIT_17,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_17,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_16,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_16,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_16,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_16,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_16,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_16,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_60) } },
  { ID_EDIT_16,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_16,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_18,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_18,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_18,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_18,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_18,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_18,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_18,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_18,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_20,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_20,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_20,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_20,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_20,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_20,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_20,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_20,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_19,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_19,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_19,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_19,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_19,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_19,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_19,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_19,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_COPYMESG,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COPYMESG,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_COPYMESG,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COPYMESG,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COPYMESG,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_COPYMESG,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_IDLE) } },
  { ID_TEXT_READMESG,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_READMESG,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_READMESG,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_READMESG,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_READMESG,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_READMESG,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_IDLE) } },
  { ID_TEXT_IDMESG,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_IDMESG,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_IDMESG,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_IDMESG,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_IDMESG,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_IDMESG,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_IDLE) } },
  { ID_TEXT_LOGFILESIZE,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_LOGFILESIZE,     APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_RIGHT | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_LOGFILESIZE,     APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_LOGFILESIZE,     APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_LOGFILESIZE,     APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_TEXT_LOGFILESIZE,     APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_IMAGE_00,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acpendrive_35x90),
                                                           ARG_V(2360), } },
  { ID_MULTIEDIT_00,         APPW_SET_PROP_BKCOLORS,     { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_MULTIEDIT_00,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_MULTIEDIT_00,         APPW_SET_PROP_RADIUS,       { ARG_V(10) } },
  { ID_MULTIEDIT_00,         APPW_SET_PROP_BORDER,       { ARG_V(3) } },
  { ID_MULTIEDIT_00,         APPW_SET_PROP_FRAME,        { ARG_V(3) } },
  { ID_TEXT_FAULTSTATUS,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_FAULTSTATUS,     APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_FAULTSTATUS,     APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FAULTSTATUS,     APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FAULTSTATUS,     APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_IMAGE_02,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                           ARG_V(3863), } },
  { ID_IMAGE_06,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqrgreqbckd200x80),
                                                           ARG_V(3863), } },
  { ID_EDIT_05,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_05,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_05,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_05,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_05,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_05,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_49) } },
  { ID_EDIT_05,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_05,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_05,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_06,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_06,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_06,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_06,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_06,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_06,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_50) } },
  { ID_EDIT_06,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_06,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_06,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_01,              APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_01,              APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_01,              APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_01,              APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_01,              APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_01,              APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_20) } },
  { ID_EDIT_01,              APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_01,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_01,              APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
  { ID_EDIT_04_,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_WHITE) } },
  { ID_EDIT_04_,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_04_,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                           ARG_V(GUI_INVALID_COLOR),
                                                           ARG_V(GUI_BLACK) } },
  { ID_EDIT_04_,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_04_,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_04_,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_25) } },
  { ID_EDIT_04_,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_04_,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_04_,             APPW_SET_PROP_LENGTH,       { ARG_V(15) } },
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
  { { { APPW_IS_VAR, ID_VAR_RECSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_RECSTATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_RECSTATUS }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_COPYSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_COPYSTATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_COPYSTATUS }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_READSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_IDSTATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_PENDRIVE_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_SDCARD_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14[] = {
  { { { APPW_IS_VAR, ID_VAR_SDCARD_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_0b = { "A", _aComparison_0b, GUI_COUNTOF(_aComparison_0b) };
static const APPW_COND _Condition_0c = { "A", _aComparison_0c, GUI_COUNTOF(_aComparison_0c) };
static const APPW_COND _Condition_0d = { "A", _aComparison_0d, GUI_COUNTOF(_aComparison_0d) };
static const APPW_COND _Condition_0e = { "A", _aComparison_0e, GUI_COUNTOF(_aComparison_0e) };
static const APPW_COND _Condition_0f = { "A", _aComparison_0f, GUI_COUNTOF(_aComparison_0f) };
static const APPW_COND _Condition_11 = { "A", _aComparison_11, GUI_COUNTOF(_aComparison_11) };
static const APPW_COND _Condition_12 = { "A", _aComparison_12, GUI_COUNTOF(_aComparison_12) };
static const APPW_COND _Condition_13 = { "A", _aComparison_13, GUI_COUNTOF(_aComparison_13) };
static const APPW_COND _Condition_14 = { "A", _aComparison_14, GUI_COUNTOF(_aComparison_14) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,       WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_SWAPSCREEN,     ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_UTILITIES),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,            WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_MODALMESSAGE,   ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,            WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_CLOSESCREEN,    ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_RECSTATUS,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FAULTSTATUS,     APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FAULTSTATUS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_03
  },
  { ID_VAR_RECSTATUS,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FAULTSTATUS,     APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FAULTSTATUS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_LOGGING),
    }, 65536, &_Condition_04
  },
  { ID_VAR_RECSTATUS,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FAULTSTATUS,     APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FAULTSTATUS__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_COMPLETE),
    }, 65536, &_Condition_05
  },
  { ID_VAR_DAY,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DAY,             APPW_JOB_SETVALUE,       ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MONTH,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MONTH,           APPW_JOB_SETVALUE,       ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_YEAR,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_YEAR,            APPW_JOB_SETVALUE,       ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_HOUR,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_HOUR,            APPW_JOB_SETVALUE,       ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MINUTE,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MINUTE,          APPW_JOB_SETVALUE,       ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COPYSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COPYMESG,        APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_0b
  },
  { ID_VAR_COPYSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COPYMESG,        APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_COPYING),
    }, 65536, &_Condition_0c
  },
  { ID_VAR_COPYSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COPYMESG,        APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COPYMESG__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_COMPLETE),
    }, 65536, &_Condition_0d
  },
  { ID_VAR_READSTATUS,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_READMESG,        APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_READMESG__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_0e
  },
  { ID_VAR_IDSTATUS,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_IDMESG,          APPW_JOB_SETTEXT,        ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_IDMESG__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_IDLE),
    }, 65536, &_Condition_0f
  },
  { ID_VAR_SEC,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SECONDS,         APPW_JOB_SETVALUE,       ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SECONDS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_PENDRIVE_POPUP,   WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_MODALMESSAGE,   ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_PENDRIVE_DETECT_POPUP),
    }, 0, &_Condition_11
  },
  { ID_VAR_PENDRIVE_POPUP,   WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_CLOSESCREEN,    ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_PENDRIVE_DETECT_POPUP),
    }, 0, &_Condition_12
  },
  { ID_VAR_SDCARD_POPUP,     WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_MODALMESSAGE,   ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED_4,
    { ARG_V(ID_SCREEN_SDCARD_DETECT),
    }, 0, &_Condition_13
  },
  { ID_VAR_SDCARD_POPUP,     WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_CLOSESCREEN,    ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED_5,
    { ARG_V(ID_SCREEN_SDCARD_DETECT),
    }, 0, &_Condition_14
  },
  { ID_VAR_LOGSIZE,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_LOGFILESIZE,     APPW_JOB_SETVALUE,       ID_SCREEN_FAULT_LOGGING__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_LOGFILESIZE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
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
*       ID_SCREEN_FAULT_LOGGING_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_FAULT_LOGGING_RootInfo = {
  ID_SCREEN_FAULT_LOGGING,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_FAULT_LOGGING,
  0
};

/*************************** End of file ****************************/