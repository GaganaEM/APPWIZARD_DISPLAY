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
File        : APPWConf.c
Purpose     : Generated file do NOT edit!
---------------------------END-OF-HEADER------------------------------
*/

#include "AppWizard.h"
#include "Resource.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define XSIZE_PHYS 800
#define YSIZE_PHYS 480
#define COLOR_CONVERSION GUICC_M8888I
#define DISPLAY_DRIVER GUIDRV_WIN32
#define NUM_BUFFERS   2
#define _appDrawing NULL
#define _NumDrawings 0

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
/*********************************************************************
*
*       _apRootList
*/
static APPW_ROOT_INFO * _apRootList[] = {
  &ID_SCREEN_BOOT_RootInfo,
  &ID_SCREEN_BD155_RootInfo,
  &ID_SCREEN_RTC_RootInfo,
  &ID_SCREEN_NAVIPOPUP_RootInfo,
  &ID_SCREEN_INTENSITY_RootInfo,
  &ID_SCREEN_DM1_RootInfo,
  &ID_SCREEN_MAIN_DAY_RootInfo,
  &ID_SCREEN_MAIN_NIGHT_RootInfo,
  &ID_SCREEN_MAIN2_DAY_RootInfo,
  &ID_SCREEN_MAIN2_NIGHT_RootInfo,
  &ID_SCREEN_RAWVALUE_ANALOG_RootInfo,
  &ID_SCREEN_RAWVALUE_IO_RootInfo,
  &ID_SCREEN_PASSWORD_RootInfo,
  &ID_SCREEN_MAINMENU_RootInfo,
  &ID_SCREEN_UTILITIES_RootInfo,
  &ID_SCREEN_SYSTEM_SETUP_DATA_RootInfo,
  &ID_SCREEN_CHANGEPASSWORD_RootInfo,
  &ID_SCREEN_RAW_CAN_DATA_RootInfo,
  &ID_SCREEN_DATA_LOGGING_RootInfo,
  &ID_SCREEN_FAULT_LOGGING_RootInfo,
  &ID_SCREEN_DIAGNOSTIC_RootInfo,
  &ID_SCREEN_USER_SETTINGS_RootInfo,
  &ID_SCREEN_SYSTEM_SETTINGS_RootInfo,
  &ID_SCREEN_SERVICE_REMINDER_RootInfo,
  &ID_SCREEN_IDENTIFICATION_RootInfo,
  &ID_SCREEN_KEYPAD_RootInfo,
  &ID_SCREEN_DIAGNOSTIC_POPUP_RootInfo,
  &ID_SCREEN_INVALID_PASSWORD_RootInfo,
  &ID_SCREEN_WARNING_POPUP_RootInfo,
  &ID_SCREEN_PENDRIVE_DETECT_POPUP_RootInfo,
  &ID_SCREEN_SDCARD_DETECT_RootInfo,
  &ID_SCREEN_ENGHRS_POPUP_RootInfo,
  &ID_SCREEN_ENGFUELRATE_POPUP_RootInfo,
  &ID_SCREEN_SHFTWSCLKSETTING_RootInfo,
  &ID_SCREEN_SHFTWSWRKINGHRS_LOG_RootInfo,
  &ID_SCREEN_DIAGNOSTICS_2_RootInfo,
  &ID_SCREEN_SWCS_ERROR_RootInfo,
  &ID_SCREEN_ENGHRS_EDIT_RootInfo,
};

/*********************************************************************
*
*       _NumScreens
*/
static unsigned _NumScreens = GUI_COUNTOF(_apRootList);

/*********************************************************************
*
*       _aVarList
*/
static APPW_VAR_OBJECT _aVarList[] = {
  { ID_VAR_00, 0, 0, NULL },
  { ID_VAR_01, 0, 0, NULL },
  { ID_VAR_02, 0, 0, NULL },
  { ID_VAR_03, 0, 0, NULL },
  { ID_VAR_04, 0, 0, NULL },
  { ID_VAR_05, 0, 0, NULL },
  { ID_VAR_ICON01, 0, 0, NULL },
  { ID_VAR_ICON02, 0, 0, NULL },
  { ID_VAR_ICON03, 0, 0, NULL },
  { ID_VAR_ICON04, 0, 0, NULL },
  { ID_VAR_ICON05, 0, 0, NULL },
  { ID_VAR_ICON06, 0, 0, NULL },
  { ID_VAR_ICON07, 0, 0, NULL },
  { ID_VAR_ICON08, 0, 0, NULL },
  { ID_VAR_ICON09, 0, 0, NULL },
  { ID_VAR_ICON10, 0, 0, NULL },
  { ID_VAR_ICON11, 0, 0, NULL },
  { ID_VAR_ICON12, 0, 0, NULL },
  { ID_VAR_ICON13, 0, 0, NULL },
  { ID_VAR_ICON14, 0, 0, NULL },
  { ID_VAR_ICON15, 0, 0, NULL },
  { ID_VAR_ICON16, 0, 0, NULL },
  { ID_VAR_ICON17, 0, 0, NULL },
  { ID_VAR_ICON18, 0, 0, NULL },
  { ID_VAR_NAVIPOPUP, 0, 0, NULL },
  { ID_VAR_CHANGE_LUM, 0, 0, NULL },
  { ID_VAR_CHECKTRANS, 0, 0, NULL },
  { ID_VAR_DISPSCREEN, 0, 0, NULL },
  { ID_VAR_POPUP, 0, 0, NULL },
  { ID_VAR_TXT_ECT, 0, 0, NULL },
  { ID_VAR_TXT_EOP, 0, 0, NULL },
  { ID_VAR_TXT_FUEL, 0, 0, NULL },
  { ID_VAR_TXT_VOL, 0, 0, NULL },
  { ID_VAR_TXT_RPM, 0, 0, NULL },
  { ID_VAR_TXT_KMPH, 0, 0, NULL },
  { ID_VAR_REVCOL, 0, 0, NULL },
  { ID_VAR_ODO, 0, 0, NULL },
  { ID_VAR_HRMETER, 0, 0, NULL },
  { ID_VAR_DM_MSG, 0, 0, NULL },
  { ID_VAR_BLOCK_SELECTED, 0, 0, NULL },
  { ID_VAR_ROW_COLOUR, 0, 0, NULL },
  { ID_VAR_DAY, 0, 0, NULL },
  { ID_VAR_MONTH, 0, 0, NULL },
  { ID_VAR_YEAR, 0, 0, NULL },
  { ID_VAR_HOUR, 0, 0, NULL },
  { ID_VAR_MINUTE, 0, 0, NULL },
  { ID_VAR_MEREDIAN, 0, 0, NULL },
  { ID_VAR_ERRCNT1, 0, 0, NULL },
  { ID_VAR_ERRCNT2, 0, 0, NULL },
  { ID_VAR_DEVID, 0, 0, NULL },
  { ID_VAR_SPN, 0, 0, NULL },
  { ID_VAR_FMI, 0, 0, NULL },
  { ID_VAR_ADD, 0, 0, NULL },
  { ID_VAR_RPM, 0, 0, NULL },
  { ID_VAR_KM, 0, 0, NULL },
  { ID_VAR_INTENSITY_PER, 0, 0, NULL },
  { ID_VAR_POPUPCOL, 0, 0, NULL },
  { ID_VAR_EOP, 0, 0, NULL },
  { ID_VAR_MODE, 0, 0, NULL },
  { ID_VAR_EOT, 0, 0, NULL },
  { ID_VAR_FUEL, 0, 0, NULL },
  { ID_VAR_BV, 0, 0, NULL },
  { ID_VAR_TOP, 0, 0, NULL },
  { ID_VAR_ECT2, 0, 0, NULL },
  { ID_VAR_VOLT, 0, 0, NULL },
  { ID_VAR_CURDISP1, 0, 0, NULL },
  { ID_VAR_CURDISP2, 0, 0, NULL },
  { ID_VAR_CURDISP3, 0, 0, NULL },
  { ID_VAR_CURDISP4, 0, 0, NULL },
  { ID_VAR_CURDISP5, 0, 0, NULL },
  { ID_VAR_PWDRETRY, 0, 0, NULL },
  { ID_VAR_30SECTIMER, 0, 0, NULL },
  { ID_VAR_RECSTATUS, 0, 0, NULL },
  { ID_VAR_READSTATUS, 0, 0, NULL },
  { ID_VAR_COPYSTATUS, 0, 0, NULL },
  { ID_VAR_IDSTATUS, 0, 0, NULL },
  { ID_VAR_SEC, 0, 0, NULL },
  { ID_VAR_LOGSIZE, 0, 0, NULL },
  { ID_VAR_AI1RAW, 0, 0, NULL },
  { ID_VAR_AI2RAW, 0, 0, NULL },
  { ID_VAR_AI3RAW, 0, 0, NULL },
  { ID_VAR_AI4RAW, 0, 0, NULL },
  { ID_VAR_AI5RAW, 0, 0, NULL },
  { ID_VAR_AI6RAW, 0, 0, NULL },
  { ID_VAR_AI7RAW, 0, 0, NULL },
  { ID_VAR_AI8RAW, 0, 0, NULL },
  { ID_VAR_AI9RAW, 0, 0, NULL },
  { ID_VAR_AI10RAW, 0, 0, NULL },
  { ID_VAR_AI11RAW, 0, 0, NULL },
  { ID_VAR_AI14RAW, 0, 0, NULL },
  { ID_VAR_ENGOILPRESS, 0, 0, NULL },
  { ID_VAR_ENGOILTEMP, 0, 0, NULL },
  { ID_VAR_ENGCLNTTEMP, 0, 0, NULL },
  { ID_VAR_TRANSOILTEMP, 0, 0, NULL },
  { ID_VAR_TRANSOILPRESS, 0, 0, NULL },
  { ID_VAR_FUELLVL, 0, 0, NULL },
  { ID_VAR_BRAKEOILPRESS, 0, 0, NULL },
  { ID_VAR_ENGSPEED, 0, 0, NULL },
  { ID_VAR_VEHICLESPEED, 0, 0, NULL },
  { ID_VAR_TRANSOPSHSPEED, 0, 0, NULL },
  { ID_VAR_TRANSCURGEAR, 0, 0, NULL },
  { ID_VAR_AI1_TYPE, 0, 0, NULL },
  { ID_VAR_AI2_TYPE, 0, 0, NULL },
  { ID_VAR_AI3_TYPE, 0, 0, NULL },
  { ID_VAR_AI4ohm, 0, 0, NULL },
  { ID_VAR_AI5mA, 0, 0, NULL },
  { ID_VAR_AI6ohm, 0, 0, NULL },
  { ID_VAR_AI7mA, 0, 0, NULL },
  { ID_VAR_AI8ohm, 0, 0, NULL },
  { ID_VAR_AI9volt, 0, 0, NULL },
  { ID_VAR_AI10volt, 0, 0, NULL },
  { ID_VAR_AI11mA, 0, 0, NULL },
  { ID_VAR_AI14ohm, 0, 0, NULL },
  { ID_VAR_AI1CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI1CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI1FILTERSET, 0, 0, NULL },
  { ID_VAR_AI1FILTERFB, 0, 0, NULL },
  { ID_VAR_AI2CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI2CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI2FILTERSET, 0, 0, NULL },
  { ID_VAR_AI2FILTERFB, 0, 0, NULL },
  { ID_VAR_AI3CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI3CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI3FILTERSET, 0, 0, NULL },
  { ID_VAR_AI3FILTERFB, 0, 0, NULL },
  { ID_VAR_AI4CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI4CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI4FILTERSET, 0, 0, NULL },
  { ID_VAR_AI4FILTERFB, 0, 0, NULL },
  { ID_VAR_AI5CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI5CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI5FILTERSET, 0, 0, NULL },
  { ID_VAR_AI5FILTERFB, 0, 0, NULL },
  { ID_VAR_AI6CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI6CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI6FILTERSET, 0, 0, NULL },
  { ID_VAR_AI6FILTERFB, 0, 0, NULL },
  { ID_VAR_AI7CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI7CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI7FILTERSET, 0, 0, NULL },
  { ID_VAR_AI7FILTERFB, 0, 0, NULL },
  { ID_VAR_AI8CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI8CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI8FILTERSET, 0, 0, NULL },
  { ID_VAR_AI8FILTERFB, 0, 0, NULL },
  { ID_VAR_AI9CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI9CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI9FILTERSET, 0, 0, NULL },
  { ID_VAR_AI9FILTERFB, 0, 0, NULL },
  { ID_VAR_AI10CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI10CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI10FILTERSET, 0, 0, NULL },
  { ID_VAR_AI10FILTERFB, 0, 0, NULL },
  { ID_VAR_AI11CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI11CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI11FILTERSET, 0, 0, NULL },
  { ID_VAR_AI11FILTERFB, 0, 0, NULL },
  { ID_VAR_AI14CONTROLSET, 0, 0, NULL },
  { ID_VAR_AI14CONTROLFB, 0, 0, NULL },
  { ID_VAR_AI14FILTERSET, 0, 0, NULL },
  { ID_VAR_AI14FILTERFB, 0, 0, NULL },
  { ID_VAR_SOURCE1, 0, 0, NULL },
  { ID_VAR_SOURCE2, 0, 0, NULL },
  { ID_VAR_SOURCE3, 0, 0, NULL },
  { ID_VAR_SOURCE4, 0, 0, NULL },
  { ID_VAR_SOURCE5, 0, 0, NULL },
  { ID_VAR_SOURCE6, 0, 0, NULL },
  { ID_VAR_SOURCE7, 0, 0, NULL },
  { ID_VAR_SOURCE8, 0, 0, NULL },
  { ID_VAR_SOURCE9, 0, 0, NULL },
  { ID_VAR_SOURCE10, 0, 0, NULL },
  { ID_VAR_SOURCE11, 0, 0, NULL },
  { ID_VAR_PLUG1, 0, 0, NULL },
  { ID_VAR_PLUG2, 0, 0, NULL },
  { ID_VAR_PLUG3, 0, 0, NULL },
  { ID_VAR_PLUG4, 0, 0, NULL },
  { ID_VAR_PLUG5, 0, 0, NULL },
  { ID_VAR_PLUG6, 0, 0, NULL },
  { ID_VAR_PLUG7, 0, 0, NULL },
  { ID_VAR_PLUG8, 0, 0, NULL },
  { ID_VAR_PLUG9, 0, 0, NULL },
  { ID_VAR_PLUG10, 0, 0, NULL },
  { ID_VAR_PLUG11, 0, 0, NULL },
  { ID_VAR_SPN1, 0, 0, NULL },
  { ID_VAR_SPN2, 0, 0, NULL },
  { ID_VAR_SPN3, 0, 0, NULL },
  { ID_VAR_SPN4, 0, 0, NULL },
  { ID_VAR_SPN5, 0, 0, NULL },
  { ID_VAR_SPN6, 0, 0, NULL },
  { ID_VAR_SPN7, 0, 0, NULL },
  { ID_VAR_SPN8, 0, 0, NULL },
  { ID_VAR_SPN9, 0, 0, NULL },
  { ID_VAR_SPN10, 0, 0, NULL },
  { ID_VAR_SPN11, 0, 0, NULL },
  { ID_VAR_FMI1, 0, 0, NULL },
  { ID_VAR_FMI2, 0, 0, NULL },
  { ID_VAR_FMI3, 0, 0, NULL },
  { ID_VAR_FMI4, 0, 0, NULL },
  { ID_VAR_FMI5, 0, 0, NULL },
  { ID_VAR_FMI6, 0, 0, NULL },
  { ID_VAR_FMI7, 0, 0, NULL },
  { ID_VAR_FMI8, 0, 0, NULL },
  { ID_VAR_FMI9, 0, 0, NULL },
  { ID_VAR_FMI10, 0, 0, NULL },
  { ID_VAR_FMI11, 0, 0, NULL },
  { ID_VAR_COUNT1, 0, 0, NULL },
  { ID_VAR_COUNT2, 0, 0, NULL },
  { ID_VAR_COUNT3, 0, 0, NULL },
  { ID_VAR_COUNT4, 0, 0, NULL },
  { ID_VAR_COUNT5, 0, 0, NULL },
  { ID_VAR_COUNT6, 0, 0, NULL },
  { ID_VAR_COUNT7, 0, 0, NULL },
  { ID_VAR_COUNT8, 0, 0, NULL },
  { ID_VAR_COUNT9, 0, 0, NULL },
  { ID_VAR_COUNT10, 0, 0, NULL },
  { ID_VAR_COUNT11, 0, 0, NULL },
  { ID_VAR_DESCRIPT1, 0, 0, NULL },
  { ID_VAR_DESCRIPT2, 0, 0, NULL },
  { ID_VAR_DESCRIPT3, 0, 0, NULL },
  { ID_VAR_DESCRIPT4, 0, 0, NULL },
  { ID_VAR_DESCRIPT5, 0, 0, NULL },
  { ID_VAR_DESCRIPT6, 0, 0, NULL },
  { ID_VAR_DESCRIPT7, 0, 0, NULL },
  { ID_VAR_DESCRIPT8, 0, 0, NULL },
  { ID_VAR_DESCRIPT9, 0, 0, NULL },
  { ID_VAR_DESCRIPT10, 0, 0, NULL },
  { ID_VAR_DESCRIPT11, 0, 0, NULL },
  { ID_VAR_STATUS, 0, 0, NULL },
  { ID_VAR_DI1, 0, 0, NULL },
  { ID_VAR_DI2, 0, 0, NULL },
  { ID_VAR_DI3, 0, 0, NULL },
  { ID_VAR_DI4, 0, 0, NULL },
  { ID_VAR_DI5, 0, 0, NULL },
  { ID_VAR_DI6, 0, 0, NULL },
  { ID_VAR_DI7, 0, 0, NULL },
  { ID_VAR_DI11, 0, 0, NULL },
  { ID_VAR_DI12, 0, 0, NULL },
  { ID_VAR_DI13, 0, 0, NULL },
  { ID_VAR_DI14, 0, 0, NULL },
  { ID_VAR_DI16, 0, 0, NULL },
  { ID_VAR_DI17, 0, 0, NULL },
  { ID_VAR_DI20, 0, 0, NULL },
  { ID_VAR_DI21, 0, 0, NULL },
  { ID_VAR_DI23, 0, 0, NULL },
  { ID_VAR_DI25, 0, 0, NULL },
  { ID_VAR_DI26, 0, 0, NULL },
  { ID_VAR_DI27, 0, 0, NULL },
  { ID_VAR_DI35, 0, 0, NULL },
  { ID_VAR_FREQ1, 0, 0, NULL },
  { ID_VAR_FREQ2, 0, 0, NULL },
  { ID_VAR_CANRES_SET, 0, 0, NULL },
  { ID_VAR_CANRES_FB, 0, 0, NULL },
  { ID_VAR_CHARGEFAIL_SET, 0, 0, NULL },
  { ID_VAR_CHARGEFAIL_FB, 0, 0, NULL },
  { ID_VAR_HOUR_RUN, 0, 0, NULL },
  { ID_VAR_CHARGE_FAIL, 0, 0, NULL },
  { ID_VAR_BATTERY_VOL, 0, 0, NULL },
  { ID_VAR_FREQ, 0, 0, NULL },
  { ID_VAR_ENG_RUN_STATUS, 0, 0, NULL },
  { ID_VAR_DIAG_SCROLL, 0, 0, NULL },
  { ID_VAR_CHANGE_ENGOIL_INTERVAL, 0, 0, NULL },
  { ID_VAR_CHANGE_ENGOIL_NEXT, 0, 0, NULL },
  { ID_VAR_CHANGE_ENGOIL_REMAINING, 0, 0, NULL },
  { ID_VAR_CHANGE_AIRFILTER_INTERVAL, 0, 0, NULL },
  { ID_VAR_CHANGE_AIRFILTER_NEXT, 0, 0, NULL },
  { ID_VAR_CHANGE_AIRFILTER_REMAINING, 0, 0, NULL },
  { ID_VAR_CHANGE_HYDOIL_INTERVAL, 0, 0, NULL },
  { ID_VAR_CHANGE_HYDOIL_NEXT, 0, 0, NULL },
  { ID_VAR_CHANGE_HYDOIL_REMAINING, 0, 0, NULL },
  { ID_VAR_SERVICE_ENGINE_INTERVAL, 0, 0, NULL },
  { ID_VAR_SERVICE_ENGINE_NEXT, 0, 0, NULL },
  { ID_VAR_SERVICE_ENGINE_REMAINING, 0, 0, NULL },
  { ID_VAR_SERVICE_MACHINE_INTERVAL, 0, 0, NULL },
  { ID_VAR_SERVICE_MACHINE_NEXT, 0, 0, NULL },
  { ID_VAR_SERVICE_MACHINE_REMAINING, 0, 0, NULL },
  { ID_VAR_TOTAL_ENGINE_HRS, 0, 0, NULL },
  { ID_VAR_LIGHT, 0, 0, NULL },
  { ID_VAR_DAY_EDIT, 0, 0, NULL },
  { ID_VAR_MONTH_EDIT, 0, 0, NULL },
  { ID_VAR_YEAR_EDIT, 0, 0, NULL },
  { ID_VAR_HOUR_EDIT, 0, 0, NULL },
  { ID_VAR_MIN_EDIT, 0, 0, NULL },
  { ID_VAR_SEC_EDIT, 0, 0, NULL },
  { ID_VAR_UIN, 0, 0, NULL },
  { ID_VAR_MAKE, 0, 0, NULL },
  { ID_VAR_MODEL, 0, 0, NULL },
  { ID_VAR_SERIAL_NO, 0, 0, NULL },
  { ID_VAR_UNIT_NO, 0, 0, NULL },
  { ID_VAR_KEYPAD_X, 0, 0, NULL },
  { ID_VAR_KEYPAD_Y, 0, 0, NULL },
  { ID_VAR_SELECTED_CHARACTER, 0, 0, NULL },
  { ID_VAR_ROWSEL, 0, 0, NULL },
  { ID_VAR_TXT_ECT2, 0, 0, NULL },
  { ID_VAR_TXT_TOP, 0, 0, NULL },
  { ID_VAR_TXT_COT, 0, 0, NULL },
  { ID_VAR_TXT_EOT, 0, 0, NULL },
  { ID_VAR_REQUEST_DATA, 0, 0, NULL },
  { ID_VAR_DIAG_POPUP, 0, 0, NULL },
  { ID_VAR_INVALID_PASSWORD, 0, 0, NULL },
  { ID_VAR_WARNING, 0, 0, NULL },
  { ID_VAR_PENDRIVE_DETECT, 0, 0, NULL },
  { ID_VAR_PENDRIVE_POPUP, 0, 0, NULL },
  { ID_VAR_CLOSE_OPENSCREENS, 0, 0, NULL },
  { ID_VAR_SDCARD_DETECT, 0, 0, NULL },
  { ID_VAR_SDCARD_POPUP, 0, 0, NULL },
  { ID_VAR_ICON_RPM, 0, 0, NULL },
  { ID_VAR_ICON_EOP, 0, 0, NULL },
  { ID_VAR_ICON_ECT, 0, 0, NULL },
  { ID_VAR_ICON_FUEL, 0, 0, NULL },
  { ID_VAR_ICON_BATT, 0, 0, NULL },
  { ID_VAR_ICON_TOP, 0, 0, NULL },
  { ID_VAR_ICON_TOT, 0, 0, NULL },
  { ID_VAR_ICON_COT, 0, 0, NULL },
  { ID_VAR_ICON_EOT, 0, 0, NULL },
  { ID_VAR_MERIDIAN_EDIT, 0, 0, NULL },
  { ID_VAR_COT, 0, 0, NULL },
  { ID_VAR_EWT, 0, 0, NULL },
  { ID_VAR_DIGITAL_OUTPUT, 0, 0, NULL },
  { ID_VAR_EOF, 0, 0, NULL },
  { ID_VAR_EOT_COUNTS, 0, 0, NULL },
  { ID_VAR_EOT_DEGREE, 0, 0, NULL },
  { ID_VAR_DISPLAY_HRS, 0, 0, NULL },
  { ID_VAR_KEYPAD_WARNING, 0, 0, NULL },
  { ID_VAR_SELCT_SCREEN, 0, 0, NULL },
  { ID_VAR_SCREEN_ON_OFF, 0, 0, NULL },
  { ID_VAR_SELCT_HOME_SCREEN, 0, 0, NULL },
  { ID_VAR_ECT_OHM, 0, 0, NULL },
  { ID_VAR_EOT_OHM, 0, 0, NULL },
  { ID_VAR_FUEL_OHM, 0, 0, NULL },
  { ID_VAR_ENGFUEL_RATE, 0, 0, NULL },
  { ID_VAR_ENGHRS_POPUP, 0, 0, NULL },
  { ID_VAR_ENGFUELRATE_POPUP, 0, 0, NULL },
  { ID_VAR_SWCS_CNTR, 0, 0, NULL },
  { ID_VAR_S1STRT_HH, 0, 0, NULL },
  { ID_VAR_S1STRT_MM, 0, 0, NULL },
  { ID_VAR_S1STRT_MER, 0, 0, NULL },
  { ID_VAR_S1STOP_HH, 0, 0, NULL },
  { ID_VAR_S1STOP_MM, 0, 0, NULL },
  { ID_VAR_S1STOP_MER, 0, 0, NULL },
  { ID_VAR_S2STRT_HH, 0, 0, NULL },
  { ID_VAR_S2STRT_MM, 0, 0, NULL },
  { ID_VAR_S2STRT_MER, 0, 0, NULL },
  { ID_VAR_S2STOP_HH, 0, 0, NULL },
  { ID_VAR_S2STOP_MM, 0, 0, NULL },
  { ID_VAR_S2STOP_MER, 0, 0, NULL },
  { ID_VAR_S3STRT_HH, 0, 0, NULL },
  { ID_VAR_S3STRT_MM, 0, 0, NULL },
  { ID_VAR_S3STRT_MER, 0, 0, NULL },
  { ID_VAR_S3STOP_HH, 0, 0, NULL },
  { ID_VAR_S3STOP_MM, 0, 0, NULL },
  { ID_VAR_S3STOP_MER, 0, 0, NULL },
  { ID_VAR_SAVE_STATUS, 0, 0, NULL },
  { ID_VAR_TXT_FIP_RACK_POS, 0, 0, NULL },
  { ID_VAR_TXT_AIN1_S_VALUE, 0, 0, NULL },
  { ID_VAR_TXT_AIN2_S_VALUE, 0, 0, NULL },
  { ID_VAR_TXT_BOOST_PRESS, 0, 0, NULL },
  { ID_VAR_TXT_ECU_BATT, 0, 0, NULL },
  { ID_VAR_AI1_S_RAW, 0, 0, NULL },
  { ID_VAR_AI2_S_RAW, 0, 0, NULL },
  { ID_VAR_AI3_S_RAW, 0, 0, NULL },
  { ID_VAR_AI4_S_RAW, 0, 0, NULL },
  { ID_VAR_AI1_S_TYPE, 0, 0, NULL },
  { ID_VAR_AI2_S_TYPE, 0, 0, NULL },
  { ID_VAR_AI3_S_TYPE, 0, 0, NULL },
  { ID_VAR_AI4_S_TYPE, 0, 0, NULL },
  { ID_VAR_ID_NOT_SET, 0, 0, NULL },
  { ID_VAR_SOURCE_SEL, 0, 0, NULL },
  { ID_VAR_CURNT_ERR_NO_1, 0, 0, NULL },
  { ID_VAR_CURNT_ERR_NO_2, 0, 0, NULL },
  { ID_VAR_TOTAL_ERRS_NO_1, 0, 0, NULL },
  { ID_VAR_TOTAL_ERRS_NO_2, 0, 0, NULL },
  { ID_VAR_SWCS_ERR_STATUS, 0, 0, NULL },
  { ID_VAR_WARN_OVRSPD, 0, 0, NULL },
  { ID_VAR_TXT_AIN3_S_VALUE, 0, 0, NULL },
  { ID_VAR_TXT_AIN4_S_VALUE, 0, 0, NULL },
  { ID_VAR_WARN_MSG, 0, 0, NULL },
  { ID_VAR_EHE_SCROLL, 0, 0, NULL },
  { ID_VAR_ADJD_ENG_HRS, 0, 0, NULL },
  { ID_VAR_ENGHRS_EN_DIS, 0, 0, NULL },
  { ID_VAR_CAL_HRS, 0, 0, NULL },
};

/*********************************************************************
*
*       _NumVars
*/
static unsigned _NumVars = GUI_COUNTOF(_aVarList);

/*********************************************************************
*
*       Multibuffering
*/
static U8 _MultibufEnable = 1;

/*********************************************************************
*
*       _apLang
*/
static const char * _apLang[] = {
  (char *)acAPPW_Language_0,
};

/*********************************************************************
*
*       _TextInit
*/
static const APPW_TEXT_INIT _TextInit = {
  _apLang,
  GUI_COUNTOF(_apLang),
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _InitText
*/
static void _InitText(void) {
  APPW_TextInitMem(&_TextInit);
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       APPW_X_Setup
*/
void APPW_X_Setup(void) {
  APPW_SetpfInitText(_InitText);
  APPW_X_FS_Init();
  APPW_MULTIBUF_Enable(_MultibufEnable);
  APPW_SetData(_apRootList, _NumScreens, _aVarList, _NumVars, (APPW_DRAWING_ITEM **)_appDrawing, _NumDrawings);
}

/*********************************************************************
*
*       APPW_X_Config
*/
#ifdef WIN32
void APPW_X_Config(void) {
  GUI_MULTIBUF_Config(NUM_BUFFERS);
  GUI_DEVICE_CreateAndLink(DISPLAY_DRIVER, COLOR_CONVERSION, 0, 0);
  if (LCD_GetSwapXY()) {
    LCD_SetSizeEx (0, YSIZE_PHYS, XSIZE_PHYS);
    LCD_SetVSizeEx(0, YSIZE_PHYS, XSIZE_PHYS);
  } else {
    LCD_SetSizeEx (0, XSIZE_PHYS, YSIZE_PHYS);
    LCD_SetVSizeEx(0, XSIZE_PHYS, YSIZE_PHYS);
  }
}
#endif

/*************************** End of file ****************************/
