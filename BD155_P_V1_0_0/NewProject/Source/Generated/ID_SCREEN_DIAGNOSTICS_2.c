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
File        : ID_SCREEN_DIAGNOSTICS_2.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_DIAGNOSTICS_2.h"

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
    ID_SCREEN_DIAGNOSTICS_2, 0,
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
    ID_IMAGE_BK, ID_SCREEN_DIAGNOSTICS_2,
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
    ID_IMAGE_yellowup, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_yellowdown, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_blueup, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_bluedown, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_getfaults, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 6, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_table, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 102, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      714, 374, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_title, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 297, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      205, 30, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_tstatus, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 495, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 64, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      70, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_00, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 572, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 61, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 83, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 389, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ttsrc, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_tplug, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 107, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_tspn, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 185, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_tfmi, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 256, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_tcount, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 316, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_tdescription, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 467, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 106, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      150, 23, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ECU, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 10, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 142, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_VMS, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 10, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 192, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG_ECU, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 145, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG_VMS, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN_ECU, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 142, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      70, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN_VMS, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 192, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      70, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI_ECU, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 257, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 142, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI_VMS, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 257, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 192, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT_ECU, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 320, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 142, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT_VMS, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 320, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 192, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DES_ECU, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 418, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 130, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      300, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DES_VMS, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 419, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 179, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      300, 50, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_CurrErrEcu, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 388, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 130, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_CurrErrVms, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 388, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 179, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ofEcu, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 395, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 146, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      15, 15, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ofVms, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 395, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      15, 15, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_TotlErrEcu, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 388, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 160, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_TotlErrVms, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 388, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 209, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_STATUS, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 575, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 63, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      140, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 194, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 710, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 266, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01_Copy, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 105, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 197, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 615, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 266, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01_Copy1, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 188, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 197, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 544, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 266, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01_Copy2, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 258, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 484, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 268, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01_Copy3, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 321, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 195, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 268, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01_Copy4, ID_SCREEN_DIAGNOSTICS_2,
    { { { DISPOSE_MODE_REL_PARENT, 387, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 183, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 88, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 255, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_BK,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_BK,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                           ARG_V(191986), } },
  { ID_IMAGE_yellowup,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_yellowup,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUP_arrow_Yellow_72x90),
                                                           ARG_V(5682), } },
  { ID_IMAGE_yellowdown,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_yellowdown,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_Yellow_72x90),
                                                           ARG_V(5915), } },
  { ID_IMAGE_blueup,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_blueup,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUp_arrow_blue_72x90),
                                                           ARG_V(6980), } },
  { ID_IMAGE_bluedown,       APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_bluedown,       APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_blue_72x90),
                                                           ARG_V(7593), } },
  { ID_IMAGE_getfaults,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_getfaults,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acGet_faults_symbol),
                                                           ARG_V(8349), } },
  { ID_IMAGE_table,          APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_table,          APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDTable6),
                                                           ARG_V(1973), } },
  { ID_TEXT_title,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_title,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_title,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_title,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_title,           APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_3) } },
  { ID_TEXT_title,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_TEXT_tstatus,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_tstatus,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_tstatus,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_tstatus,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_tstatus,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_129) } },
  { ID_TEXT_tstatus,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_BOX_00,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_00,               APPW_SET_PROP_RADIUS,       { ARG_V(5) } },
  { ID_TEXT_ttsrc,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_ttsrc,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_ttsrc,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ttsrc,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_ttsrc,           APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_124) } },
  { ID_TEXT_ttsrc,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_tplug,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_tplug,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_tplug,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_tplug,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_tplug,           APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_125) } },
  { ID_TEXT_tplug,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_tspn,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_tspn,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_tspn,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_tspn,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_tspn,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_126) } },
  { ID_TEXT_tspn,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_tfmi,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_tfmi,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_tfmi,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_tfmi,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_tfmi,            APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_127) } },
  { ID_TEXT_tfmi,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_tcount,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_tcount,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_tcount,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_tcount,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_tcount,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_128) } },
  { ID_TEXT_tcount,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_tdescription,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_tdescription,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_tdescription,    APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_tdescription,    APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_tdescription,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_130) } },
  { ID_TEXT_tdescription,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_ECU,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_ECU,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_ECU,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ECU,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_ECU,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_VMS) } },
  { ID_TEXT_ECU,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_VMS,             APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_VMS,             APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_VMS,             APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_VMS,             APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_VMS,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_VMS) } },
  { ID_TEXT_VMS,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_PLUG_ECU,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG_ECU,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_PLUG_ECU,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG_ECU,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG_ECU,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DEVID1) } },
  { ID_TEXT_PLUG_ECU,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_PLUG_VMS,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG_VMS,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_PLUG_VMS,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG_VMS,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG_VMS,        APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DEVID1) } },
  { ID_TEXT_PLUG_VMS,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_SPN_ECU,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN_ECU,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_SPN_ECU,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN_ECU,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN_ECU,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_SPN_ECU,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_SPN_VMS,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN_VMS,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_SPN_VMS,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN_VMS,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN_VMS,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_SPN_VMS,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_FMI_ECU,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI_ECU,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_FMI_ECU,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI_ECU,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI_ECU,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_FMI_ECU,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_FMI_VMS,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI_VMS,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_FMI_VMS,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI_VMS,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI_VMS,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_FMI_VMS,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_COUNT_ECU,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT_ECU,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_COUNT_ECU,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT_ECU,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT_ECU,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_COUNT_ECU,       APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_COUNT_VMS,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT_VMS,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_COUNT_VMS,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT_VMS,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT_VMS,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_COUNT_VMS,       APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_DES_ECU,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DES_ECU,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_DES_ECU,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DES_ECU,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DES_ECU,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_DES_ECU,         APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_DES_VMS,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DES_VMS,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_DES_VMS,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DES_VMS,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DES_VMS,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_DES_VMS,         APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_CurrErrEcu,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_CurrErrEcu,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_CurrErrEcu,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_CurrErrEcu,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_CurrErrEcu,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_CurrErrEcu,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_CurrErrVms,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_CurrErrVms,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_CurrErrVms,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_CurrErrVms,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_CurrErrVms,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_CurrErrVms,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_ofEcu,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_ofEcu,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_ofEcu,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ofEcu,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_ofEcu,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_ofEcu,           APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_31) } },
  { ID_TEXT_ofVms,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_ofVms,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_ofVms,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ofVms,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_ofVms,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_ofVms,           APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_31) } },
  { ID_TEXT_TotlErrEcu,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_TotlErrEcu,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_TotlErrEcu,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_TotlErrEcu,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_TotlErrEcu,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_TotlErrEcu,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_TotlErrVms,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_TotlErrVms,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_TotlErrVms,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_TotlErrVms,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_TotlErrVms,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_TotlErrVms,      APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_STATUS,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_STATUS,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                           ARG_V(0),
                                                           ARG_V(0) } },
  { ID_TEXT_STATUS,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_STATUS,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_STATUS,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_BOX_01,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_01_Copy,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_01_Copy1,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_01_Copy2,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_01_Copy3,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_BOX_01_Copy4,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_DIAG_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_DIAG_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_STATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_STATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_15[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE_SEL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_17[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_20[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_21[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_22[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_23[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_24[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_25[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_26[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_27[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_28[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_29[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_30[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_31[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_32[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 27 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_33[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 28 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_34[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 29 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_35[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 30 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_36[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 31 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_37[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 32 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_38[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 33 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_39[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 34 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 35 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 36 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 37 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 38 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 39 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 40 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_40[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 41 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_41[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 42 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_42[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 43 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_43[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 44 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_44[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 45 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_45[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 46 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_46[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_47[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 47 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_48[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 48 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_49[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 49 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 50 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 51 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 52 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 53 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 54 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 55 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_50[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 56 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_51[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 57 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_52[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 58 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_53[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 59 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_54[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 60 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_55[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 61 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_56[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 62 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_57[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 63 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_00 = { "A", _aComparison_00, GUI_COUNTOF(_aComparison_00) };
static const APPW_COND _Condition_01 = { "A", _aComparison_01, GUI_COUNTOF(_aComparison_01) };
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };
static const APPW_COND _Condition_0d = { "A", _aComparison_0d, GUI_COUNTOF(_aComparison_0d) };
static const APPW_COND _Condition_0e = { "A", _aComparison_0e, GUI_COUNTOF(_aComparison_0e) };
static const APPW_COND _Condition_0f = { "A", _aComparison_0f, GUI_COUNTOF(_aComparison_0f) };
static const APPW_COND _Condition_10 = { "A", _aComparison_10, GUI_COUNTOF(_aComparison_10) };
static const APPW_COND _Condition_11 = { "A", _aComparison_11, GUI_COUNTOF(_aComparison_11) };
static const APPW_COND _Condition_12 = { "A", _aComparison_12, GUI_COUNTOF(_aComparison_12) };
static const APPW_COND _Condition_13 = { "A", _aComparison_13, GUI_COUNTOF(_aComparison_13) };
static const APPW_COND _Condition_14 = { "A", _aComparison_14, GUI_COUNTOF(_aComparison_14) };
static const APPW_COND _Condition_15 = { "A", _aComparison_15, GUI_COUNTOF(_aComparison_15) };
static const APPW_COND _Condition_16 = { "A", _aComparison_16, GUI_COUNTOF(_aComparison_16) };
static const APPW_COND _Condition_17 = { "A", _aComparison_17, GUI_COUNTOF(_aComparison_17) };
static const APPW_COND _Condition_18 = { "A", _aComparison_18, GUI_COUNTOF(_aComparison_18) };
static const APPW_COND _Condition_19 = { "A", _aComparison_19, GUI_COUNTOF(_aComparison_19) };
static const APPW_COND _Condition_1a = { "A", _aComparison_1a, GUI_COUNTOF(_aComparison_1a) };
static const APPW_COND _Condition_1b = { "A", _aComparison_1b, GUI_COUNTOF(_aComparison_1b) };
static const APPW_COND _Condition_1c = { "A", _aComparison_1c, GUI_COUNTOF(_aComparison_1c) };
static const APPW_COND _Condition_1d = { "A", _aComparison_1d, GUI_COUNTOF(_aComparison_1d) };
static const APPW_COND _Condition_1e = { "A", _aComparison_1e, GUI_COUNTOF(_aComparison_1e) };
static const APPW_COND _Condition_1f = { "A", _aComparison_1f, GUI_COUNTOF(_aComparison_1f) };
static const APPW_COND _Condition_20 = { "A", _aComparison_20, GUI_COUNTOF(_aComparison_20) };
static const APPW_COND _Condition_21 = { "A", _aComparison_21, GUI_COUNTOF(_aComparison_21) };
static const APPW_COND _Condition_22 = { "A", _aComparison_22, GUI_COUNTOF(_aComparison_22) };
static const APPW_COND _Condition_23 = { "A", _aComparison_23, GUI_COUNTOF(_aComparison_23) };
static const APPW_COND _Condition_24 = { "A", _aComparison_24, GUI_COUNTOF(_aComparison_24) };
static const APPW_COND _Condition_25 = { "A", _aComparison_25, GUI_COUNTOF(_aComparison_25) };
static const APPW_COND _Condition_26 = { "A", _aComparison_26, GUI_COUNTOF(_aComparison_26) };
static const APPW_COND _Condition_27 = { "A", _aComparison_27, GUI_COUNTOF(_aComparison_27) };
static const APPW_COND _Condition_28 = { "A", _aComparison_28, GUI_COUNTOF(_aComparison_28) };
static const APPW_COND _Condition_29 = { "A", _aComparison_29, GUI_COUNTOF(_aComparison_29) };
static const APPW_COND _Condition_2a = { "A", _aComparison_2a, GUI_COUNTOF(_aComparison_2a) };
static const APPW_COND _Condition_2b = { "A", _aComparison_2b, GUI_COUNTOF(_aComparison_2b) };
static const APPW_COND _Condition_2c = { "A", _aComparison_2c, GUI_COUNTOF(_aComparison_2c) };
static const APPW_COND _Condition_2d = { "A", _aComparison_2d, GUI_COUNTOF(_aComparison_2d) };
static const APPW_COND _Condition_2e = { "A", _aComparison_2e, GUI_COUNTOF(_aComparison_2e) };
static const APPW_COND _Condition_2f = { "A", _aComparison_2f, GUI_COUNTOF(_aComparison_2f) };
static const APPW_COND _Condition_30 = { "A", _aComparison_30, GUI_COUNTOF(_aComparison_30) };
static const APPW_COND _Condition_31 = { "A", _aComparison_31, GUI_COUNTOF(_aComparison_31) };
static const APPW_COND _Condition_32 = { "A", _aComparison_32, GUI_COUNTOF(_aComparison_32) };
static const APPW_COND _Condition_33 = { "A", _aComparison_33, GUI_COUNTOF(_aComparison_33) };
static const APPW_COND _Condition_34 = { "A", _aComparison_34, GUI_COUNTOF(_aComparison_34) };
static const APPW_COND _Condition_35 = { "A", _aComparison_35, GUI_COUNTOF(_aComparison_35) };
static const APPW_COND _Condition_36 = { "A", _aComparison_36, GUI_COUNTOF(_aComparison_36) };
static const APPW_COND _Condition_37 = { "A", _aComparison_37, GUI_COUNTOF(_aComparison_37) };
static const APPW_COND _Condition_38 = { "A", _aComparison_38, GUI_COUNTOF(_aComparison_38) };
static const APPW_COND _Condition_39 = { "A", _aComparison_39, GUI_COUNTOF(_aComparison_39) };
static const APPW_COND _Condition_3a = { "A", _aComparison_3a, GUI_COUNTOF(_aComparison_3a) };
static const APPW_COND _Condition_3b = { "A", _aComparison_3b, GUI_COUNTOF(_aComparison_3b) };
static const APPW_COND _Condition_3c = { "A", _aComparison_3c, GUI_COUNTOF(_aComparison_3c) };
static const APPW_COND _Condition_3d = { "A", _aComparison_3d, GUI_COUNTOF(_aComparison_3d) };
static const APPW_COND _Condition_3e = { "A", _aComparison_3e, GUI_COUNTOF(_aComparison_3e) };
static const APPW_COND _Condition_3f = { "A", _aComparison_3f, GUI_COUNTOF(_aComparison_3f) };
static const APPW_COND _Condition_40 = { "A", _aComparison_40, GUI_COUNTOF(_aComparison_40) };
static const APPW_COND _Condition_41 = { "A", _aComparison_41, GUI_COUNTOF(_aComparison_41) };
static const APPW_COND _Condition_42 = { "A", _aComparison_42, GUI_COUNTOF(_aComparison_42) };
static const APPW_COND _Condition_43 = { "A", _aComparison_43, GUI_COUNTOF(_aComparison_43) };
static const APPW_COND _Condition_44 = { "A", _aComparison_44, GUI_COUNTOF(_aComparison_44) };
static const APPW_COND _Condition_45 = { "A", _aComparison_45, GUI_COUNTOF(_aComparison_45) };
static const APPW_COND _Condition_46 = { "A", _aComparison_46, GUI_COUNTOF(_aComparison_46) };
static const APPW_COND _Condition_47 = { "A", _aComparison_47, GUI_COUNTOF(_aComparison_47) };
static const APPW_COND _Condition_48 = { "A", _aComparison_48, GUI_COUNTOF(_aComparison_48) };
static const APPW_COND _Condition_49 = { "A", _aComparison_49, GUI_COUNTOF(_aComparison_49) };
static const APPW_COND _Condition_4a = { "A", _aComparison_4a, GUI_COUNTOF(_aComparison_4a) };
static const APPW_COND _Condition_4b = { "A", _aComparison_4b, GUI_COUNTOF(_aComparison_4b) };
static const APPW_COND _Condition_4c = { "A", _aComparison_4c, GUI_COUNTOF(_aComparison_4c) };
static const APPW_COND _Condition_4d = { "A", _aComparison_4d, GUI_COUNTOF(_aComparison_4d) };
static const APPW_COND _Condition_4e = { "A", _aComparison_4e, GUI_COUNTOF(_aComparison_4e) };
static const APPW_COND _Condition_4f = { "A", _aComparison_4f, GUI_COUNTOF(_aComparison_4f) };
static const APPW_COND _Condition_50 = { "A", _aComparison_50, GUI_COUNTOF(_aComparison_50) };
static const APPW_COND _Condition_51 = { "A", _aComparison_51, GUI_COUNTOF(_aComparison_51) };
static const APPW_COND _Condition_52 = { "A", _aComparison_52, GUI_COUNTOF(_aComparison_52) };
static const APPW_COND _Condition_53 = { "A", _aComparison_53, GUI_COUNTOF(_aComparison_53) };
static const APPW_COND _Condition_54 = { "A", _aComparison_54, GUI_COUNTOF(_aComparison_54) };
static const APPW_COND _Condition_55 = { "A", _aComparison_55, GUI_COUNTOF(_aComparison_55) };
static const APPW_COND _Condition_56 = { "A", _aComparison_56, GUI_COUNTOF(_aComparison_56) };
static const APPW_COND _Condition_57 = { "A", _aComparison_57, GUI_COUNTOF(_aComparison_57) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,       WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_SWAPSCREEN,     ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAINMENU),
    }, 0, &_Condition_00
  },
  { ID_VAR_DIAG_POPUP,       WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_MODALMESSAGE,   ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DIAGNOSTIC_POPUP),
    }, 0, &_Condition_01
  },
  { ID_VAR_DIAG_POPUP,       WM_NOTIFICATION_VALUE_CHANGED,    0,                       APPW_JOB_CLOSESCREEN,    ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DIAGNOSTIC_POPUP),
    }, 0, &_Condition_02
  },
  { ID_VAR_SPN1,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN_ECU,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN_ECU__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN2,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN_VMS,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN_VMS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI1,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI_ECU,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI_ECU__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI2,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI_VMS,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI_VMS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT1,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT_ECU,       APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT_ECU__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT2,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT_VMS,       APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT_VMS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CURNT_ERR_NO_1,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_CurrErrEcu,      APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_CurrErrEcu__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_CURNT_ERR_NO_2,   WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_CurrErrVms,      APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_CurrErrVms__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TOTAL_ERRS_NO_1,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_TotlErrEcu,      APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TotlErrEcu__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_TOTAL_ERRS_NO_2,  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_TotlErrVms,      APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_TotlErrVms__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_STATUS,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_STATUS,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_STATUS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_163),
    }, 65536, &_Condition_0d
  },
  { ID_VAR_STATUS,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_STATUS,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_STATUS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_164),
    }, 65536, &_Condition_0e
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ECU,             APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ECU__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_YELLOW),
    }, 65536, &_Condition_0f
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ECU,             APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ECU__APPW_JOB_SETCOLOR,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_10
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VMS,             APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VMS__APPW_JOB_SETCOLOR,
    { ARG_V(GUI_YELLOW),
    }, 65536, &_Condition_11
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_VMS,             APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_VMS__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_12
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETCOLOR,
    { ARG_V(GUI_BLUE),
    }, 65536, &_Condition_13
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_14
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETCOLOR,
    { ARG_V(GUI_BLUE),
    }, 65536, &_Condition_15
  },
  { ID_VAR_SOURCE_SEL,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_16
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_45,
    { ARG_V(ID_RTEXT_SPACE),
    }, 65536, &_Condition_17
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG_P_1),
    }, 65536, &_Condition_18
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG_P_2),
    }, 65536, &_Condition_19
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG_P_3),
    }, 65536, &_Condition_1a
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG_P_4),
    }, 65536, &_Condition_1b
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG_P_5),
    }, 65536, &_Condition_1c
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG_P_6),
    }, 65536, &_Condition_1d
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG_P_7),
    }, 65536, &_Condition_1e
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG_P_8),
    }, 65536, &_Condition_1f
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG_P_9),
    }, 65536, &_Condition_20
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG_P_10),
    }, 65536, &_Condition_21
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG_P_11),
    }, 65536, &_Condition_22
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG_P_12),
    }, 65536, &_Condition_23
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG_P_13),
    }, 65536, &_Condition_24
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG_P_14),
    }, 65536, &_Condition_25
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG_P_15),
    }, 65536, &_Condition_26
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG_P_16),
    }, 65536, &_Condition_27
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG_P_17),
    }, 65536, &_Condition_28
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG_P_18),
    }, 65536, &_Condition_29
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG_P_19),
    }, 65536, &_Condition_2a
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG_P_20),
    }, 65536, &_Condition_2b
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG_P_21),
    }, 65536, &_Condition_2c
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG_P_22),
    }, 65536, &_Condition_2d
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG_P_23),
    }, 65536, &_Condition_2e
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG_P_24),
    }, 65536, &_Condition_2f
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG_P_25),
    }, 65536, &_Condition_30
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG_P_26),
    }, 65536, &_Condition_31
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_25,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_32
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_26,
    { ARG_V(ID_DMMESG28),
    }, 65536, &_Condition_33
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_27,
    { ARG_V(ID_DMMESG29),
    }, 65536, &_Condition_34
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_28,
    { ARG_V(ID_DMMESG30),
    }, 65536, &_Condition_35
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_29,
    { ARG_V(ID_DMMESG31),
    }, 65536, &_Condition_36
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_30,
    { ARG_V(ID_DMMESG32),
    }, 65536, &_Condition_37
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_31,
    { ARG_V(ID_DMMESG33),
    }, 65536, &_Condition_38
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_32,
    { ARG_V(ID_DMMESG34),
    }, 65536, &_Condition_39
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_33,
    { ARG_V(ID_DMMESG35),
    }, 65536, &_Condition_3a
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_34,
    { ARG_V(ID_DMMESG36),
    }, 65536, &_Condition_3b
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_35,
    { ARG_V(ID_DMMESG37),
    }, 65536, &_Condition_3c
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_36,
    { ARG_V(ID_DMMESG38),
    }, 65536, &_Condition_3d
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_37,
    { ARG_V(ID_DMMESG39),
    }, 65536, &_Condition_3e
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_38,
    { ARG_V(ID_DMMESG40),
    }, 65536, &_Condition_3f
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_39,
    { ARG_V(ID_DMMESG41),
    }, 65536, &_Condition_40
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_40,
    { ARG_V(ID_DMMESG42),
    }, 65536, &_Condition_41
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_41,
    { ARG_V(ID_DMMESG43),
    }, 65536, &_Condition_42
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_42,
    { ARG_V(ID_DMMESG44),
    }, 65536, &_Condition_43
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_43,
    { ARG_V(ID_DMMESG45),
    }, 65536, &_Condition_44
  },
  { ID_VAR_DESCRIPT1,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_ECU,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_ECU__APPW_JOB_SETTEXT_44,
    { ARG_V(ID_DMMESG46),
    }, 65536, &_Condition_45
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_SPACE),
    }, 65536, &_Condition_46
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG47),
    }, 65536, &_Condition_47
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG48),
    }, 65536, &_Condition_48
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG49),
    }, 65536, &_Condition_49
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG50),
    }, 65536, &_Condition_4a
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG51),
    }, 65536, &_Condition_4b
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG52),
    }, 65536, &_Condition_4c
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG53),
    }, 65536, &_Condition_4d
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG54),
    }, 65536, &_Condition_4e
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG55),
    }, 65536, &_Condition_4f
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG56),
    }, 65536, &_Condition_50
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG57),
    }, 65536, &_Condition_51
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG58),
    }, 65536, &_Condition_52
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG59),
    }, 65536, &_Condition_53
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG60),
    }, 65536, &_Condition_54
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG61),
    }, 65536, &_Condition_55
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG62),
    }, 65536, &_Condition_56
  },
  { ID_VAR_DESCRIPT2,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DES_VMS,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTICS_2__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DES_VMS__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG63),
    }, 65536, &_Condition_57
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
*       ID_SCREEN_DIAGNOSTICS_2_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_DIAGNOSTICS_2_RootInfo = {
  ID_SCREEN_DIAGNOSTICS_2,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_DIAGNOSTICS_2,
  0
};

/*************************** End of file ****************************/
