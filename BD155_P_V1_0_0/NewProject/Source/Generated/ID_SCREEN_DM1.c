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
File        : ID_SCREEN_DM1.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "Resource.h"
#include "ID_SCREEN_DM1.h"

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
    ID_SCREEN_DM1, 0,
    { { { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 345, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 0, 0, 0 },
      },
      0, 0, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_DM1, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 5, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 3, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      790, 130, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_ERROR, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 109, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 40, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      56, 56, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MSG_DIAG, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 251, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      200, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ERRORCNT1, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 455, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      30, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MSG_OF, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 487, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      45, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ERRORCNT2, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 533, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 15, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      32, 25, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MSG_DEVID, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 94, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      90, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DEVID, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 190, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      90, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MSG_SPN, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 290, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_SPN, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 350, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      75, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MSG_FMI, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 430, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_FMI, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 485, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      60, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_ADD, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 655, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      50, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_MSG_ADD, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 555, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      90, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_DM_MSG, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 165, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 40, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      560, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_LEFT, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 20, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 40, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_Previous, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 14, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      72, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_IMAGE_Create,
    ID_IMAGE_RIGHT, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 725, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 40, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 55, 0, 0, 0, 0
    },
    { 0, 0 }
  },
  { WM_OBJECT_TEXT_Create,
    ID_TEXT_Next, ID_SCREEN_DM1,
    { { { DISPOSE_MODE_REL_PARENT, 729, 0, 0 },
        { DISPOSE_MODE_REL_PARENT, 100, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
        { DISPOSE_MODE_NULL, 0, 0, 0 },
      },
      55, 20, 0, 0, 0, 0
    },
    { 0, 0 }
  },
};

/*********************************************************************
*
*       _aSetup
*/
static const APPW_SETUP_ITEM _aSetup[] = {
  { ID_IMAGE_DM1,      APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_DM1,      APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acGrey_Red790x130T10),
                                                     ARG_V(3712), } },
  { ID_IMAGE_ERROR,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_ERROR,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acError_ind1),
                                                     ARG_V(3598), } },
  { ID_TEXT_MSG_DIAG,  APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_MSG_DIAG,  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_MSG_DIAG,  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_30) } },
  { ID_TEXT_MSG_DIAG,  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_ERRORCNT1, APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_ERRORCNT1, APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_ERRORCNT1, APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_ERRORCNT1, APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_MSG_OF,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_MSG_OF,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_MSG_OF,    APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_31) } },
  { ID_TEXT_MSG_OF,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_ERRORCNT2, APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_ERRORCNT2, APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_ERRORCNT2, APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_ERRORCNT2, APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_MSG_DEVID, APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_MSG_DEVID, APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_MSG_DEVID, APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_32) } },
  { ID_TEXT_MSG_DEVID, APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_DEVID,     APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_DEVID,     APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_DEVID,     APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_MSG_SPN,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_MSG_SPN,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_MSG_SPN,   APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_33) } },
  { ID_TEXT_MSG_SPN,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_SPN,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_SPN,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_SPN,       APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_SPN,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_MSG_FMI,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_MSG_FMI,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_MSG_FMI,   APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_34) } },
  { ID_TEXT_MSG_FMI,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_FMI,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_FMI,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_FMI,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_FMI,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_FMI,       APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_ADD,       APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_ADD,       APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_ADD,       APPW_SET_PROP_DECMODE,      { ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_ADD,       APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_ADD,       APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_ADD,       APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MSG_ADD,   APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_MSG_ADD,   APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_MSG_ADD,   APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_MSG_ADD,   APPW_SET_PROP_BKCOLOR,      { ARG_V(0x00ffffff) } },
  { ID_TEXT_MSG_ADD,   APPW_SET_PROP_COLOR2,       { ARG_V(0x00ffffff) } },
  { ID_TEXT_MSG_ADD,   APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_35) } },
  { ID_TEXT_DM_MSG,    APPW_SET_PROP_COLOR,        { ARG_V(GUI_BLUE) } },
  { ID_TEXT_DM_MSG,    APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_DM_MSG,    APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_TEXT_DM_MSG,    APPW_SET_PROP_WRAP,         { ARG_V(0) } },
  { ID_IMAGE_LEFT,     APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_LEFT,     APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acLeft),
                                                     ARG_V(19863), } },
  { ID_TEXT_Previous,  APPW_SET_PROP_COLOR,        { ARG_V(0xff00007f) } },
  { ID_TEXT_Previous,  APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_Previous,  APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_PREVIOUS) } },
  { ID_TEXT_Previous,  APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
  { ID_IMAGE_RIGHT,    APPW_SET_PROP_TILE,         { ARG_V(0) } },
  { ID_IMAGE_RIGHT,    APPW_SET_PROP_SBITMAP,      { ARG_VP(0, acright1),
                                                     ARG_V(19421), } },
  { ID_TEXT_Next,      APPW_SET_PROP_COLOR,        { ARG_V(0xff00007f) } },
  { ID_TEXT_Next,      APPW_SET_PROP_ALIGNTEXT,    { ARG_V(GUI_ALIGN_HCENTER | GUI_ALIGN_VCENTER),
                                                     ARG_V(0),
                                                     ARG_V(0) } },
  { ID_TEXT_Next,      APPW_SET_PROP_TEXTID,       { ARG_V(ID_RTEXT_NEXT) } },
  { ID_TEXT_Next,      APPW_SET_PROP_FONT,         { ARG_VP(0, acCalibri_22_Bold_EXT_AA4) } },
};

/*********************************************************************
*
*       Comparison(s)
*/
static APPW_COND_COMP _aComparison_02[] = {
  { { { APPW_IS_VAR, ID_VAR_DEVID }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_03[] = {
  { { { APPW_IS_VAR, ID_VAR_DEVID }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_05[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUPCOL }, { APPW_IS_VAL, 0 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_06[] = {
  { { { APPW_IS_VAR, ID_VAR_POPUPCOL }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_09[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 1 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0a[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 2 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0b[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 3 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0c[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 4 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0d[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 5 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0e[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 6 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_0f[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 7 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_10[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 8 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_11[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 9 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_12[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 10 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_13[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 11 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_14[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 12 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_15[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 13 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_16[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 14 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_17[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 15 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_18[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 16 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_19[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 17 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1a[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 18 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1b[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 19 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1c[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 20 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1d[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 21 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1e[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 22 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_1f[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 23 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_20[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 24 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_21[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 25 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_22[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 26 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_23[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 27 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_24[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 28 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_25[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 29 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_26[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 30 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_27[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 31 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_28[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 32 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_29[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 33 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2a[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 34 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2b[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 35 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2c[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 36 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2d[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 37 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2e[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 38 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_2f[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 39 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_30[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 40 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_31[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 41 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_32[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 42 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_33[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 43 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_34[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 44 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_35[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 45 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_36[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 46 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_37[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 47 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_38[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 48 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_39[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 49 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3a[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 50 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3b[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 51 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3c[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 52 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3d[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 53 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3e[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 54 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_3f[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 55 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_40[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 56 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_41[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 57 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_42[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 58 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_43[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 59 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_44[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 60 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_45[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 61 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_46[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 62 } }, APPW__CompareIsEqual },
};

static APPW_COND_COMP _aComparison_47[] = {
  { { { APPW_IS_VAR, ID_VAR_DM_MSG }, { APPW_IS_VAL, 63 } }, APPW__CompareIsEqual },
};

/*********************************************************************
*
*       Condition(s)
*/
static const APPW_COND _Condition_02 = { "A", _aComparison_02, GUI_COUNTOF(_aComparison_02) };
static const APPW_COND _Condition_03 = { "A", _aComparison_03, GUI_COUNTOF(_aComparison_03) };
static const APPW_COND _Condition_05 = { "A", _aComparison_05, GUI_COUNTOF(_aComparison_05) };
static const APPW_COND _Condition_06 = { "A", _aComparison_06, GUI_COUNTOF(_aComparison_06) };
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

/*********************************************************************
*
*       _aAction
*/
static const APPW_ACTION_ITEM _aAction[] = {
  { ID_VAR_ERRCNT1,    WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ERRORCNT1, APPW_JOB_SETVALUE,       ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ERRORCNT1__APPW_JOB_SETVALUE,
    { ARG_V(0),
    }, 0, NULL
  },
  { ID_VAR_ERRCNT2,    WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ERRORCNT2, APPW_JOB_SETVALUE,       ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ERRORCNT2__APPW_JOB_SETVALUE,
    { ARG_V(4144),
    }, 65537, NULL
  },
  { ID_VAR_DEVID,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DEVID,     APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DEVID__APPW_JOB_SETTEXT,
    { ARG_V(ID_RTEXT_DEVID1),
    }, 65536, &_Condition_02
  },
  { ID_VAR_DEVID,      WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DEVID,     APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DEVID__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_RTEXT_DEVID2),
    }, 65536, &_Condition_03
  },
  { ID_VAR_SPN,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_SPN,       APPW_JOB_SETVALUE,       ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_SPN__APPW_JOB_SETVALUE,
    { ARG_V(4146),
    }, 65537, NULL
  },
  { ID_VAR_POPUPCOL,   WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_DM1,      APPW_JOB_SETBITMAP,      ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_DM1__APPW_JOB_SETBITMAP_0,
    { ARG_V(4152),
      ARG_VP(0, acGrey_Green790x130T10),
      ARG_V(3871),
    }, 1, &_Condition_05
  },
  { ID_VAR_POPUPCOL,   WM_NOTIFICATION_VALUE_CHANGED,    ID_IMAGE_DM1,      APPW_JOB_SETBITMAP,      ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_IMAGE_DM1__APPW_JOB_SETBITMAP,
    { ARG_V(4152),
      ARG_VP(0, acGrey_Red790x130T10),
      ARG_V(3712),
    }, 1, &_Condition_06
  },
  { ID_VAR_FMI,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_FMI,       APPW_JOB_SETVALUE,       ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_FMI__APPW_JOB_SETVALUE,
    { ARG_V(4147),
    }, 65537, NULL
  },
  { ID_VAR_ADD,        WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_ADD,       APPW_JOB_SETVALUE,       ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_ADD__APPW_JOB_SETVALUE,
    { ARG_V(4148),
    }, 65537, NULL
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT,
    { ARG_V(ID_DMMESG_P_1),
    }, 65536, &_Condition_09
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_0,
    { ARG_V(ID_DMMESG_P_2),
    }, 65536, &_Condition_0a
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_1,
    { ARG_V(ID_DMMESG_P_3),
    }, 65536, &_Condition_0b
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_2,
    { ARG_V(ID_DMMESG_P_4),
    }, 65536, &_Condition_0c
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_3,
    { ARG_V(ID_DMMESG_P_5),
    }, 65536, &_Condition_0d
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_4,
    { ARG_V(ID_DMMESG_P_6),
    }, 65536, &_Condition_0e
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_5,
    { ARG_V(ID_DMMESG_P_7),
    }, 65536, &_Condition_0f
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_6,
    { ARG_V(ID_DMMESG_P_8),
    }, 65536, &_Condition_10
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_7,
    { ARG_V(ID_DMMESG_P_9),
    }, 65536, &_Condition_11
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_8,
    { ARG_V(ID_DMMESG_P_10),
    }, 65536, &_Condition_12
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_9,
    { ARG_V(ID_DMMESG_P_11),
    }, 65536, &_Condition_13
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_10,
    { ARG_V(ID_DMMESG_P_12),
    }, 65536, &_Condition_14
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_11,
    { ARG_V(ID_DMMESG_P_13),
    }, 65536, &_Condition_15
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_12,
    { ARG_V(ID_DMMESG_P_14),
    }, 65536, &_Condition_16
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_13,
    { ARG_V(ID_DMMESG_P_15),
    }, 65536, &_Condition_17
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_14,
    { ARG_V(ID_DMMESG_P_16),
    }, 65536, &_Condition_18
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_15,
    { ARG_V(ID_DMMESG_P_17),
    }, 65536, &_Condition_19
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_16,
    { ARG_V(ID_DMMESG_P_18),
    }, 65536, &_Condition_1a
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_17,
    { ARG_V(ID_DMMESG_P_19),
    }, 65536, &_Condition_1b
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_18,
    { ARG_V(ID_DMMESG_P_20),
    }, 65536, &_Condition_1c
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_19,
    { ARG_V(ID_DMMESG_P_21),
    }, 65536, &_Condition_1d
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_20,
    { ARG_V(ID_DMMESG_P_22),
    }, 65536, &_Condition_1e
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_21,
    { ARG_V(ID_DMMESG_P_23),
    }, 65536, &_Condition_1f
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_22,
    { ARG_V(ID_DMMESG_P_24),
    }, 65536, &_Condition_20
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_23,
    { ARG_V(ID_DMMESG_P_25),
    }, 65536, &_Condition_21
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_24,
    { ARG_V(ID_DMMESG_P_26),
    }, 65536, &_Condition_22
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_25,
    { ARG_V(ID_DMMESG27),
    }, 65536, &_Condition_23
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_26,
    { ARG_V(ID_DMMESG28),
    }, 65536, &_Condition_24
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_27,
    { ARG_V(ID_DMMESG29),
    }, 65536, &_Condition_25
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_28,
    { ARG_V(ID_DMMESG30),
    }, 65536, &_Condition_26
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_29,
    { ARG_V(ID_DMMESG31),
    }, 65536, &_Condition_27
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_30,
    { ARG_V(ID_DMMESG32),
    }, 65536, &_Condition_28
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_31,
    { ARG_V(ID_DMMESG33),
    }, 65536, &_Condition_29
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_32,
    { ARG_V(ID_DMMESG34),
    }, 65536, &_Condition_2a
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_33,
    { ARG_V(ID_DMMESG35),
    }, 65536, &_Condition_2b
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_34,
    { ARG_V(ID_DMMESG36),
    }, 65536, &_Condition_2c
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_35,
    { ARG_V(ID_DMMESG37),
    }, 65536, &_Condition_2d
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_36,
    { ARG_V(ID_DMMESG38),
    }, 65536, &_Condition_2e
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_37,
    { ARG_V(ID_DMMESG39),
    }, 65536, &_Condition_2f
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_38,
    { ARG_V(ID_DMMESG40),
    }, 65536, &_Condition_30
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_39,
    { ARG_V(ID_DMMESG41),
    }, 65536, &_Condition_31
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_40,
    { ARG_V(ID_DMMESG42),
    }, 65536, &_Condition_32
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_41,
    { ARG_V(ID_DMMESG43),
    }, 65536, &_Condition_33
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_42,
    { ARG_V(ID_DMMESG44),
    }, 65536, &_Condition_34
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_43,
    { ARG_V(ID_DMMESG45),
    }, 65536, &_Condition_35
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_44,
    { ARG_V(ID_DMMESG46),
    }, 65536, &_Condition_36
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_45,
    { ARG_V(ID_DMMESG47),
    }, 65536, &_Condition_37
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_46,
    { ARG_V(ID_DMMESG48),
    }, 65536, &_Condition_38
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_47,
    { ARG_V(ID_DMMESG49),
    }, 65536, &_Condition_39
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_48,
    { ARG_V(ID_DMMESG50),
    }, 65536, &_Condition_3a
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_49,
    { ARG_V(ID_DMMESG51),
    }, 65536, &_Condition_3b
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_50,
    { ARG_V(ID_DMMESG52),
    }, 65536, &_Condition_3c
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_51,
    { ARG_V(ID_DMMESG53),
    }, 65536, &_Condition_3d
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_52,
    { ARG_V(ID_DMMESG54),
    }, 65536, &_Condition_3e
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_53,
    { ARG_V(ID_DMMESG55),
    }, 65536, &_Condition_3f
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_54,
    { ARG_V(ID_DMMESG56),
    }, 65536, &_Condition_40
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_55,
    { ARG_V(ID_DMMESG57),
    }, 65536, &_Condition_41
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_56,
    { ARG_V(ID_DMMESG58),
    }, 65536, &_Condition_42
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_57,
    { ARG_V(ID_DMMESG59),
    }, 65536, &_Condition_43
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_58,
    { ARG_V(ID_DMMESG60),
    }, 65536, &_Condition_44
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_59,
    { ARG_V(ID_DMMESG61),
    }, 65536, &_Condition_45
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_60,
    { ARG_V(ID_DMMESG62),
    }, 65536, &_Condition_46
  },
  { ID_VAR_DM_MSG,     WM_NOTIFICATION_VALUE_CHANGED,    ID_TEXT_DM_MSG,    APPW_JOB_SETTEXT,        ID_SCREEN_DM1__WM_NOTIFICATION_VALUE_CHANGED__ID_TEXT_DM_MSG__APPW_JOB_SETTEXT_61,
    { ARG_V(ID_DMMESG63),
    }, 65536, &_Condition_47
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
*       ID_SCREEN_DM1_RootInfo
*/
APPW_ROOT_INFO ID_SCREEN_DM1_RootInfo = {
  ID_SCREEN_DM1,
  _aCreate, GUI_COUNTOF(_aCreate),
  _aSetup,  GUI_COUNTOF(_aSetup),
  _aAction, GUI_COUNTOF(_aAction),
  cbID_SCREEN_DM1,
  0
};

/*************************** End of file ****************************/
