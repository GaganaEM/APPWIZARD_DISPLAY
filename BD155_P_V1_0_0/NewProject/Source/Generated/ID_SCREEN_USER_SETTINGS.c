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
File        : ID_SCREEN_USER_SETTINGS.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_USER_SETTINGS.h"

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
    ID_SCREEN_USER_SETTINGS, 0,
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
    ID_IMAGE_00, ID_SCREEN_USER_SETTINGS,
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
    ID_EDIT_00, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 280, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 2, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      239, 40, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_01, ID_SCREEN_USER_SETTINGS,
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
    ID_IMAGE_05, ID_SCREEN_USER_SETTINGS,
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
    ID_IMAGE_02, ID_SCREEN_USER_SETTINGS,
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
    ID_IMAGE_06, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 728, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 137, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_07, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 728, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 267, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_LIGHT, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 307, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 57, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      230, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_04, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 311, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 61, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      222, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_BRIGHTNESS, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 307, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 120, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      230, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_06_Copy, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 311, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 124, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      222, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_DAY, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 307, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 183, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 311, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_01, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 131, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 61, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      152, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_03, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 285, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 58, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_04, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 88, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      195, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_05, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 285, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 121, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_06, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 119, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 250, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      164, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_07, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 285, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 184, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_08, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 144, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 124, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      139, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_10, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 285, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 247, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      21, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_MONTH, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 387, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 183, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 391, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_YEAR, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 466, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 183, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy1, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 470, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_HOUR, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 307, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 247, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy2, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 311, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_MINUTE, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 387, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 247, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy3, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 391, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_SECONDS, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 466, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 247, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy4, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 470, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_LIGHT, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 360, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 61, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      100, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_BRIGHTNESS, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 381, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 124, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      49, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_02, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 436, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 124, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      28, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DAY, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 311, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MONTH, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 391, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_YEAR, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 470, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 187, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_06_Copy, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 119, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 278, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      164, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_HOUR, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 311, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MINUTE, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 391, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SECONDS, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 470, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_MERIDIAN, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 545, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 247, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy5, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 549, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MERIDIAN, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 549, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_SCREEN_ON_OFF, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 388, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 419, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy6, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 392, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_SEL_HOME_SCREEN, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 466, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 419, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      67, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_09_Copy7, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 470, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SCREEN_ON_OFF, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 391, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SEL_HOME_SCREEN, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 470, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      59, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGEBLOCK_SELCT_SCREEN, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 131, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 423, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      230, 45, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_WHITE_SELCT_SCREEN, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 135, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 427, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      222, 37, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SELCT_SCREEN, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 135, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 432, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      222, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_HOME, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 465, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 382, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      69, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_01_Copy, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 170, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 382, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      152, 27, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_EDIT_Create,
    ID_EDIT_08_Copy, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 378, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 382, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      86, 32, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SAVE_STATUS, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 333, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 325, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      145, 26, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_SAVE, ID_SCREEN_USER_SETTINGS,
    { { { DISPOSE_MODE_REL_PARENT, 728, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 390, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 90, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_00,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_00,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acBlue_wallpaper),
                                                                 ARG_V(191986), } },
  { ID_EDIT_00,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_YELLOW),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_00,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_00,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_00,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_00,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_00,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_144) } },
  { ID_EDIT_00,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_00,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_40_Bold_EXT_AA4) } },
  { ID_EDIT_00,                    APPW_SET_PROP_LENGTH,       { ARG_V(14) } },
  { ID_IMAGE_01,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_01,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acRestore_defaults_symbol),
                                                                 ARG_V(11063), } },
  { ID_IMAGE_05,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_05,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUP_arrow_Yellow_72x90),
                                                                 ARG_V(5682), } },
  { ID_IMAGE_02,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_02,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_Yellow_72x90),
                                                                 ARG_V(5915), } },
  { ID_IMAGE_06,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acUp_arrow_blue_72x90),
                                                                 ARG_V(6980), } },
  { ID_IMAGE_07,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_07,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acDown_arrow_blue_72x90),
                                                                 ARG_V(7593), } },
  { ID_IMAGEBLOCK_LIGHT,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_LIGHT,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_421x45),
                                                                 ARG_V(264), } },
  { ID_IMAGE_04,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_04,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_IMAGEBLOCK_BRIGHTNESS,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_BRIGHTNESS,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_06_Copy,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_06_Copy,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_IMAGEBLOCK_DAY,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_DAY,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09,                   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09,                   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_EDIT_01,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_01,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_01,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_01,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_01,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_01,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_145) } },
  { ID_EDIT_01,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_01,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_01,                    APPW_SET_PROP_LENGTH,       { ARG_V(16) } },
  { ID_EDIT_03,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_03,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_03,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_03,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_03,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_03,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_03,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_03,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_03,                    APPW_SET_PROP_LENGTH,       { ARG_V(5) } },
  { ID_EDIT_04,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_04,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_04,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_04,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_04,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_04,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_55) } },
  { ID_EDIT_04,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_04,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_04,                    APPW_SET_PROP_LENGTH,       { ARG_V(22) } },
  { ID_EDIT_05,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_05,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_05,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_05,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_05,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_05,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_05,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_05,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_05,                    APPW_SET_PROP_LENGTH,       { ARG_V(16) } },
  { ID_EDIT_06,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_06,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_06,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_06,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_06,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_06,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_56) } },
  { ID_EDIT_06,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_06,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_06,                    APPW_SET_PROP_LENGTH,       { ARG_V(20) } },
  { ID_EDIT_07,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_07,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_07,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_07,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_07,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_07,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_07,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_07,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_07,                    APPW_SET_PROP_LENGTH,       { ARG_V(5) } },
  { ID_EDIT_08,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_08,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_08,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_08,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_08,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_08,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_147) } },
  { ID_EDIT_08,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_08,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_08,                    APPW_SET_PROP_LENGTH,       { ARG_V(12) } },
  { ID_EDIT_10,                    APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_10,                    APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_10,                    APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_10,                    APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_10,                    APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_10,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_27) } },
  { ID_EDIT_10,                    APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_10,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_EDIT_10,                    APPW_SET_PROP_LENGTH,       { ARG_V(5) } },
  { ID_IMAGEBLOCK_MONTH,           APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_MONTH,           APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy,              APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy,              APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_IMAGEBLOCK_YEAR,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_YEAR,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy1,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy1,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_IMAGEBLOCK_HOUR,            APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_HOUR,            APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy2,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy2,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_IMAGEBLOCK_MINUTE,          APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_MINUTE,          APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy3,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy3,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_IMAGEBLOCK_SECONDS,         APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_SECONDS,         APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy4,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy4,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_TEXT_LIGHT,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_LIGHT,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_LIGHT,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_LIGHT,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_LIGHT,                 APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_DAY) } },
  { ID_TEXT_LIGHT,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_BRIGHTNESS,            APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_BRIGHTNESS,            APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_BRIGHTNESS,            APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_BRIGHTNESS,            APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_BRIGHTNESS,            APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_BRIGHTNESS,            APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_02,                    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_02,                    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_02,                    APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                    APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_02,                    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_02,                    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_PER) } },
  { ID_TEXT_DAY,                   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_DAY,                   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_DAY,                   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,                   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_DAY,                   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_DAY,                   APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                                 ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_MONTH,                 APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MONTH,                 APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_MONTH,                 APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,                 APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MONTH,                 APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_MONTH,                 APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                                 ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_YEAR,                  APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_YEAR,                  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_YEAR,                  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,                  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_YEAR,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_YEAR,                  APPW_SET_PROP_DECMODE,      { ARG_V(4),
                                                                 ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_LEFT | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_12HR_format) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_06_Copy,               APPW_SET_PROP_LENGTH,       { ARG_V(20) } },
  { ID_TEXT_HOUR,                  APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_HOUR,                  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_HOUR,                  APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,                  APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_HOUR,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_HOUR,                  APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                                 ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_MINUTE,                APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MINUTE,                APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_MINUTE,                APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,                APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MINUTE,                APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_MINUTE,                APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                                 ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_SECONDS,               APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SECONDS,               APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_SECONDS,               APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,               APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SECONDS,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_SECONDS,               APPW_SET_PROP_DECMODE,      { ARG_V(2),
                                                                 ARG_V(0),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_IMAGEBLOCK_MERIDIAN,        APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_MERIDIAN,        APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy5,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy5,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_TEXT_MERIDIAN,              APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_MERIDIAN,              APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_MERIDIAN,              APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MERIDIAN,              APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MERIDIAN,              APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_IMAGEBLOCK_SCREEN_ON_OFF,   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_SCREEN_ON_OFF,   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy6,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy6,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_IMAGEBLOCK_SEL_HOME_SCREEN, APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_SEL_HOME_SCREEN, APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_09_Copy7,             APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_09_Copy7,             APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_TEXT_SCREEN_ON_OFF,         APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SCREEN_ON_OFF,         APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_SCREEN_ON_OFF,         APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SCREEN_ON_OFF,         APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SCREEN_ON_OFF,         APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_SCREEN_ON_OFF,         APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_ON) } },
  { ID_TEXT_SEL_HOME_SCREEN,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SEL_HOME_SCREEN,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_SEL_HOME_SCREEN,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SEL_HOME_SCREEN,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SEL_HOME_SCREEN,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_SEL_HOME_SCREEN,       APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_ON) } },
  { ID_IMAGEBLOCK_SELCT_SCREEN,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGEBLOCK_SELCT_SCREEN,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_yellow_transparent_421x45),
                                                                 ARG_V(4730), } },
  { ID_IMAGE_WHITE_SELCT_SCREEN,   APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_WHITE_SELCT_SCREEN,   APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acSqr_White_413x37),
                                                                 ARG_V(246), } },
  { ID_TEXT_SELCT_SCREEN,          APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLACK) } },
  { ID_TEXT_SELCT_SCREEN,          APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_SELCT_SCREEN,          APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SELCT_SCREEN,          APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SELCT_SCREEN,          APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_TEXT_SELCT_SCREEN,          APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_speedometer) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_HOME) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_HOME,                  APPW_SET_PROP_LENGTH,       { ARG_V(12) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_screen) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_01_Copy,               APPW_SET_PROP_LENGTH,       { ARG_V(16) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_COLORS,       { ARG_V(GUI_WHITE),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_WHITE) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_ALIGN,        { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_BKCOLORS,     { ARG_V(0x00ffffff),
                                                                 ARG_V(GUI_INVALID_COLOR),
                                                                 ARG_V(GUI_BLACK) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_PERIOD,       { ARG_V(300) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_INVERT,       { ARG_V(0) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_on_off) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_COLOR,        { ARG_V(0x00ffffff) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_24_Bold_EXT_AA4) } },
  { ID_EDIT_08_Copy,               APPW_SET_PROP_LENGTH,       { ARG_V(12) } },
  { ID_TEXT_SAVE_STATUS,           APPW_SET_PROP_COLOR,        { ARG_V(GUI_YELLOW) } },
  { ID_TEXT_SAVE_STATUS,           APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                                 ARG_V(0),
                                                                 ARG_V(0) } },
  { ID_TEXT_SAVE_STATUS,           APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_SAVE_STATUS,           APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_SAVE_STATUS,           APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_28_Bold_EXT_AA4) } },
  { ID_IMAGE_SAVE,                 APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_SAVE,                 APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acsave_icon),
                                                                 ARG_V(3609), } },
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
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_04[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_07[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_08[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 2 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 3 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 4 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 5 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 6 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 7 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_LIGHT }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14[] = {
  { { { APPW_IS_VAR, ID_VAR_LIGHT }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c[] = {
  { { { APPW_IS_VAR, ID_VAR_WARNING }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_WARNING }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e[] = {
  { { { APPW_IS_VAR, ID_VAR_MERIDIAN_EDIT }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f[] = {
  { { { APPW_IS_VAR, ID_VAR_MERIDIAN_EDIT }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_20[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_21[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 8 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_22[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_23[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 9 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_24[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_25[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 10 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_26[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_27[] = {
  { { { APPW_IS_VAR, ID_VAR_ROWSEL }, { APPW_IS_VAL, 11 } }, APPW__CompareIsNotEqual },
};

static APPW_COND_COMP _aComparison_28[] = {
  { { { APPW_IS_VAR, ID_VAR_SCREEN_ON_OFF }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_29[] = {
  { { { APPW_IS_VAR, ID_VAR_SCREEN_ON_OFF }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2a[] = {
  { { { APPW_IS_VAR, ID_VAR_SELCT_HOME_SCREEN }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2b[] = {
  { { { APPW_IS_VAR, ID_VAR_SELCT_HOME_SCREEN }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2c[] = {
  { { { APPW_IS_VAR, ID_VAR_SELCT_SCREEN }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2d[] = {
  { { { APPW_IS_VAR, ID_VAR_SELCT_SCREEN }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2e[] = {
  { { { APPW_IS_VAR, ID_VAR_SELCT_SCREEN }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2f[] = {
  { { { APPW_IS_VAR, ID_VAR_SELCT_SCREEN }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_30[] = {
  { { { APPW_IS_VAR, ID_VAR_SELCT_SCREEN }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_31[] = {
  { { { APPW_IS_VAR, ID_VAR_SAVE_STATUS }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_32[] = {
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

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_DISPSCREEN,             WM_NOTIFICATION_VALUE_CHANGED,    0,                             APPW_JOB_SWAPSCREEN,     ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED,
    { ARG_V(ID_SCREEN_MAINMENU),
    }, 0, &_Condition_00
  },
  { ID_VAR_POPUP,                  WM_NOTIFICATION_VALUE_CHANGED,    0,                             APPW_JOB_MODALMESSAGE,   ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_0,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_01
  },
  { ID_VAR_POPUP,                  WM_NOTIFICATION_VALUE_CHANGED,    0,                             APPW_JOB_CLOSESCREEN,    ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_1,
    { ARG_V(ID_SCREEN_DM1),
    }, 0, &_Condition_02
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_LIGHT,           APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_LIGHT__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_03
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_LIGHT,           APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_LIGHT__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_04
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_BRIGHTNESS,      APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_BRIGHTNESS__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_05
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_BRIGHTNESS,      APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_BRIGHTNESS__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_06
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_DAY,             APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_DAY__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_07
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_DAY,             APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_DAY__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_08
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_MONTH,           APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MONTH__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_09
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_MONTH,           APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MONTH__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_0a
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_YEAR,            APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_YEAR__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0b
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_YEAR,            APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_YEAR__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_0c
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_HOUR,            APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_HOUR__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0d
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_HOUR,            APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_HOUR__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_0e
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_MINUTE,          APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MINUTE__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_0f
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_MINUTE,          APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MINUTE__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_10
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SECONDS,         APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SECONDS__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_11
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SECONDS,         APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SECONDS__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_12
  },
  { ID_VAR_LIGHT,                  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_LIGHT,                 APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_LIGHT__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_DAY),
    }, 65536, &_Condition_13
  },
  { ID_VAR_LIGHT,                  WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_LIGHT,                 APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_LIGHT__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_NIGHT),
    }, 65536, &_Condition_14
  },
  { ID_VAR_DAY_EDIT,               WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DAY,                   APPW_JOB_SETVALUE,       ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DAY__APPW_JOB_SETVALUE_0,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_INTENSITY_PER,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_BRIGHTNESS,            APPW_JOB_SETVALUE,       ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_BRIGHTNESS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MONTH_EDIT,             WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MONTH,                 APPW_JOB_SETVALUE,       ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MONTH__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_YEAR_EDIT,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_YEAR,                  APPW_JOB_SETVALUE,       ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_YEAR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_HOUR_EDIT,              WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_HOUR,                  APPW_JOB_SETVALUE,       ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_HOUR__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_MIN_EDIT,               WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MINUTE,                APPW_JOB_SETVALUE,       ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MINUTE__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_SEC_EDIT,               WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SECONDS,               APPW_JOB_SETVALUE,       ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SECONDS__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_WARNING,                WM_NOTIFICATION_VALUE_CHANGED,    0,                             APPW_JOB_MODALMESSAGE,   ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_2,
    { ARG_V(ID_SCREEN_WARNING_POPUP),
    }, 0, &_Condition_1c
  },
  { ID_VAR_WARNING,                WM_NOTIFICATION_VALUE_CHANGED,    0,                             APPW_JOB_CLOSESCREEN,    ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED_3,
    { ARG_V(ID_SCREEN_WARNING_POPUP),
    }, 0, &_Condition_1d
  },
  { ID_VAR_MERIDIAN_EDIT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MERIDIAN,              APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_AM),
    }, 65536, &_Condition_1e
  },
  { ID_VAR_MERIDIAN_EDIT,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_MERIDIAN,              APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_MERIDIAN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_PM),
    }, 65536, &_Condition_1f
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_MERIDIAN,        APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MERIDIAN__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_20
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_MERIDIAN,        APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_MERIDIAN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_21
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SELCT_SCREEN,    APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SELCT_SCREEN__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_22
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SELCT_SCREEN,    APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SELCT_SCREEN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_23
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SCREEN_ON_OFF,   APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SCREEN_ON_OFF__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_24
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SCREEN_ON_OFF,   APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SCREEN_ON_OFF__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_25
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SEL_HOME_SCREEN, APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SEL_HOME_SCREEN__APPW_JOB_SETBITMAP,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_421x45),
      ARG_V(264),
    }, 1, &_Condition_26
  },
  { ID_VAR_ROWSEL,                 WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGEBLOCK_SEL_HOME_SCREEN, APPW_JOB_SETBITMAP,      ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGEBLOCK_SEL_HOME_SCREEN__APPW_JOB_SETBITMAP_0,
    { ARG_V(4389),
      ARG_VP(0, acSqr_yellow_transparent_421x45),
      ARG_V(4730),
    }, 1, &_Condition_27
  },
  { ID_VAR_SCREEN_ON_OFF,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SCREEN_ON_OFF,         APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SCREEN_ON_OFF__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ON),
    }, 65536, &_Condition_28
  },
  { ID_VAR_SCREEN_ON_OFF,          WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SCREEN_ON_OFF,         APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SCREEN_ON_OFF__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_OFF),
    }, 65536, &_Condition_29
  },
  { ID_VAR_SELCT_HOME_SCREEN,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SEL_HOME_SCREEN,       APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SEL_HOME_SCREEN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_ON),
    }, 65536, &_Condition_2a
  },
  { ID_VAR_SELCT_HOME_SCREEN,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SEL_HOME_SCREEN,       APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SEL_HOME_SCREEN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_OFF),
    }, 65536, &_Condition_2b
  },
  { ID_VAR_SELCT_SCREEN,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SELCT_SCREEN,          APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_speedometer),
    }, 65536, &_Condition_2c
  },
  { ID_VAR_SELCT_SCREEN,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SELCT_SCREEN,          APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_transmission),
    }, 65536, &_Condition_2d
  },
  { ID_VAR_SELCT_SCREEN,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SELCT_SCREEN,          APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_RTEXT_digital_io),
    }, 65536, &_Condition_2e
  },
  { ID_VAR_SELCT_SCREEN,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SELCT_SCREEN,          APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_RTEXT_analog_io),
    }, 65536, &_Condition_2f
  },
  { ID_VAR_SELCT_SCREEN,           WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SELCT_SCREEN,          APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SELCT_SCREEN__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_RTEXT_eng_rpm),
    }, 65536, &_Condition_30
  },
  { ID_VAR_SAVE_STATUS,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SAVE_STATUS,           APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_SPACE),
    }, 65536, &_Condition_31
  },
  { ID_VAR_SAVE_STATUS,            WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SAVE_STATUS,           APPW_JOB_SETTEXT,        ID_SCREEN_USER_SETTINGS__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SAVE_STATUS__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_158),
    }, 65536, &_Condition_32
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
*       ID_SCREEN_USER_SETTINGS_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_USER_SETTINGS_RootInfo = {
  ID_SCREEN_USER_SETTINGS,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_USER_SETTINGS,
  0
};

/*************************** End of file ****************************/
