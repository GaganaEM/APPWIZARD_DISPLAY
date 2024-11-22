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
File        : ID_SCREEN_DIAGNOSTIC.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_DIAGNOSTIC.h"

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
    ID_SCREEN_DIAGNOSTIC, 0,
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
    ID_IMAGE_00, ID_SCREEN_DIAGNOSTIC,
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
    ID_EDIT_00, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      203, 38, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_08, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 10, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 42, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      70, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_01, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 81, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 603, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_09, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 205, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 42, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_04, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 255, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 429, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_10, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 378, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 42, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      39, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_05, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 420, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 264, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_11, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 550, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 42, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      39, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_06, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 597, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 139, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_12, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 665, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 42, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_07, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 729, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 7, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 410, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_13, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 597, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 4, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_08, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 665, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 7, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 448, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_05, ID_SCREEN_DIAGNOSTIC,
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
    ID_IMAGE_02, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_14, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 10, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      110, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_02, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 128, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 444, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 294, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_15, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 378, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      110, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_BOX_Create,
    ID_BOX_09, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 488, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 84, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 294, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      694, 262, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_01, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_02, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_04, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_05, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_06, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_07, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 207, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCEGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 81, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      116, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_03, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUGGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 255, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      116, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPNGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 420, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      116, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMIGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 595, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      64, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNTGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 729, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 38, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      64, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTIONGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 128, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      228, 97, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_CORRECTIONGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 488, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 87, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      228, 97, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE1, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 231, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG1, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 231, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN1, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 231, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI1, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 231, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT1, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 231, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION1, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 231, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE2, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 253, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE3, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE4, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 301, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE5, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 325, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE6, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 347, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE7, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 373, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE8, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 398, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE9, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SOURCE10, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 19, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 445, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      80, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG2, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 253, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG3, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG4, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 301, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG5, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 325, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG6, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 347, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG7, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 373, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG8, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 398, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG9, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_PLUG10, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 99, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 445, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      88, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN2, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 253, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN3, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN4, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 301, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN5, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 325, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      74, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN6, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 347, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      74, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN7, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 373, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN8, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 398, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN9, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN10, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 186, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 445, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      76, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI2, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 253, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI3, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI4, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 301, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI5, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 325, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI6, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 347, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI7, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 373, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI8, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 398, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI9, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI10, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 262, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 445, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      63, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT2, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 253, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT3, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT4, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 301, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT5, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT6, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 347, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT7, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 373, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT8, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 398, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT9, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_COUNT10, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 445, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      68, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION2, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 253, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION3, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 279, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION4, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 301, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION5, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 324, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION7, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 373, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION6, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 347, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION8, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 398, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION9, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 421, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DESCRIPTION10, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 445, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      321, 24, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_STATUSGEN, ID_SCREEN_DIAGNOSTIC,
    { { { DISPOSE_MODE_REL_PARENT, 665, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      128, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                          ARG_V(191986), } },
  { ID_EDIT_00,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_00,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_00,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_00,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_00,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_00,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_3) } },
  { ID_EDIT_00,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_00,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_EDIT_00,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_EDIT_08,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_08,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_08,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_08,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_08,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_08,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_124) } },
  { ID_EDIT_08,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_08,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_08,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_01,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_09,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_09,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_09,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_09,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_09,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_09,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_125) } },
  { ID_EDIT_09,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_09,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_09,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_04,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_10,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_10,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_10,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_10,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_10,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_10,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_126) } },
  { ID_EDIT_10,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_10,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_10,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_05,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_11,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_11,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_11,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_11,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_11,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_11,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_127) } },
  { ID_EDIT_11,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_11,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_11,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_06,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_12,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_12,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_12,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_12,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_12,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_12,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_128) } },
  { ID_EDIT_12,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_12,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_12,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_07,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_13,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_13,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_13,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_13,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_13,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_13,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_129) } },
  { ID_EDIT_13,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_13,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_13,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_08,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_IMAGE_05,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_05,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUP_arrow_Yellow_72x90),
                                                          ARG_V(5682), } },
  { ID_IMAGE_02,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_Yellow_72x90),
                                                          ARG_V(5915), } },
  { ID_EDIT_14,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_14,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_14,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_14,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_14,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_14,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_130) } },
  { ID_EDIT_14,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_14,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_14,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_02,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_EDIT_15,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_15,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_15,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_15,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_15,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_15,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_131) } },
  { ID_EDIT_15,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_15,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_15,             APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_BOX_09,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_IMAGE_01,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acRows_and_Columns_image),
                                                          ARG_V(6365), } },
  { ID_EDIT_01,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_01,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_01,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_01,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_01,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_01,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_124) } },
  { ID_EDIT_01,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_01,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_02,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_02,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_02,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_02,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_02,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_02,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_125) } },
  { ID_EDIT_02,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_02,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_04,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_04,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_04,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_04,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_04,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_04,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_126) } },
  { ID_EDIT_04,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_04,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_05,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_05,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_05,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_05,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_05,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_05,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_127) } },
  { ID_EDIT_05,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_05,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_06,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_06,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_06,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_06,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_06,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_06,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_128) } },
  { ID_EDIT_06,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_06,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_07,             APPW_SET_PROP_COLORS,       { ARG_V(GUI_BLACK),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_WHITE) } },
  { ID_EDIT_07,             APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_07,             APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                          ARG_V(GUI_INVALID_COLOR),
                                                          ARG_V(GUI_BLACK) } },
  { ID_EDIT_07,             APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_07,             APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_07,             APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_130) } },
  { ID_EDIT_07,             APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_07,             APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_EDIT_07,             APPW_SET_PROP_LENGTH,       { ARG_V(12) } },
  { ID_TEXT_SOURCEGEN,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_SOURCEGEN,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCEGEN,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCEGEN,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCEGEN,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_IMAGE_03,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_03,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acGet_faults_symbol),
                                                          ARG_V(8349), } },
  { ID_TEXT_PLUGGEN,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_PLUGGEN,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUGGEN,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUGGEN,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUGGEN,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_SPNGEN,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_SPNGEN,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPNGEN,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPNGEN,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPNGEN,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPNGEN,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_FMIGEN,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_FMIGEN,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMIGEN,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMIGEN,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMIGEN,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMIGEN,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_COUNTGEN,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_COUNTGEN,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNTGEN,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNTGEN,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNTGEN,       APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNTGEN,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_DESCRIPTIONGEN, APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_DESCRIPTIONGEN, APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTIONGEN, APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTIONGEN, APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTIONGEN, APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_DESCRIPTIONGEN, APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_CORRECTIONGEN,  APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_CORRECTIONGEN,  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_CORRECTIONGEN,  APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_TEXT_CORRECTIONGEN,  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_CORRECTIONGEN,  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_CORRECTIONGEN,  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_SOURCE1,        APPW_SET_PROP_COLOR,        { ARG_V(0xffbebe00) } },
  { ID_TEXT_SOURCE1,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE1,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE1,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE1,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG1,          APPW_SET_PROP_COLOR,        { ARG_V(0xffbebe00) } },
  { ID_TEXT_PLUG1,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG1,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG1,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG1,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
  { ID_TEXT_SPN1,           APPW_SET_PROP_COLOR,        { ARG_V(0xffbebe00) } },
  { ID_TEXT_SPN1,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN1,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN1,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN1,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN1,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI1,           APPW_SET_PROP_COLOR,        { ARG_V(0xffbebe00) } },
  { ID_TEXT_FMI1,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI1,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI1,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI1,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI1,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT1,         APPW_SET_PROP_COLOR,        { ARG_V(0xffbebe00) } },
  { ID_TEXT_COUNT1,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT1,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT1,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT1,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT1,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION1,   APPW_SET_PROP_COLOR,        { ARG_V(0xffbebe00) } },
  { ID_TEXT_DESCRIPTION1,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION1,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION1,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION1,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE2,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE2,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE2,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE2,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE2,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE3,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE3,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE3,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE3,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE3,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE4,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE4,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE4,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE4,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE4,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE5,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE5,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE5,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE5,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE5,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE6,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE6,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE6,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE6,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE6,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE7,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE7,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE7,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE7,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE7,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE8,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE8,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE8,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE8,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE8,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE9,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE9,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE9,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE9,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE9,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SOURCE10,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SOURCE10,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SOURCE10,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE10,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SOURCE10,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG2,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG2,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG2,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG2,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG2,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG3,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG3,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG3,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG3,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG3,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG4,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG4,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG4,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG4,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG4,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG5,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG5,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG5,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG5,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG5,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG6,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG6,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG6,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG6,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG6,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG7,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG7,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG7,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG7,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG7,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG8,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG8,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG8,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG8,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG8,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG9,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG9,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG9,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG9,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG9,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_PLUG10,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_PLUG10,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_PLUG10,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG10,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_PLUG10,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN2,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN2,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN2,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN2,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN2,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN2,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN3,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN3,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN3,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN3,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN3,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN3,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN4,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN4,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN4,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN4,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN4,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN4,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN5,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN5,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN5,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN5,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN5,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN5,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN6,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN6,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN6,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN6,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN6,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN6,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN7,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN7,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN7,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN7,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN7,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN7,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN8,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN8,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN8,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN8,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN8,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN8,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN9,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN9,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN9,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN9,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN9,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN9,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_SPN10,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SPN10,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN10,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN10,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SPN10,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_SPN10,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI2,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI2,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI2,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI2,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI2,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI2,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI3,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI3,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI3,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI3,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI3,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI3,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI4,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI4,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI4,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI4,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI4,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI4,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI5,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI5,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI5,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI5,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI5,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI5,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI6,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI6,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI6,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI6,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI6,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI6,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI7,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI7,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI7,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI7,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI7,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI7,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI8,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI8,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI8,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI8,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI8,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI8,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI9,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI9,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI9,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI9,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI9,           APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI9,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_FMI10,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_FMI10,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI10,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI10,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI10,          APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_FMI10,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT2,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT2,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT2,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT2,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT2,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT2,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT3,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT3,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT3,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT3,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT3,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT3,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT4,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT4,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT4,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT4,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT4,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT4,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT5,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT5,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT5,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT5,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT5,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT5,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT6,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT6,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT6,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT6,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT6,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT6,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT7,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT7,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT7,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT7,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT7,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT7,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT8,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT8,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT8,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT8,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT8,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT8,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT9,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT9,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT9,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT9,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT9,         APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT9,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_COUNT10,        APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_COUNT10,        APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT10,        APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT10,        APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_COUNT10,        APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_COUNT10,        APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION2,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION2,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION2,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION2,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION2,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION3,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION3,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION3,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION3,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION3,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION4,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION4,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION4,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION4,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION4,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION5,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION5,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION5,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION5,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION5,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION7,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION7,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION7,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION7,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION7,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION6,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION6,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION6,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION6,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION6,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION8,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION8,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION8,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION8,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION8,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION9,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION9,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION9,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION9,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION9,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_DESCRIPTION10,  APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DESCRIPTION10,  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_DESCRIPTION10,  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION10,  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DESCRIPTION10,  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Normal_EXT_AA4) } },
  { ID_TEXT_STATUSGEN,      APPW_SET_PROP_COLOR,        { ARG_V(GUI_WHITE) } },
  { ID_TEXT_STATUSGEN,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                          ARG_V(0),
                                                          ARG_V(0) } },
  { ID_TEXT_STATUSGEN,      APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_STATUSGEN,      APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_STATUSGEN,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_20_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_00[] = {
  { { { APPW_IS_VAR, ID_VAR_DISPSCREEN }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_01[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE1 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE1 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE1 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE2 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE2 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE2 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE3 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE3 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE3 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE4 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE4 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE4 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE5 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE5 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE5 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE6 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE6 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE6 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE7 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE7 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE7 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE8 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE8 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE8 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE9 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE9 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE9 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE10 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE10 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_20[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE10 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_21[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE11 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_22[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE11 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_23[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE11 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_45[] = {
  { { { APPW_IS_VAR, ID_VAR_STATUS }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_46[] = {
  { { { APPW_IS_VAR, ID_VAR_STATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_47[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG1 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_48[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG1 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_49[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG1 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4a[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG2 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4b[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG2 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4c[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG2 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4d[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG3 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4e[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG3 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_4f[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG3 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_50[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG4 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_51[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG4 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_52[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG4 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_53[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG5 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_54[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG5 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_55[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG5 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_56[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG6 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_57[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG6 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_58[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG6 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_59[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG7 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_5a[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG7 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_5b[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG7 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_5c[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG8 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_5d[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG8 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_5e[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG8 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_5f[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG9 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_60[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG9 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_61[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG9 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_62[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG10 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_63[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG10 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_64[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG10 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_65[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG11 }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_66[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG11 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_67[] = {
  { { { APPW_IS_VAR, ID_VAR_PLUG11 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_68[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_69[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_6a[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_6b[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_6c[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_6d[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_6e[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_6f[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_70[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_71[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_72[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_73[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_74[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_75[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_76[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_77[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_78[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_79[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_7a[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_7b[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_7c[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_7d[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_7e[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_7f[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_80[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_81[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_82[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_83[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_84[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_85[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_86[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_87[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_88[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_89[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_8a[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_8b[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_8c[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_8d[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_8e[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_8f[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_90[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_91[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_92[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_93[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_94[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_95[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_96[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_97[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_98[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_99[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_9a[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_9b[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_9c[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_9d[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_9e[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_9f[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_a0[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_a1[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_a2[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_a3[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_a4[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_a5[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_a6[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_a7[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_a8[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_a9[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_aa[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_ab[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_ac[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_ad[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_ae[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_af[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_b0[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_b1[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_b2[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_b3[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_b4[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_b5[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_b6[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_b7[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_b8[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_b9[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_ba[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_bb[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_bc[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_bd[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_be[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_bf[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_c0[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_c1[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_c2[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_c3[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_c4[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_c5[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_c6[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_c7[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_c8[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_c9[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_ca[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_cb[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_cc[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_cd[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_ce[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_cf[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_d0[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_d1[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_d2[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_d3[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_d4[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_d5[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_d6[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_d7[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_d8[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_d9[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_da[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_db[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_dc[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_dd[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_de[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_df[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_e9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_ea[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_eb[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_ec[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_ed[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_ee[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_ef[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT1 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_f9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_fa[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_fb[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_fc[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_fd[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_fe[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_ff[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_100[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_101[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_102[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_103[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_104[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_105[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_106[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_107[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_108[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_109[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_110[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_111[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT2 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_112[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_113[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_114[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_115[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_116[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_117[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_118[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_119[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_120[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_121[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_122[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_123[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_124[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_125[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_126[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_127[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_128[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_129[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT3 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_130[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_131[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_132[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_133[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_134[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_135[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_136[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_137[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_138[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_139[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_140[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_141[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_142[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_143[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_144[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_145[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_146[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_147[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_148[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_149[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_150[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_151[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_152[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_153[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_154[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_155[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_156[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_157[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_158[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_159[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT5 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_160[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_161[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_162[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_163[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_164[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_165[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_166[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_167[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_168[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_169[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_170[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_171[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_172[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_173[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_174[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_175[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_176[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_177[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_178[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_179[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT6 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_180[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_181[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_182[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_183[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_184[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_185[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_186[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_187[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_188[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_189[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_190[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_191[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_192[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT4 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_193[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT7 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_194[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_195[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_196[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_197[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_198[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_199[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19a[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19b[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19c[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19d[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19e[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19f[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1aa[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ab[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ac[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ad[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT8 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ae[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1af[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ba[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1bb[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1bc[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1bd[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1be[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1bf[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT9 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ca[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1cb[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1cc[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1cd[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ce[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1cf[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1da[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1db[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1dc[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1dd[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1de[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1df[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT10 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ea[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1eb[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ec[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ed[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ee[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ef[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f0[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f1[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f2[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f3[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f4[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f5[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f6[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f7[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f8[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f9[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1fa[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1fb[] = {
  { { { APPW_IS_VAR, ID_VAR_DESCRIPT11 }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1fc[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1fd[] = {
  { { { APPW_IS_VAR, ID_VAR_ROW_COLOUR }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_1fe[] = {
  { { { APPW_IS_VAR, ID_VAR_DIAG_POPUP }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1ff[] = {
  { { { APPW_IS_VAR, ID_VAR_DIAG_POPUP }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_200[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE1 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_201[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE2 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_202[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE3 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_203[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE4 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_204[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE5 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_205[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE6 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_206[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE7 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_207[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE8 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_208[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE9 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_209[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE10 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_20a[] = {
  { { { APPW_IS_VAR, ID_VAR_SOURCE11 }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
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
static const APPW_COND _Condition_58 = { "A", _aComparison_58, GUI_COUNTOF(_aComparison_58) };
static const APPW_COND _Condition_59 = { "A", _aComparison_59, GUI_COUNTOF(_aComparison_59) };
static const APPW_COND _Condition_5a = { "A", _aComparison_5a, GUI_COUNTOF(_aComparison_5a) };
static const APPW_COND _Condition_5b = { "A", _aComparison_5b, GUI_COUNTOF(_aComparison_5b) };
static const APPW_COND _Condition_5c = { "A", _aComparison_5c, GUI_COUNTOF(_aComparison_5c) };
static const APPW_COND _Condition_5d = { "A", _aComparison_5d, GUI_COUNTOF(_aComparison_5d) };
static const APPW_COND _Condition_5e = { "A", _aComparison_5e, GUI_COUNTOF(_aComparison_5e) };
static const APPW_COND _Condition_5f = { "A", _aComparison_5f, GUI_COUNTOF(_aComparison_5f) };
static const APPW_COND _Condition_60 = { "A", _aComparison_60, GUI_COUNTOF(_aComparison_60) };
static const APPW_COND _Condition_61 = { "A", _aComparison_61, GUI_COUNTOF(_aComparison_61) };
static const APPW_COND _Condition_62 = { "A", _aComparison_62, GUI_COUNTOF(_aComparison_62) };
static const APPW_COND _Condition_63 = { "A", _aComparison_63, GUI_COUNTOF(_aComparison_63) };
static const APPW_COND _Condition_64 = { "A", _aComparison_64, GUI_COUNTOF(_aComparison_64) };
static const APPW_COND _Condition_65 = { "A", _aComparison_65, GUI_COUNTOF(_aComparison_65) };
static const APPW_COND _Condition_66 = { "A", _aComparison_66, GUI_COUNTOF(_aComparison_66) };
static const APPW_COND _Condition_67 = { "A", _aComparison_67, GUI_COUNTOF(_aComparison_67) };
static const APPW_COND _Condition_68 = { "A", _aComparison_68, GUI_COUNTOF(_aComparison_68) };
static const APPW_COND _Condition_69 = { "A", _aComparison_69, GUI_COUNTOF(_aComparison_69) };
static const APPW_COND _Condition_6a = { "A", _aComparison_6a, GUI_COUNTOF(_aComparison_6a) };
static const APPW_COND _Condition_6b = { "A", _aComparison_6b, GUI_COUNTOF(_aComparison_6b) };
static const APPW_COND _Condition_6c = { "A", _aComparison_6c, GUI_COUNTOF(_aComparison_6c) };
static const APPW_COND _Condition_6d = { "A", _aComparison_6d, GUI_COUNTOF(_aComparison_6d) };
static const APPW_COND _Condition_6e = { "A", _aComparison_6e, GUI_COUNTOF(_aComparison_6e) };
static const APPW_COND _Condition_6f = { "A", _aComparison_6f, GUI_COUNTOF(_aComparison_6f) };
static const APPW_COND _Condition_70 = { "A", _aComparison_70, GUI_COUNTOF(_aComparison_70) };
static const APPW_COND _Condition_71 = { "A", _aComparison_71, GUI_COUNTOF(_aComparison_71) };
static const APPW_COND _Condition_72 = { "A", _aComparison_72, GUI_COUNTOF(_aComparison_72) };
static const APPW_COND _Condition_73 = { "A", _aComparison_73, GUI_COUNTOF(_aComparison_73) };
static const APPW_COND _Condition_74 = { "A", _aComparison_74, GUI_COUNTOF(_aComparison_74) };
static const APPW_COND _Condition_75 = { "A", _aComparison_75, GUI_COUNTOF(_aComparison_75) };
static const APPW_COND _Condition_76 = { "A", _aComparison_76, GUI_COUNTOF(_aComparison_76) };
static const APPW_COND _Condition_77 = { "A", _aComparison_77, GUI_COUNTOF(_aComparison_77) };
static const APPW_COND _Condition_78 = { "A", _aComparison_78, GUI_COUNTOF(_aComparison_78) };
static const APPW_COND _Condition_79 = { "A", _aComparison_79, GUI_COUNTOF(_aComparison_79) };
static const APPW_COND _Condition_7a = { "A", _aComparison_7a, GUI_COUNTOF(_aComparison_7a) };
static const APPW_COND _Condition_7b = { "A", _aComparison_7b, GUI_COUNTOF(_aComparison_7b) };
static const APPW_COND _Condition_7c = { "A", _aComparison_7c, GUI_COUNTOF(_aComparison_7c) };
static const APPW_COND _Condition_7d = { "A", _aComparison_7d, GUI_COUNTOF(_aComparison_7d) };
static const APPW_COND _Condition_7e = { "A", _aComparison_7e, GUI_COUNTOF(_aComparison_7e) };
static const APPW_COND _Condition_7f = { "A", _aComparison_7f, GUI_COUNTOF(_aComparison_7f) };
static const APPW_COND _Condition_80 = { "A", _aComparison_80, GUI_COUNTOF(_aComparison_80) };
static const APPW_COND _Condition_81 = { "A", _aComparison_81, GUI_COUNTOF(_aComparison_81) };
static const APPW_COND _Condition_82 = { "A", _aComparison_82, GUI_COUNTOF(_aComparison_82) };
static const APPW_COND _Condition_83 = { "A", _aComparison_83, GUI_COUNTOF(_aComparison_83) };
static const APPW_COND _Condition_84 = { "A", _aComparison_84, GUI_COUNTOF(_aComparison_84) };
static const APPW_COND _Condition_85 = { "A", _aComparison_85, GUI_COUNTOF(_aComparison_85) };
static const APPW_COND _Condition_86 = { "A", _aComparison_86, GUI_COUNTOF(_aComparison_86) };
static const APPW_COND _Condition_87 = { "A", _aComparison_87, GUI_COUNTOF(_aComparison_87) };
static const APPW_COND _Condition_88 = { "A", _aComparison_88, GUI_COUNTOF(_aComparison_88) };
static const APPW_COND _Condition_89 = { "A", _aComparison_89, GUI_COUNTOF(_aComparison_89) };
static const APPW_COND _Condition_8a = { "A", _aComparison_8a, GUI_COUNTOF(_aComparison_8a) };
static const APPW_COND _Condition_8b = { "A", _aComparison_8b, GUI_COUNTOF(_aComparison_8b) };
static const APPW_COND _Condition_8c = { "A", _aComparison_8c, GUI_COUNTOF(_aComparison_8c) };
static const APPW_COND _Condition_8d = { "A", _aComparison_8d, GUI_COUNTOF(_aComparison_8d) };
static const APPW_COND _Condition_8e = { "A", _aComparison_8e, GUI_COUNTOF(_aComparison_8e) };
static const APPW_COND _Condition_8f = { "A", _aComparison_8f, GUI_COUNTOF(_aComparison_8f) };
static const APPW_COND _Condition_90 = { "A", _aComparison_90, GUI_COUNTOF(_aComparison_90) };
static const APPW_COND _Condition_91 = { "A", _aComparison_91, GUI_COUNTOF(_aComparison_91) };
static const APPW_COND _Condition_92 = { "A", _aComparison_92, GUI_COUNTOF(_aComparison_92) };
static const APPW_COND _Condition_93 = { "A", _aComparison_93, GUI_COUNTOF(_aComparison_93) };
static const APPW_COND _Condition_94 = { "A", _aComparison_94, GUI_COUNTOF(_aComparison_94) };
static const APPW_COND _Condition_95 = { "A", _aComparison_95, GUI_COUNTOF(_aComparison_95) };
static const APPW_COND _Condition_96 = { "A", _aComparison_96, GUI_COUNTOF(_aComparison_96) };
static const APPW_COND _Condition_97 = { "A", _aComparison_97, GUI_COUNTOF(_aComparison_97) };
static const APPW_COND _Condition_98 = { "A", _aComparison_98, GUI_COUNTOF(_aComparison_98) };
static const APPW_COND _Condition_99 = { "A", _aComparison_99, GUI_COUNTOF(_aComparison_99) };
static const APPW_COND _Condition_9a = { "A", _aComparison_9a, GUI_COUNTOF(_aComparison_9a) };
static const APPW_COND _Condition_9b = { "A", _aComparison_9b, GUI_COUNTOF(_aComparison_9b) };
static const APPW_COND _Condition_9c = { "A", _aComparison_9c, GUI_COUNTOF(_aComparison_9c) };
static const APPW_COND _Condition_9d = { "A", _aComparison_9d, GUI_COUNTOF(_aComparison_9d) };
static const APPW_COND _Condition_9e = { "A", _aComparison_9e, GUI_COUNTOF(_aComparison_9e) };
static const APPW_COND _Condition_9f = { "A", _aComparison_9f, GUI_COUNTOF(_aComparison_9f) };
static const APPW_COND _Condition_a0 = { "A", _aComparison_a0, GUI_COUNTOF(_aComparison_a0) };
static const APPW_COND _Condition_a1 = { "A", _aComparison_a1, GUI_COUNTOF(_aComparison_a1) };
static const APPW_COND _Condition_a2 = { "A", _aComparison_a2, GUI_COUNTOF(_aComparison_a2) };
static const APPW_COND _Condition_a3 = { "A", _aComparison_a3, GUI_COUNTOF(_aComparison_a3) };
static const APPW_COND _Condition_a4 = { "A", _aComparison_a4, GUI_COUNTOF(_aComparison_a4) };
static const APPW_COND _Condition_a5 = { "A", _aComparison_a5, GUI_COUNTOF(_aComparison_a5) };
static const APPW_COND _Condition_a6 = { "A", _aComparison_a6, GUI_COUNTOF(_aComparison_a6) };
static const APPW_COND _Condition_a7 = { "A", _aComparison_a7, GUI_COUNTOF(_aComparison_a7) };
static const APPW_COND _Condition_a8 = { "A", _aComparison_a8, GUI_COUNTOF(_aComparison_a8) };
static const APPW_COND _Condition_a9 = { "A", _aComparison_a9, GUI_COUNTOF(_aComparison_a9) };
static const APPW_COND _Condition_aa = { "A", _aComparison_aa, GUI_COUNTOF(_aComparison_aa) };
static const APPW_COND _Condition_ab = { "A", _aComparison_ab, GUI_COUNTOF(_aComparison_ab) };
static const APPW_COND _Condition_ac = { "A", _aComparison_ac, GUI_COUNTOF(_aComparison_ac) };
static const APPW_COND _Condition_ad = { "A", _aComparison_ad, GUI_COUNTOF(_aComparison_ad) };
static const APPW_COND _Condition_ae = { "A", _aComparison_ae, GUI_COUNTOF(_aComparison_ae) };
static const APPW_COND _Condition_af = { "A", _aComparison_af, GUI_COUNTOF(_aComparison_af) };
static const APPW_COND _Condition_b0 = { "A", _aComparison_b0, GUI_COUNTOF(_aComparison_b0) };
static const APPW_COND _Condition_b1 = { "A", _aComparison_b1, GUI_COUNTOF(_aComparison_b1) };
static const APPW_COND _Condition_b2 = { "A", _aComparison_b2, GUI_COUNTOF(_aComparison_b2) };
static const APPW_COND _Condition_b3 = { "A", _aComparison_b3, GUI_COUNTOF(_aComparison_b3) };
static const APPW_COND _Condition_b4 = { "A", _aComparison_b4, GUI_COUNTOF(_aComparison_b4) };
static const APPW_COND _Condition_b5 = { "A", _aComparison_b5, GUI_COUNTOF(_aComparison_b5) };
static const APPW_COND _Condition_b6 = { "A", _aComparison_b6, GUI_COUNTOF(_aComparison_b6) };
static const APPW_COND _Condition_b7 = { "A", _aComparison_b7, GUI_COUNTOF(_aComparison_b7) };
static const APPW_COND _Condition_b8 = { "A", _aComparison_b8, GUI_COUNTOF(_aComparison_b8) };
static const APPW_COND _Condition_b9 = { "A", _aComparison_b9, GUI_COUNTOF(_aComparison_b9) };
static const APPW_COND _Condition_ba = { "A", _aComparison_ba, GUI_COUNTOF(_aComparison_ba) };
static const APPW_COND _Condition_bb = { "A", _aComparison_bb, GUI_COUNTOF(_aComparison_bb) };
static const APPW_COND _Condition_bc = { "A", _aComparison_bc, GUI_COUNTOF(_aComparison_bc) };
static const APPW_COND _Condition_bd = { "A", _aComparison_bd, GUI_COUNTOF(_aComparison_bd) };
static const APPW_COND _Condition_be = { "A", _aComparison_be, GUI_COUNTOF(_aComparison_be) };
static const APPW_COND _Condition_bf = { "A", _aComparison_bf, GUI_COUNTOF(_aComparison_bf) };
static const APPW_COND _Condition_c0 = { "A", _aComparison_c0, GUI_COUNTOF(_aComparison_c0) };
static const APPW_COND _Condition_c1 = { "A", _aComparison_c1, GUI_COUNTOF(_aComparison_c1) };
static const APPW_COND _Condition_c2 = { "A", _aComparison_c2, GUI_COUNTOF(_aComparison_c2) };
static const APPW_COND _Condition_c3 = { "A", _aComparison_c3, GUI_COUNTOF(_aComparison_c3) };
static const APPW_COND _Condition_c4 = { "A", _aComparison_c4, GUI_COUNTOF(_aComparison_c4) };
static const APPW_COND _Condition_c5 = { "A", _aComparison_c5, GUI_COUNTOF(_aComparison_c5) };
static const APPW_COND _Condition_c6 = { "A", _aComparison_c6, GUI_COUNTOF(_aComparison_c6) };
static const APPW_COND _Condition_c7 = { "A", _aComparison_c7, GUI_COUNTOF(_aComparison_c7) };
static const APPW_COND _Condition_c8 = { "A", _aComparison_c8, GUI_COUNTOF(_aComparison_c8) };
static const APPW_COND _Condition_c9 = { "A", _aComparison_c9, GUI_COUNTOF(_aComparison_c9) };
static const APPW_COND _Condition_ca = { "A", _aComparison_ca, GUI_COUNTOF(_aComparison_ca) };
static const APPW_COND _Condition_cb = { "A", _aComparison_cb, GUI_COUNTOF(_aComparison_cb) };
static const APPW_COND _Condition_cc = { "A", _aComparison_cc, GUI_COUNTOF(_aComparison_cc) };
static const APPW_COND _Condition_cd = { "A", _aComparison_cd, GUI_COUNTOF(_aComparison_cd) };
static const APPW_COND _Condition_ce = { "A", _aComparison_ce, GUI_COUNTOF(_aComparison_ce) };
static const APPW_COND _Condition_cf = { "A", _aComparison_cf, GUI_COUNTOF(_aComparison_cf) };
static const APPW_COND _Condition_d0 = { "A", _aComparison_d0, GUI_COUNTOF(_aComparison_d0) };
static const APPW_COND _Condition_d1 = { "A", _aComparison_d1, GUI_COUNTOF(_aComparison_d1) };
static const APPW_COND _Condition_d2 = { "A", _aComparison_d2, GUI_COUNTOF(_aComparison_d2) };
static const APPW_COND _Condition_d3 = { "A", _aComparison_d3, GUI_COUNTOF(_aComparison_d3) };
static const APPW_COND _Condition_d4 = { "A", _aComparison_d4, GUI_COUNTOF(_aComparison_d4) };
static const APPW_COND _Condition_d5 = { "A", _aComparison_d5, GUI_COUNTOF(_aComparison_d5) };
static const APPW_COND _Condition_d6 = { "A", _aComparison_d6, GUI_COUNTOF(_aComparison_d6) };
static const APPW_COND _Condition_d7 = { "A", _aComparison_d7, GUI_COUNTOF(_aComparison_d7) };
static const APPW_COND _Condition_d8 = { "A", _aComparison_d8, GUI_COUNTOF(_aComparison_d8) };
static const APPW_COND _Condition_d9 = { "A", _aComparison_d9, GUI_COUNTOF(_aComparison_d9) };
static const APPW_COND _Condition_da = { "A", _aComparison_da, GUI_COUNTOF(_aComparison_da) };
static const APPW_COND _Condition_db = { "A", _aComparison_db, GUI_COUNTOF(_aComparison_db) };
static const APPW_COND _Condition_dc = { "A", _aComparison_dc, GUI_COUNTOF(_aComparison_dc) };
static const APPW_COND _Condition_dd = { "A", _aComparison_dd, GUI_COUNTOF(_aComparison_dd) };
static const APPW_COND _Condition_de = { "A", _aComparison_de, GUI_COUNTOF(_aComparison_de) };
static const APPW_COND _Condition_df = { "A", _aComparison_df, GUI_COUNTOF(_aComparison_df) };
static const APPW_COND _Condition_e0 = { "A", _aComparison_e0, GUI_COUNTOF(_aComparison_e0) };
static const APPW_COND _Condition_e1 = { "A", _aComparison_e1, GUI_COUNTOF(_aComparison_e1) };
static const APPW_COND _Condition_e2 = { "A", _aComparison_e2, GUI_COUNTOF(_aComparison_e2) };
static const APPW_COND _Condition_e3 = { "A", _aComparison_e3, GUI_COUNTOF(_aComparison_e3) };
static const APPW_COND _Condition_e4 = { "A", _aComparison_e4, GUI_COUNTOF(_aComparison_e4) };
static const APPW_COND _Condition_e5 = { "A", _aComparison_e5, GUI_COUNTOF(_aComparison_e5) };
static const APPW_COND _Condition_e6 = { "A", _aComparison_e6, GUI_COUNTOF(_aComparison_e6) };
static const APPW_COND _Condition_e7 = { "A", _aComparison_e7, GUI_COUNTOF(_aComparison_e7) };
static const APPW_COND _Condition_e8 = { "A", _aComparison_e8, GUI_COUNTOF(_aComparison_e8) };
static const APPW_COND _Condition_e9 = { "A", _aComparison_e9, GUI_COUNTOF(_aComparison_e9) };
static const APPW_COND _Condition_ea = { "A", _aComparison_ea, GUI_COUNTOF(_aComparison_ea) };
static const APPW_COND _Condition_eb = { "A", _aComparison_eb, GUI_COUNTOF(_aComparison_eb) };
static const APPW_COND _Condition_ec = { "A", _aComparison_ec, GUI_COUNTOF(_aComparison_ec) };
static const APPW_COND _Condition_ed = { "A", _aComparison_ed, GUI_COUNTOF(_aComparison_ed) };
static const APPW_COND _Condition_ee = { "A", _aComparison_ee, GUI_COUNTOF(_aComparison_ee) };
static const APPW_COND _Condition_ef = { "A", _aComparison_ef, GUI_COUNTOF(_aComparison_ef) };
static const APPW_COND _Condition_f0 = { "A", _aComparison_f0, GUI_COUNTOF(_aComparison_f0) };
static const APPW_COND _Condition_f1 = { "A", _aComparison_f1, GUI_COUNTOF(_aComparison_f1) };
static const APPW_COND _Condition_f2 = { "A", _aComparison_f2, GUI_COUNTOF(_aComparison_f2) };
static const APPW_COND _Condition_f3 = { "A", _aComparison_f3, GUI_COUNTOF(_aComparison_f3) };
static const APPW_COND _Condition_f4 = { "A", _aComparison_f4, GUI_COUNTOF(_aComparison_f4) };
static const APPW_COND _Condition_f5 = { "A", _aComparison_f5, GUI_COUNTOF(_aComparison_f5) };
static const APPW_COND _Condition_f6 = { "A", _aComparison_f6, GUI_COUNTOF(_aComparison_f6) };
static const APPW_COND _Condition_f7 = { "A", _aComparison_f7, GUI_COUNTOF(_aComparison_f7) };
static const APPW_COND _Condition_f8 = { "A", _aComparison_f8, GUI_COUNTOF(_aComparison_f8) };
static const APPW_COND _Condition_f9 = { "A", _aComparison_f9, GUI_COUNTOF(_aComparison_f9) };
static const APPW_COND _Condition_fa = { "A", _aComparison_fa, GUI_COUNTOF(_aComparison_fa) };
static const APPW_COND _Condition_fb = { "A", _aComparison_fb, GUI_COUNTOF(_aComparison_fb) };
static const APPW_COND _Condition_fc = { "A", _aComparison_fc, GUI_COUNTOF(_aComparison_fc) };
static const APPW_COND _Condition_fd = { "A", _aComparison_fd, GUI_COUNTOF(_aComparison_fd) };
static const APPW_COND _Condition_fe = { "A", _aComparison_fe, GUI_COUNTOF(_aComparison_fe) };
static const APPW_COND _Condition_ff = { "A", _aComparison_ff, GUI_COUNTOF(_aComparison_ff) };
static const APPW_COND _Condition_100 = { "A", _aComparison_100, GUI_COUNTOF(_aComparison_100) };
static const APPW_COND _Condition_101 = { "A", _aComparison_101, GUI_COUNTOF(_aComparison_101) };
static const APPW_COND _Condition_102 = { "A", _aComparison_102, GUI_COUNTOF(_aComparison_102) };
static const APPW_COND _Condition_103 = { "A", _aComparison_103, GUI_COUNTOF(_aComparison_103) };
static const APPW_COND _Condition_104 = { "A", _aComparison_104, GUI_COUNTOF(_aComparison_104) };
static const APPW_COND _Condition_105 = { "A", _aComparison_105, GUI_COUNTOF(_aComparison_105) };
static const APPW_COND _Condition_106 = { "A", _aComparison_106, GUI_COUNTOF(_aComparison_106) };
static const APPW_COND _Condition_107 = { "A", _aComparison_107, GUI_COUNTOF(_aComparison_107) };
static const APPW_COND _Condition_108 = { "A", _aComparison_108, GUI_COUNTOF(_aComparison_108) };
static const APPW_COND _Condition_109 = { "A", _aComparison_109, GUI_COUNTOF(_aComparison_109) };
static const APPW_COND _Condition_10a = { "A", _aComparison_10a, GUI_COUNTOF(_aComparison_10a) };
static const APPW_COND _Condition_10b = { "A", _aComparison_10b, GUI_COUNTOF(_aComparison_10b) };
static const APPW_COND _Condition_10c = { "A", _aComparison_10c, GUI_COUNTOF(_aComparison_10c) };
static const APPW_COND _Condition_10d = { "A", _aComparison_10d, GUI_COUNTOF(_aComparison_10d) };
static const APPW_COND _Condition_10e = { "A", _aComparison_10e, GUI_COUNTOF(_aComparison_10e) };
static const APPW_COND _Condition_10f = { "A", _aComparison_10f, GUI_COUNTOF(_aComparison_10f) };
static const APPW_COND _Condition_110 = { "A", _aComparison_110, GUI_COUNTOF(_aComparison_110) };
static const APPW_COND _Condition_111 = { "A", _aComparison_111, GUI_COUNTOF(_aComparison_111) };
static const APPW_COND _Condition_112 = { "A", _aComparison_112, GUI_COUNTOF(_aComparison_112) };
static const APPW_COND _Condition_113 = { "A", _aComparison_113, GUI_COUNTOF(_aComparison_113) };
static const APPW_COND _Condition_114 = { "A", _aComparison_114, GUI_COUNTOF(_aComparison_114) };
static const APPW_COND _Condition_115 = { "A", _aComparison_115, GUI_COUNTOF(_aComparison_115) };
static const APPW_COND _Condition_116 = { "A", _aComparison_116, GUI_COUNTOF(_aComparison_116) };
static const APPW_COND _Condition_117 = { "A", _aComparison_117, GUI_COUNTOF(_aComparison_117) };
static const APPW_COND _Condition_118 = { "A", _aComparison_118, GUI_COUNTOF(_aComparison_118) };
static const APPW_COND _Condition_119 = { "A", _aComparison_119, GUI_COUNTOF(_aComparison_119) };
static const APPW_COND _Condition_11a = { "A", _aComparison_11a, GUI_COUNTOF(_aComparison_11a) };
static const APPW_COND _Condition_11b = { "A", _aComparison_11b, GUI_COUNTOF(_aComparison_11b) };
static const APPW_COND _Condition_11c = { "A", _aComparison_11c, GUI_COUNTOF(_aComparison_11c) };
static const APPW_COND _Condition_11d = { "A", _aComparison_11d, GUI_COUNTOF(_aComparison_11d) };
static const APPW_COND _Condition_11e = { "A", _aComparison_11e, GUI_COUNTOF(_aComparison_11e) };
static const APPW_COND _Condition_11f = { "A", _aComparison_11f, GUI_COUNTOF(_aComparison_11f) };
static const APPW_COND _Condition_120 = { "A", _aComparison_120, GUI_COUNTOF(_aComparison_120) };
static const APPW_COND _Condition_121 = { "A", _aComparison_121, GUI_COUNTOF(_aComparison_121) };
static const APPW_COND _Condition_122 = { "A", _aComparison_122, GUI_COUNTOF(_aComparison_122) };
static const APPW_COND _Condition_123 = { "A", _aComparison_123, GUI_COUNTOF(_aComparison_123) };
static const APPW_COND _Condition_124 = { "A", _aComparison_124, GUI_COUNTOF(_aComparison_124) };
static const APPW_COND _Condition_125 = { "A", _aComparison_125, GUI_COUNTOF(_aComparison_125) };
static const APPW_COND _Condition_126 = { "A", _aComparison_126, GUI_COUNTOF(_aComparison_126) };
static const APPW_COND _Condition_127 = { "A", _aComparison_127, GUI_COUNTOF(_aComparison_127) };
static const APPW_COND _Condition_128 = { "A", _aComparison_128, GUI_COUNTOF(_aComparison_128) };
static const APPW_COND _Condition_129 = { "A", _aComparison_129, GUI_COUNTOF(_aComparison_129) };
static const APPW_COND _Condition_12a = { "A", _aComparison_12a, GUI_COUNTOF(_aComparison_12a) };
static const APPW_COND _Condition_12b = { "A", _aComparison_12b, GUI_COUNTOF(_aComparison_12b) };
static const APPW_COND _Condition_12c = { "A", _aComparison_12c, GUI_COUNTOF(_aComparison_12c) };
static const APPW_COND _Condition_12d = { "A", _aComparison_12d, GUI_COUNTOF(_aComparison_12d) };
static const APPW_COND _Condition_12e = { "A", _aComparison_12e, GUI_COUNTOF(_aComparison_12e) };
static const APPW_COND _Condition_12f = { "A", _aComparison_12f, GUI_COUNTOF(_aComparison_12f) };
static const APPW_COND _Condition_130 = { "A", _aComparison_130, GUI_COUNTOF(_aComparison_130) };
static const APPW_COND _Condition_131 = { "A", _aComparison_131, GUI_COUNTOF(_aComparison_131) };
static const APPW_COND _Condition_132 = { "A", _aComparison_132, GUI_COUNTOF(_aComparison_132) };
static const APPW_COND _Condition_133 = { "A", _aComparison_133, GUI_COUNTOF(_aComparison_133) };
static const APPW_COND _Condition_134 = { "A", _aComparison_134, GUI_COUNTOF(_aComparison_134) };
static const APPW_COND _Condition_135 = { "A", _aComparison_135, GUI_COUNTOF(_aComparison_135) };
static const APPW_COND _Condition_136 = { "A", _aComparison_136, GUI_COUNTOF(_aComparison_136) };
static const APPW_COND _Condition_137 = { "A", _aComparison_137, GUI_COUNTOF(_aComparison_137) };
static const APPW_COND _Condition_138 = { "A", _aComparison_138, GUI_COUNTOF(_aComparison_138) };
static const APPW_COND _Condition_139 = { "A", _aComparison_139, GUI_COUNTOF(_aComparison_139) };
static const APPW_COND _Condition_13a = { "A", _aComparison_13a, GUI_COUNTOF(_aComparison_13a) };
static const APPW_COND _Condition_13b = { "A", _aComparison_13b, GUI_COUNTOF(_aComparison_13b) };
static const APPW_COND _Condition_13c = { "A", _aComparison_13c, GUI_COUNTOF(_aComparison_13c) };
static const APPW_COND _Condition_13d = { "A", _aComparison_13d, GUI_COUNTOF(_aComparison_13d) };
static const APPW_COND _Condition_13e = { "A", _aComparison_13e, GUI_COUNTOF(_aComparison_13e) };
static const APPW_COND _Condition_13f = { "A", _aComparison_13f, GUI_COUNTOF(_aComparison_13f) };
static const APPW_COND _Condition_140 = { "A", _aComparison_140, GUI_COUNTOF(_aComparison_140) };
static const APPW_COND _Condition_141 = { "A", _aComparison_141, GUI_COUNTOF(_aComparison_141) };
static const APPW_COND _Condition_142 = { "A", _aComparison_142, GUI_COUNTOF(_aComparison_142) };
static const APPW_COND _Condition_143 = { "A", _aComparison_143, GUI_COUNTOF(_aComparison_143) };
static const APPW_COND _Condition_144 = { "A", _aComparison_144, GUI_COUNTOF(_aComparison_144) };
static const APPW_COND _Condition_145 = { "A", _aComparison_145, GUI_COUNTOF(_aComparison_145) };
static const APPW_COND _Condition_146 = { "A", _aComparison_146, GUI_COUNTOF(_aComparison_146) };
static const APPW_COND _Condition_147 = { "A", _aComparison_147, GUI_COUNTOF(_aComparison_147) };
static const APPW_COND _Condition_148 = { "A", _aComparison_148, GUI_COUNTOF(_aComparison_148) };
static const APPW_COND _Condition_149 = { "A", _aComparison_149, GUI_COUNTOF(_aComparison_149) };
static const APPW_COND _Condition_14a = { "A", _aComparison_14a, GUI_COUNTOF(_aComparison_14a) };
static const APPW_COND _Condition_14b = { "A", _aComparison_14b, GUI_COUNTOF(_aComparison_14b) };
static const APPW_COND _Condition_14c = { "A", _aComparison_14c, GUI_COUNTOF(_aComparison_14c) };
static const APPW_COND _Condition_14d = { "A", _aComparison_14d, GUI_COUNTOF(_aComparison_14d) };
static const APPW_COND _Condition_14e = { "A", _aComparison_14e, GUI_COUNTOF(_aComparison_14e) };
static const APPW_COND _Condition_14f = { "A", _aComparison_14f, GUI_COUNTOF(_aComparison_14f) };
static const APPW_COND _Condition_150 = { "A", _aComparison_150, GUI_COUNTOF(_aComparison_150) };
static const APPW_COND _Condition_151 = { "A", _aComparison_151, GUI_COUNTOF(_aComparison_151) };
static const APPW_COND _Condition_152 = { "A", _aComparison_152, GUI_COUNTOF(_aComparison_152) };
static const APPW_COND _Condition_153 = { "A", _aComparison_153, GUI_COUNTOF(_aComparison_153) };
static const APPW_COND _Condition_154 = { "A", _aComparison_154, GUI_COUNTOF(_aComparison_154) };
static const APPW_COND _Condition_155 = { "A", _aComparison_155, GUI_COUNTOF(_aComparison_155) };
static const APPW_COND _Condition_156 = { "A", _aComparison_156, GUI_COUNTOF(_aComparison_156) };
static const APPW_COND _Condition_157 = { "A", _aComparison_157, GUI_COUNTOF(_aComparison_157) };
static const APPW_COND _Condition_158 = { "A", _aComparison_158, GUI_COUNTOF(_aComparison_158) };
static const APPW_COND _Condition_159 = { "A", _aComparison_159, GUI_COUNTOF(_aComparison_159) };
static const APPW_COND _Condition_15a = { "A", _aComparison_15a, GUI_COUNTOF(_aComparison_15a) };
static const APPW_COND _Condition_15b = { "A", _aComparison_15b, GUI_COUNTOF(_aComparison_15b) };
static const APPW_COND _Condition_15c = { "A", _aComparison_15c, GUI_COUNTOF(_aComparison_15c) };
static const APPW_COND _Condition_15d = { "A", _aComparison_15d, GUI_COUNTOF(_aComparison_15d) };
static const APPW_COND _Condition_15e = { "A", _aComparison_15e, GUI_COUNTOF(_aComparison_15e) };
static const APPW_COND _Condition_15f = { "A", _aComparison_15f, GUI_COUNTOF(_aComparison_15f) };
static const APPW_COND _Condition_160 = { "A", _aComparison_160, GUI_COUNTOF(_aComparison_160) };
static const APPW_COND _Condition_161 = { "A", _aComparison_161, GUI_COUNTOF(_aComparison_161) };
static const APPW_COND _Condition_162 = { "A", _aComparison_162, GUI_COUNTOF(_aComparison_162) };
static const APPW_COND _Condition_163 = { "A", _aComparison_163, GUI_COUNTOF(_aComparison_163) };
static const APPW_COND _Condition_164 = { "A", _aComparison_164, GUI_COUNTOF(_aComparison_164) };
static const APPW_COND _Condition_165 = { "A", _aComparison_165, GUI_COUNTOF(_aComparison_165) };
static const APPW_COND _Condition_166 = { "A", _aComparison_166, GUI_COUNTOF(_aComparison_166) };
static const APPW_COND _Condition_167 = { "A", _aComparison_167, GUI_COUNTOF(_aComparison_167) };
static const APPW_COND _Condition_168 = { "A", _aComparison_168, GUI_COUNTOF(_aComparison_168) };
static const APPW_COND _Condition_169 = { "A", _aComparison_169, GUI_COUNTOF(_aComparison_169) };
static const APPW_COND _Condition_16a = { "A", _aComparison_16a, GUI_COUNTOF(_aComparison_16a) };
static const APPW_COND _Condition_16b = { "A", _aComparison_16b, GUI_COUNTOF(_aComparison_16b) };
static const APPW_COND _Condition_16c = { "A", _aComparison_16c, GUI_COUNTOF(_aComparison_16c) };
static const APPW_COND _Condition_16d = { "A", _aComparison_16d, GUI_COUNTOF(_aComparison_16d) };
static const APPW_COND _Condition_16e = { "A", _aComparison_16e, GUI_COUNTOF(_aComparison_16e) };
static const APPW_COND _Condition_16f = { "A", _aComparison_16f, GUI_COUNTOF(_aComparison_16f) };
static const APPW_COND _Condition_170 = { "A", _aComparison_170, GUI_COUNTOF(_aComparison_170) };
static const APPW_COND _Condition_171 = { "A", _aComparison_171, GUI_COUNTOF(_aComparison_171) };
static const APPW_COND _Condition_172 = { "A", _aComparison_172, GUI_COUNTOF(_aComparison_172) };
static const APPW_COND _Condition_173 = { "A", _aComparison_173, GUI_COUNTOF(_aComparison_173) };
static const APPW_COND _Condition_174 = { "A", _aComparison_174, GUI_COUNTOF(_aComparison_174) };
static const APPW_COND _Condition_175 = { "A", _aComparison_175, GUI_COUNTOF(_aComparison_175) };
static const APPW_COND _Condition_176 = { "A", _aComparison_176, GUI_COUNTOF(_aComparison_176) };
static const APPW_COND _Condition_177 = { "A", _aComparison_177, GUI_COUNTOF(_aComparison_177) };
static const APPW_COND _Condition_178 = { "A", _aComparison_178, GUI_COUNTOF(_aComparison_178) };
static const APPW_COND _Condition_179 = { "A", _aComparison_179, GUI_COUNTOF(_aComparison_179) };
static const APPW_COND _Condition_17a = { "A", _aComparison_17a, GUI_COUNTOF(_aComparison_17a) };
static const APPW_COND _Condition_17b = { "A", _aComparison_17b, GUI_COUNTOF(_aComparison_17b) };
static const APPW_COND _Condition_17c = { "A", _aComparison_17c, GUI_COUNTOF(_aComparison_17c) };
static const APPW_COND _Condition_17d = { "A", _aComparison_17d, GUI_COUNTOF(_aComparison_17d) };
static const APPW_COND _Condition_17e = { "A", _aComparison_17e, GUI_COUNTOF(_aComparison_17e) };
static const APPW_COND _Condition_17f = { "A", _aComparison_17f, GUI_COUNTOF(_aComparison_17f) };
static const APPW_COND _Condition_180 = { "A", _aComparison_180, GUI_COUNTOF(_aComparison_180) };
static const APPW_COND _Condition_181 = { "A", _aComparison_181, GUI_COUNTOF(_aComparison_181) };
static const APPW_COND _Condition_182 = { "A", _aComparison_182, GUI_COUNTOF(_aComparison_182) };
static const APPW_COND _Condition_183 = { "A", _aComparison_183, GUI_COUNTOF(_aComparison_183) };
static const APPW_COND _Condition_184 = { "A", _aComparison_184, GUI_COUNTOF(_aComparison_184) };
static const APPW_COND _Condition_185 = { "A", _aComparison_185, GUI_COUNTOF(_aComparison_185) };
static const APPW_COND _Condition_186 = { "A", _aComparison_186, GUI_COUNTOF(_aComparison_186) };
static const APPW_COND _Condition_187 = { "A", _aComparison_187, GUI_COUNTOF(_aComparison_187) };
static const APPW_COND _Condition_188 = { "A", _aComparison_188, GUI_COUNTOF(_aComparison_188) };
static const APPW_COND _Condition_189 = { "A", _aComparison_189, GUI_COUNTOF(_aComparison_189) };
static const APPW_COND _Condition_18a = { "A", _aComparison_18a, GUI_COUNTOF(_aComparison_18a) };
static const APPW_COND _Condition_18b = { "A", _aComparison_18b, GUI_COUNTOF(_aComparison_18b) };
static const APPW_COND _Condition_18c = { "A", _aComparison_18c, GUI_COUNTOF(_aComparison_18c) };
static const APPW_COND _Condition_18d = { "A", _aComparison_18d, GUI_COUNTOF(_aComparison_18d) };
static const APPW_COND _Condition_18e = { "A", _aComparison_18e, GUI_COUNTOF(_aComparison_18e) };
static const APPW_COND _Condition_18f = { "A", _aComparison_18f, GUI_COUNTOF(_aComparison_18f) };
static const APPW_COND _Condition_190 = { "A", _aComparison_190, GUI_COUNTOF(_aComparison_190) };
static const APPW_COND _Condition_191 = { "A", _aComparison_191, GUI_COUNTOF(_aComparison_191) };
static const APPW_COND _Condition_192 = { "A", _aComparison_192, GUI_COUNTOF(_aComparison_192) };
static const APPW_COND _Condition_193 = { "A", _aComparison_193, GUI_COUNTOF(_aComparison_193) };
static const APPW_COND _Condition_194 = { "A", _aComparison_194, GUI_COUNTOF(_aComparison_194) };
static const APPW_COND _Condition_195 = { "A", _aComparison_195, GUI_COUNTOF(_aComparison_195) };
static const APPW_COND _Condition_196 = { "A", _aComparison_196, GUI_COUNTOF(_aComparison_196) };
static const APPW_COND _Condition_197 = { "A", _aComparison_197, GUI_COUNTOF(_aComparison_197) };
static const APPW_COND _Condition_198 = { "A", _aComparison_198, GUI_COUNTOF(_aComparison_198) };
static const APPW_COND _Condition_199 = { "A", _aComparison_199, GUI_COUNTOF(_aComparison_199) };
static const APPW_COND _Condition_19a = { "A", _aComparison_19a, GUI_COUNTOF(_aComparison_19a) };
static const APPW_COND _Condition_19b = { "A", _aComparison_19b, GUI_COUNTOF(_aComparison_19b) };
static const APPW_COND _Condition_19c = { "A", _aComparison_19c, GUI_COUNTOF(_aComparison_19c) };
static const APPW_COND _Condition_19d = { "A", _aComparison_19d, GUI_COUNTOF(_aComparison_19d) };
static const APPW_COND _Condition_19e = { "A", _aComparison_19e, GUI_COUNTOF(_aComparison_19e) };
static const APPW_COND _Condition_19f = { "A", _aComparison_19f, GUI_COUNTOF(_aComparison_19f) };
static const APPW_COND _Condition_1a0 = { "A", _aComparison_1a0, GUI_COUNTOF(_aComparison_1a0) };
static const APPW_COND _Condition_1a1 = { "A", _aComparison_1a1, GUI_COUNTOF(_aComparison_1a1) };
static const APPW_COND _Condition_1a2 = { "A", _aComparison_1a2, GUI_COUNTOF(_aComparison_1a2) };
static const APPW_COND _Condition_1a3 = { "A", _aComparison_1a3, GUI_COUNTOF(_aComparison_1a3) };
static const APPW_COND _Condition_1a4 = { "A", _aComparison_1a4, GUI_COUNTOF(_aComparison_1a4) };
static const APPW_COND _Condition_1a5 = { "A", _aComparison_1a5, GUI_COUNTOF(_aComparison_1a5) };
static const APPW_COND _Condition_1a6 = { "A", _aComparison_1a6, GUI_COUNTOF(_aComparison_1a6) };
static const APPW_COND _Condition_1a7 = { "A", _aComparison_1a7, GUI_COUNTOF(_aComparison_1a7) };
static const APPW_COND _Condition_1a8 = { "A", _aComparison_1a8, GUI_COUNTOF(_aComparison_1a8) };
static const APPW_COND _Condition_1a9 = { "A", _aComparison_1a9, GUI_COUNTOF(_aComparison_1a9) };
static const APPW_COND _Condition_1aa = { "A", _aComparison_1aa, GUI_COUNTOF(_aComparison_1aa) };
static const APPW_COND _Condition_1ab = { "A", _aComparison_1ab, GUI_COUNTOF(_aComparison_1ab) };
static const APPW_COND _Condition_1ac = { "A", _aComparison_1ac, GUI_COUNTOF(_aComparison_1ac) };
static const APPW_COND _Condition_1ad = { "A", _aComparison_1ad, GUI_COUNTOF(_aComparison_1ad) };
static const APPW_COND _Condition_1ae = { "A", _aComparison_1ae, GUI_COUNTOF(_aComparison_1ae) };
static const APPW_COND _Condition_1af = { "A", _aComparison_1af, GUI_COUNTOF(_aComparison_1af) };
static const APPW_COND _Condition_1b0 = { "A", _aComparison_1b0, GUI_COUNTOF(_aComparison_1b0) };
static const APPW_COND _Condition_1b1 = { "A", _aComparison_1b1, GUI_COUNTOF(_aComparison_1b1) };
static const APPW_COND _Condition_1b2 = { "A", _aComparison_1b2, GUI_COUNTOF(_aComparison_1b2) };
static const APPW_COND _Condition_1b3 = { "A", _aComparison_1b3, GUI_COUNTOF(_aComparison_1b3) };
static const APPW_COND _Condition_1b4 = { "A", _aComparison_1b4, GUI_COUNTOF(_aComparison_1b4) };
static const APPW_COND _Condition_1b5 = { "A", _aComparison_1b5, GUI_COUNTOF(_aComparison_1b5) };
static const APPW_COND _Condition_1b6 = { "A", _aComparison_1b6, GUI_COUNTOF(_aComparison_1b6) };
static const APPW_COND _Condition_1b7 = { "A", _aComparison_1b7, GUI_COUNTOF(_aComparison_1b7) };
static const APPW_COND _Condition_1b8 = { "A", _aComparison_1b8, GUI_COUNTOF(_aComparison_1b8) };
static const APPW_COND _Condition_1b9 = { "A", _aComparison_1b9, GUI_COUNTOF(_aComparison_1b9) };
static const APPW_COND _Condition_1ba = { "A", _aComparison_1ba, GUI_COUNTOF(_aComparison_1ba) };
static const APPW_COND _Condition_1bb = { "A", _aComparison_1bb, GUI_COUNTOF(_aComparison_1bb) };
static const APPW_COND _Condition_1bc = { "A", _aComparison_1bc, GUI_COUNTOF(_aComparison_1bc) };
static const APPW_COND _Condition_1bd = { "A", _aComparison_1bd, GUI_COUNTOF(_aComparison_1bd) };
static const APPW_COND _Condition_1be = { "A", _aComparison_1be, GUI_COUNTOF(_aComparison_1be) };
static const APPW_COND _Condition_1bf = { "A", _aComparison_1bf, GUI_COUNTOF(_aComparison_1bf) };
static const APPW_COND _Condition_1c0 = { "A", _aComparison_1c0, GUI_COUNTOF(_aComparison_1c0) };
static const APPW_COND _Condition_1c1 = { "A", _aComparison_1c1, GUI_COUNTOF(_aComparison_1c1) };
static const APPW_COND _Condition_1c2 = { "A", _aComparison_1c2, GUI_COUNTOF(_aComparison_1c2) };
static const APPW_COND _Condition_1c3 = { "A", _aComparison_1c3, GUI_COUNTOF(_aComparison_1c3) };
static const APPW_COND _Condition_1c4 = { "A", _aComparison_1c4, GUI_COUNTOF(_aComparison_1c4) };
static const APPW_COND _Condition_1c5 = { "A", _aComparison_1c5, GUI_COUNTOF(_aComparison_1c5) };
static const APPW_COND _Condition_1c6 = { "A", _aComparison_1c6, GUI_COUNTOF(_aComparison_1c6) };
static const APPW_COND _Condition_1c7 = { "A", _aComparison_1c7, GUI_COUNTOF(_aComparison_1c7) };
static const APPW_COND _Condition_1c8 = { "A", _aComparison_1c8, GUI_COUNTOF(_aComparison_1c8) };
static const APPW_COND _Condition_1c9 = { "A", _aComparison_1c9, GUI_COUNTOF(_aComparison_1c9) };
static const APPW_COND _Condition_1ca = { "A", _aComparison_1ca, GUI_COUNTOF(_aComparison_1ca) };
static const APPW_COND _Condition_1cb = { "A", _aComparison_1cb, GUI_COUNTOF(_aComparison_1cb) };
static const APPW_COND _Condition_1cc = { "A", _aComparison_1cc, GUI_COUNTOF(_aComparison_1cc) };
static const APPW_COND _Condition_1cd = { "A", _aComparison_1cd, GUI_COUNTOF(_aComparison_1cd) };
static const APPW_COND _Condition_1ce = { "A", _aComparison_1ce, GUI_COUNTOF(_aComparison_1ce) };
static const APPW_COND _Condition_1cf = { "A", _aComparison_1cf, GUI_COUNTOF(_aComparison_1cf) };
static const APPW_COND _Condition_1d0 = { "A", _aComparison_1d0, GUI_COUNTOF(_aComparison_1d0) };
static const APPW_COND _Condition_1d1 = { "A", _aComparison_1d1, GUI_COUNTOF(_aComparison_1d1) };
static const APPW_COND _Condition_1d2 = { "A", _aComparison_1d2, GUI_COUNTOF(_aComparison_1d2) };
static const APPW_COND _Condition_1d3 = { "A", _aComparison_1d3, GUI_COUNTOF(_aComparison_1d3) };
static const APPW_COND _Condition_1d4 = { "A", _aComparison_1d4, GUI_COUNTOF(_aComparison_1d4) };
static const APPW_COND _Condition_1d5 = { "A", _aComparison_1d5, GUI_COUNTOF(_aComparison_1d5) };
static const APPW_COND _Condition_1d6 = { "A", _aComparison_1d6, GUI_COUNTOF(_aComparison_1d6) };
static const APPW_COND _Condition_1d7 = { "A", _aComparison_1d7, GUI_COUNTOF(_aComparison_1d7) };
static const APPW_COND _Condition_1d8 = { "A", _aComparison_1d8, GUI_COUNTOF(_aComparison_1d8) };
static const APPW_COND _Condition_1d9 = { "A", _aComparison_1d9, GUI_COUNTOF(_aComparison_1d9) };
static const APPW_COND _Condition_1da = { "A", _aComparison_1da, GUI_COUNTOF(_aComparison_1da) };
static const APPW_COND _Condition_1db = { "A", _aComparison_1db, GUI_COUNTOF(_aComparison_1db) };
static const APPW_COND _Condition_1dc = { "A", _aComparison_1dc, GUI_COUNTOF(_aComparison_1dc) };
static const APPW_COND _Condition_1dd = { "A", _aComparison_1dd, GUI_COUNTOF(_aComparison_1dd) };
static const APPW_COND _Condition_1de = { "A", _aComparison_1de, GUI_COUNTOF(_aComparison_1de) };
static const APPW_COND _Condition_1df = { "A", _aComparison_1df, GUI_COUNTOF(_aComparison_1df) };
static const APPW_COND _Condition_1e0 = { "A", _aComparison_1e0, GUI_COUNTOF(_aComparison_1e0) };
static const APPW_COND _Condition_1e1 = { "A", _aComparison_1e1, GUI_COUNTOF(_aComparison_1e1) };
static const APPW_COND _Condition_1e2 = { "A", _aComparison_1e2, GUI_COUNTOF(_aComparison_1e2) };
static const APPW_COND _Condition_1e3 = { "A", _aComparison_1e3, GUI_COUNTOF(_aComparison_1e3) };
static const APPW_COND _Condition_1e4 = { "A", _aComparison_1e4, GUI_COUNTOF(_aComparison_1e4) };
static const APPW_COND _Condition_1e5 = { "A", _aComparison_1e5, GUI_COUNTOF(_aComparison_1e5) };
static const APPW_COND _Condition_1e6 = { "A", _aComparison_1e6, GUI_COUNTOF(_aComparison_1e6) };
static const APPW_COND _Condition_1e7 = { "A", _aComparison_1e7, GUI_COUNTOF(_aComparison_1e7) };
static const APPW_COND _Condition_1e8 = { "A", _aComparison_1e8, GUI_COUNTOF(_aComparison_1e8) };
static const APPW_COND _Condition_1e9 = { "A", _aComparison_1e9, GUI_COUNTOF(_aComparison_1e9) };
static const APPW_COND _Condition_1ea = { "A", _aComparison_1ea, GUI_COUNTOF(_aComparison_1ea) };
static const APPW_COND _Condition_1eb = { "A", _aComparison_1eb, GUI_COUNTOF(_aComparison_1eb) };
static const APPW_COND _Condition_1ec = { "A", _aComparison_1ec, GUI_COUNTOF(_aComparison_1ec) };
static const APPW_COND _Condition_1ed = { "A", _aComparison_1ed, GUI_COUNTOF(_aComparison_1ed) };
static const APPW_COND _Condition_1ee = { "A", _aComparison_1ee, GUI_COUNTOF(_aComparison_1ee) };
static const APPW_COND _Condition_1ef = { "A", _aComparison_1ef, GUI_COUNTOF(_aComparison_1ef) };
static const APPW_COND _Condition_1f0 = { "A", _aComparison_1f0, GUI_COUNTOF(_aComparison_1f0) };
static const APPW_COND _Condition_1f1 = { "A", _aComparison_1f1, GUI_COUNTOF(_aComparison_1f1) };
static const APPW_COND _Condition_1f2 = { "A", _aComparison_1f2, GUI_COUNTOF(_aComparison_1f2) };
static const APPW_COND _Condition_1f3 = { "A", _aComparison_1f3, GUI_COUNTOF(_aComparison_1f3) };
static const APPW_COND _Condition_1f4 = { "A", _aComparison_1f4, GUI_COUNTOF(_aComparison_1f4) };
static const APPW_COND _Condition_1f5 = { "A", _aComparison_1f5, GUI_COUNTOF(_aComparison_1f5) };
static const APPW_COND _Condition_1f6 = { "A", _aComparison_1f6, GUI_COUNTOF(_aComparison_1f6) };
static const APPW_COND _Condition_1f7 = { "A", _aComparison_1f7, GUI_COUNTOF(_aComparison_1f7) };
static const APPW_COND _Condition_1f8 = { "A", _aComparison_1f8, GUI_COUNTOF(_aComparison_1f8) };
static const APPW_COND _Condition_1f9 = { "A", _aComparison_1f9, GUI_COUNTOF(_aComparison_1f9) };
static const APPW_COND _Condition_1fa = { "A", _aComparison_1fa, GUI_COUNTOF(_aComparison_1fa) };
static const APPW_COND _Condition_1fb = { "A", _aComparison_1fb, GUI_COUNTOF(_aComparison_1fb) };
static const APPW_COND _Condition_1fc = { "A", _aComparison_1fc, GUI_COUNTOF(_aComparison_1fc) };
static const APPW_COND _Condition_1fd = { "A", _aComparison_1fd, GUI_COUNTOF(_aComparison_1fd) };
static const APPW_COND _Condition_1fe = { "A", _aComparison_1fe, GUI_COUNTOF(_aComparison_1fe) };
static const APPW_COND _Condition_1ff = { "A", _aComparison_1ff, GUI_COUNTOF(_aComparison_1ff) };
static const APPW_COND _Condition_200 = { "A", _aComparison_200, GUI_COUNTOF(_aComparison_200) };
static const APPW_COND _Condition_201 = { "A", _aComparison_201, GUI_COUNTOF(_aComparison_201) };
static const APPW_COND _Condition_202 = { "A", _aComparison_202, GUI_COUNTOF(_aComparison_202) };
static const APPW_COND _Condition_203 = { "A", _aComparison_203, GUI_COUNTOF(_aComparison_203) };
static const APPW_COND _Condition_204 = { "A", _aComparison_204, GUI_COUNTOF(_aComparison_204) };
static const APPW_COND _Condition_205 = { "A", _aComparison_205, GUI_COUNTOF(_aComparison_205) };
static const APPW_COND _Condition_206 = { "A", _aComparison_206, GUI_COUNTOF(_aComparison_206) };
static const APPW_COND _Condition_207 = { "A", _aComparison_207, GUI_COUNTOF(_aComparison_207) };
static const APPW_COND _Condition_208 = { "A", _aComparison_208, GUI_COUNTOF(_aComparison_208) };
static const APPW_COND _Condition_209 = { "A", _aComparison_209, GUI_COUNTOF(_aComparison_209) };
static const APPW_COND _Condition_20a = { "A", _aComparison_20a, GUI_COUNTOF(_aComparison_20a) };

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,      WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_SWAPSCREEN,     ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAINMENU),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,           WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_MODALMESSAGE,   ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,           WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_CLOSESCREEN,    ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_SOURCE1,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE1,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE1__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_03
  },
  { ID_VAR_SOURCE1,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE1,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE1__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_04
  },
  { ID_VAR_SOURCE1,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE1,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE1__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_05
  },
  { ID_VAR_SOURCE2,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE2,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE2__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_06
  },
  { ID_VAR_SOURCE2,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE2,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE2__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_07
  },
  { ID_VAR_SOURCE2,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE2,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE2__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_08
  },
  { ID_VAR_SOURCE3,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE3,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE3__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_09
  },
  { ID_VAR_SOURCE3,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE3,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE3__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_0a
  },
  { ID_VAR_SOURCE3,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE3,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE3__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_0b
  },
  { ID_VAR_SOURCE4,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE4,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE4__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_0c
  },
  { ID_VAR_SOURCE4,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE4,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE4__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_0d
  },
  { ID_VAR_SOURCE4,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE4,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE4__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_0e
  },
  { ID_VAR_SOURCE5,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE5,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE5__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_0f
  },
  { ID_VAR_SOURCE5,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE5,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE5__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_10
  },
  { ID_VAR_SOURCE5,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE5,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE5__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_11
  },
  { ID_VAR_SOURCE6,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE6,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE6__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_12
  },
  { ID_VAR_SOURCE6,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE6,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE6__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_13
  },
  { ID_VAR_SOURCE6,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE6,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE6__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_14
  },
  { ID_VAR_SOURCE7,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE7,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE7__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_15
  },
  { ID_VAR_SOURCE7,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE7,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE7__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_16
  },
  { ID_VAR_SOURCE7,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE7,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE7__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_17
  },
  { ID_VAR_SOURCE8,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE8,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE8__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_18
  },
  { ID_VAR_SOURCE8,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE8,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE8__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_19
  },
  { ID_VAR_SOURCE8,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE8,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE8__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_1a
  },
  { ID_VAR_SOURCE9,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE9,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE9__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_1b
  },
  { ID_VAR_SOURCE9,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE9,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE9__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_1c
  },
  { ID_VAR_SOURCE9,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE9,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE9__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_1d
  },
  { ID_VAR_SOURCE10,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE10,       APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE10__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_1e
  },
  { ID_VAR_SOURCE10,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE10,       APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE10__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_1f
  },
  { ID_VAR_SOURCE10,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE10,       APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE10__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_20
  },
  { ID_VAR_SOURCE11,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCEGEN,      APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCEGEN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ECU),
    }, 65536, &_Condition_21
  },
  { ID_VAR_SOURCE11,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCEGEN,      APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCEGEN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_TCM),
    }, 65536, &_Condition_22
  },
  { ID_VAR_SOURCE11,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCEGEN,      APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCEGEN__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_IO),
    }, 65536, &_Condition_23
  },
  { ID_VAR_SPN1,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN1,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN1__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN2,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN2,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN2__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN3,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN3,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN3__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN4,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN4,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN4__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN5,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN5,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN5__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN6,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN6,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN6__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN7,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN7,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN7__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN8,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN8,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN8__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN9,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN9,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN9__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN10,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN10,          APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN10__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SPN11,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPNGEN,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPNGEN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI1,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI1,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI1__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI2,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI2,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI2__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI3,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI3,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI3__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI4,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI4,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI4__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI5,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI5,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI5__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI6,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI6,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI6__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI7,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI7,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI7__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI8,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI8,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI8__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI9,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI9,           APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI9__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI10,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI10,          APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI10__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_FMI11,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMIGEN,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMIGEN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT1,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT1,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT1__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT2,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT2,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT2__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT3,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT3,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT3__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT4,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT4,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT4__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT5,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT5,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT5__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT6,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT6,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT6__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT7,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT7,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT7__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT8,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT8,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT8__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT9,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT9,         APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT9__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT10,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT10,        APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT10__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_COUNT11,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNTGEN,       APPW_JOB_SETVALUE,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNTGEN__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_STATUS,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_STATUSGEN,      APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_STATUSGEN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_REQUESTING),
    }, 65536, &_Condition_45
  },
  { ID_VAR_STATUS,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_STATUSGEN,      APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_STATUSGEN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_OK),
    }, 65536, &_Condition_46
  },
  { ID_VAR_PLUG1,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG1,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG1__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_47
  },
  { ID_VAR_PLUG1,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG1,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG1__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_48
  },
  { ID_VAR_PLUG1,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG1,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG1__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_49
  },
  { ID_VAR_PLUG2,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG2,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG2__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_4a
  },
  { ID_VAR_PLUG2,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG2,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG2__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_4b
  },
  { ID_VAR_PLUG2,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG2,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG2__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_4c
  },
  { ID_VAR_PLUG3,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG3,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG3__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_4d
  },
  { ID_VAR_PLUG3,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG3,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG3__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_4e
  },
  { ID_VAR_PLUG3,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG3,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG3__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_4f
  },
  { ID_VAR_PLUG4,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG4,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG4__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_50
  },
  { ID_VAR_PLUG4,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG4,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG4__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_51
  },
  { ID_VAR_PLUG4,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG4,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG4__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_52
  },
  { ID_VAR_PLUG5,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG5,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG5__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_53
  },
  { ID_VAR_PLUG5,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG5,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG5__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_54
  },
  { ID_VAR_PLUG5,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG5,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG5__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_55
  },
  { ID_VAR_PLUG6,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG6,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG6__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_56
  },
  { ID_VAR_PLUG6,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG6,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG6__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_57
  },
  { ID_VAR_PLUG6,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG6,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG6__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_58
  },
  { ID_VAR_PLUG7,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG7,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG7__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_59
  },
  { ID_VAR_PLUG7,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG7,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG7__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_5a
  },
  { ID_VAR_PLUG7,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG7,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG7__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_5b
  },
  { ID_VAR_PLUG8,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG8,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG8__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_5c
  },
  { ID_VAR_PLUG8,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG8,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG8__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_5d
  },
  { ID_VAR_PLUG8,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG8,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG8__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_5e
  },
  { ID_VAR_PLUG9,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG9,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG9__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_5f
  },
  { ID_VAR_PLUG9,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG9,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG9__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_60
  },
  { ID_VAR_PLUG9,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG9,          APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG9__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_61
  },
  { ID_VAR_PLUG10,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG10,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG10__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_62
  },
  { ID_VAR_PLUG10,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG10,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG10__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_63
  },
  { ID_VAR_PLUG10,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG10,         APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG10__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_64
  },
  { ID_VAR_PLUG11,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUGGEN,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUGGEN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_CANPORT0),
    }, 65536, &_Condition_65
  },
  { ID_VAR_PLUG11,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUGGEN,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUGGEN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_CANPORT1),
    }, 65536, &_Condition_66
  },
  { ID_VAR_PLUG11,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUGGEN,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUGGEN__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_CANPORT2),
    }, 65536, &_Condition_67
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE1,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE1__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_68
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG1,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG1__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_69
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN1,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN1__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_6a
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI1,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI1__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_6b
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT1,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT1__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_6c
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE1,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE1__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_6d
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG1,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG1__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_6e
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN1,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN1__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_6f
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI1,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI1__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_70
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT1,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT1__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_71
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE2,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE2__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_72
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG2,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG2__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_73
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN2,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN2__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_74
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI2,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI2__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_75
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT2,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT2__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_76
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_77
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE2,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE2__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_78
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG2,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG2__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_79
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN2,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN2__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_7a
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI2,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI2__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_7b
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT2,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT2__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_7c
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_7d
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE3,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE3__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_7e
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG3,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG3__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_7f
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN3,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN3__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_80
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI3,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI3__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_81
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT3,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT3__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_82
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_83
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE3,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE3__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_84
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG3,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG3__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_85
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN3,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN3__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_86
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI3,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI3__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_87
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT3,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT3__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_88
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_89
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE4,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE4__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_8a
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG4,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG4__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_8b
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN4,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN4__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_8c
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI4,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI4__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_8d
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT4,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT4__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_8e
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_8f
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE4,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE4__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_90
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG4,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG4__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_91
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN4,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN4__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_92
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI4,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI4__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_93
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT4,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT4__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_94
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_95
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE5,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE5__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_96
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG5,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG5__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_97
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN5,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN5__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_98
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI5,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI5__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_99
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT5,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT5__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_9a
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_9b
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE5,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE5__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_9c
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG5,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG5__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_9d
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN5,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN5__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_9e
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI5,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI5__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_9f
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT5,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT5__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_a0
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_a1
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE6,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE6__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_a2
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG6,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG6__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_a3
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN6,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN6__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_a4
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI6,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI6__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_a5
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT6,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT6__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_a6
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_a7
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE6,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE6__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_a8
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG6,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG6__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_a9
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN6,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN6__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_aa
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI6,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI6__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_ab
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT6,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT6__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_ac
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_ad
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE7,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE7__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_ae
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG7,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG7__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_af
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN7,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN7__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_b0
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI7,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI7__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_b1
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT7,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT7__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_b2
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_b3
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE7,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE7__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_b4
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG7,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG7__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_b5
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN7,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN7__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_b6
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI7,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI7__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_b7
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT7,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT7__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_b8
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_b9
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE8,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE8__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_ba
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG8,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG8__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_bb
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN8,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN8__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_bc
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI8,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI8__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_bd
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT8,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT8__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_be
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_bf
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE8,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE8__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_c0
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG8,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG8__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_c1
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN8,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN8__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_c2
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI8,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI8__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_c3
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT8,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT8__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_c4
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_c5
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE9,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE9__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_c6
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG9,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG9__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_c7
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN9,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN9__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_c8
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI9,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI9__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_c9
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT9,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT9__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_ca
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_cb
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE9,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE9__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_cc
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG9,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG9__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_cd
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN9,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN9__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_ce
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI9,           APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI9__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_cf
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT9,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT9__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_d0
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_d1
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE10,       APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE10__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_d2
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG10,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG10__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_d3
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN10,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN10__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_d4
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI10,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI10__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_d5
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT10,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT10__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_d6
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_d7
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE10,       APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE10__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_d8
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_PLUG10,         APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_PLUG10__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_d9
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN10,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN10__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_da
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI10,          APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI10__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_db
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_COUNT10,        APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_COUNT10__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_dc
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_dd
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_de
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_df
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_e0
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_e1
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_e2
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_e3
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_e4
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_e5
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_e6
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_e7
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_e8
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_e9
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_ea
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_eb
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_ec
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_ed
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_ee
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_ef
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_f0
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_f1
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_f2
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_f3
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_f4
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_f5
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_f6
  },
  { ID_VAR_DESCRIPT1,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_f7
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_f8
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_f9
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_fa
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_fb
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_fc
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_fd
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_fe
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_ff
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_100
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_101
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_102
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_103
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_104
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_105
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_106
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_107
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_108
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_109
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_10a
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_10b
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_10c
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_10d
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_10e
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_10f
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_110
  },
  { ID_VAR_DESCRIPT2,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION2,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION2__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_111
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_112
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_113
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_114
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_115
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_116
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_117
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_118
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_119
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_11a
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_11b
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_11c
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_11d
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_11e
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_11f
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_120
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_121
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_122
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_123
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_124
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_125
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_126
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_127
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_128
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_129
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_12a
  },
  { ID_VAR_DESCRIPT3,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION3,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION3__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_12b
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_12c
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_12d
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_12e
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_12f
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_130
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_131
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_132
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_133
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_134
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_135
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_136
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_137
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_138
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_139
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_13a
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_13b
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_13c
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_13d
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_13e
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_13f
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_140
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_141
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_142
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_143
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_144
  },
  { ID_VAR_DESCRIPT4,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION4,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION4__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_145
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_146
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_147
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_148
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_149
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_14a
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_14b
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_14c
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_14d
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_14e
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_14f
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_150
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_151
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_152
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_153
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_154
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_155
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_156
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_157
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_158
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_159
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_15a
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_15b
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_15c
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_15d
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_15e
  },
  { ID_VAR_DESCRIPT5,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION5,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION5__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_15f
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_160
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_161
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_162
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_163
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_164
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_165
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_166
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_167
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_168
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_169
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_16a
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_16b
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_16c
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_16d
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_16e
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_16f
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_170
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_171
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_172
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_173
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_174
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_175
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_176
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_177
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_178
  },
  { ID_VAR_DESCRIPT6,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION6,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION6__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_179
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_17a
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_17b
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_17c
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_17d
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_17e
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_17f
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_180
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_181
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_182
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_183
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_184
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_185
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_186
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_187
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_188
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_189
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_18a
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_18b
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_18c
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_18d
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_18e
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_18f
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_190
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_191
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_192
  },
  { ID_VAR_DESCRIPT7,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION7,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION7__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_193
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_194
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_195
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_196
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_197
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_198
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_199
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_19a
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_19b
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_19c
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_19d
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_19e
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_19f
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_1a0
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_1a1
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_1a2
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_1a3
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_1a4
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_1a5
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_1a6
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_1a7
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_1a8
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_1a9
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_1aa
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_1ab
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_1ac
  },
  { ID_VAR_DESCRIPT8,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION8,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION8__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_1ad
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_1ae
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_1af
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_1b0
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_1b1
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_1b2
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_1b3
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_1b4
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_1b5
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_1b6
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_1b7
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_1b8
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_1b9
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_1ba
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_1bb
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_1bc
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_1bd
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_1be
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_1bf
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_1c0
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_1c1
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_1c2
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_1c3
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_1c4
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_1c5
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_1c6
  },
  { ID_VAR_DESCRIPT9,       WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION9,   APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION9__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_1c7
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_1c8
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_1c9
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_1ca
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_1cb
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_1cc
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_1cd
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_1ce
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_1cf
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_1d0
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_1d1
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_1d2
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_1d3
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_1d4
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_1d5
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_1d6
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_1d7
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_1d8
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_1d9
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_1da
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_1db
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_1dc
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_1dd
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_1de
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_1df
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_1e0
  },
  { ID_VAR_DESCRIPT10,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION10,  APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION10__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_1e1
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG1),
    }, 65536, &_Condition_1e2
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG2),
    }, 65536, &_Condition_1e3
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG3),
    }, 65536, &_Condition_1e4
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG4),
    }, 65536, &_Condition_1e5
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG5),
    }, 65536, &_Condition_1e6
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG6),
    }, 65536, &_Condition_1e7
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG7),
    }, 65536, &_Condition_1e8
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG8),
    }, 65536, &_Condition_1e9
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG9),
    }, 65536, &_Condition_1ea
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG10),
    }, 65536, &_Condition_1eb
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG11),
    }, 65536, &_Condition_1ec
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG12),
    }, 65536, &_Condition_1ed
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG13),
    }, 65536, &_Condition_1ee
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG14),
    }, 65536, &_Condition_1ef
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG15),
    }, 65536, &_Condition_1f0
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG16),
    }, 65536, &_Condition_1f1
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG17),
    }, 65536, &_Condition_1f2
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG18),
    }, 65536, &_Condition_1f3
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG19),
    }, 65536, &_Condition_1f4
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG20),
    }, 65536, &_Condition_1f5
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG21),
    }, 65536, &_Condition_1f6
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG22),
    }, 65536, &_Condition_1f7
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG23),
    }, 65536, &_Condition_1f8
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG24),
    }, 65536, &_Condition_1f9
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG25),
    }, 65536, &_Condition_1fa
  },
  { ID_VAR_DESCRIPT11,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTIONGEN, APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTIONGEN__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG26),
    }, 65536, &_Condition_1fb
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETCOLOR,
    { ARG_V(0xffbebe00),
    }, 65536, &_Condition_1fc
  },
  { ID_VAR_ROW_COLOUR,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DESCRIPTION1,   APPW_JOB_SETCOLOR,       ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DESCRIPTION1__APPW_JOB_SETCOLOR_0,
    { ARG_V(GUI_BLACK),
    }, 65536, &_Condition_1fd
  },
  { ID_VAR_DIAG_POPUP,      WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_MODALMESSAGE,   ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_DIAGNOSTIC_POPUP),
    }, 0, &_Condition_1fe
  },
  { ID_VAR_DIAG_POPUP,      WM_NOTIFICATION_VALUE_CHANGED,    0,                      APPW_JOB_CLOSESCREEN,    ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_DIAGNOSTIC_POPUP),
    }, 0, &_Condition_1ff
  },
  { ID_VAR_SOURCE1,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE1,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE1__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_200
  },
  { ID_VAR_SOURCE2,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE2,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE2__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_201
  },
  { ID_VAR_SOURCE3,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE3,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE3__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_202
  },
  { ID_VAR_SOURCE4,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE4,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE4__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_203
  },
  { ID_VAR_SOURCE5,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE5,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE5__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_204
  },
  { ID_VAR_SOURCE6,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE6,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE6__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_205
  },
  { ID_VAR_SOURCE7,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE7,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE7__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_206
  },
  { ID_VAR_SOURCE8,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE8,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE8__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_207
  },
  { ID_VAR_SOURCE9,         WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE9,        APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE9__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_208
  },
  { ID_VAR_SOURCE10,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCE10,       APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCE10__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_209
  },
  { ID_VAR_SOURCE11,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SOURCEGEN,      APPW_JOB_SETTEXT,        ID_SCREEN_DIAGNOSTIC__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SOURCEGEN__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_20a
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
*       ID_SCREEN_DIAGNOSTIC_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_DIAGNOSTIC_RootInfo = {
  ID_SCREEN_DIAGNOSTIC,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_DIAGNOSTIC,
  0
};

/*************************** End of file ****************************/
