/*********************************************************************
*                     SEGGER Microcontroller GmbH                    *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2021  SEGGER Microcontroller GmbH                *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File        : APPW_MainTask.c
Purpose     : APPWIZARD application entry point
---------------------------END-OF-HEADER------------------------------
*/
#include "../../source/Files_Header/sourceMacro.h"
#include "../../source/Files_Header/sourceExternVariable.h"
#include "../../source/Files_Header/sourceInclude.h"
#include "Generated/Resource.h"
/*********************************************************************
*
*       MainTask
*/
//#define ID_ROTARY_RPM       (GUI_ID_USER + 33)

enum App_screens {RTCpopup=2,Main_day=6,Main2_day,Troubleshooting,Troubleshooting2,Checkpassword,Mainmenu,Faultdiagnostic,
				  Usersettings,Utilities,Systemsettings,Systemsetup,Servicereminder,Changepassword,
				 Vehicleidentification,Rawcanlogging,Datalogging,Faultlogging,Main_night=26,Main2_night,OndisplayKeypad,Swcs,WorkingHrsLogging,
				 Faultdiagnostic2,EngHrsEdit
};

extern uint8_t DM1MessageSelection(Uint32 lulspn,uint8_t lucfmi);

void DefaultScreenUpdate(void);
void RTCPopupUpdate(void);
void MainDayScreenUpdate(void);
void Main2DayScreenUpdate(void);
void MainNightScreenUpdate(void);
void Main2NightScreenUpdate(void);
void TroubleShootingScreenUpdate(void);
void TroubleShooting2ScreenUpdate(void);
void CheckPasswordScreenUpdate(void);
void MainMenuScreenUpdate(void);
void FaultdiagnosticScreenUpdate(void);
void UsersettingsScreenUpdate(void);
void SystemsetupScreenUpdate(void);
void ServicereminderScreenUpdate(void);
void ChangepasswordScreenUpdate(void);
void RawcanloggingScreenUpdate(void);
void DataloggingScreenUpdate(void);
void FaultloggingScreenUpdate(void);
void OndisplayKeypadScreenUpdate(void);
void SwcsScreenUpdate(void);
void WorkingHrsLoggingScreenUpdate(void);
void Faultdiagnostic2ScreenUpdate(void);
void EngHrsEditScreenUpdate(void);

void MainTask(void)
{
  //
  // Setup configuration dependent pointers
  //
	if(gcPowerOnExecute == 1)
	{
		gcPowerOnExecute = 0;

		APPW_X_Setup();
		//
		// Initialize AppWizard
		//
		APPW_Init(APPW_PROJECT_PATH);
		//
		// Create all persistent screens except initial screen
		//
		APPW_CreatePersistentScreens();
		//
		// Create initial screen...
		//
		APPW_CreateRoot(APPW_INITIAL_SCREEN, WM_HBKWIN);
		//
		// ...and keep it alive
		//
	}
	else
	{}

	DefaultScreenUpdate();

	switch(giScreenSwitch)
	{
		case RTCpopup:
						RTCPopupUpdate();
						break;
		case Main_day:
						MainDayScreenUpdate();
						break;
		case Main2_day :
						Main2DayScreenUpdate();
						break;
		case Main_night:
						MainNightScreenUpdate();
						break;
		case Main2_night:
						Main2NightScreenUpdate();
						break;
		case Troubleshooting:
						TroubleShootingScreenUpdate();
						break;
		case Troubleshooting2:
						TroubleShooting2ScreenUpdate();
						break;
		case Checkpassword:
						CheckPasswordScreenUpdate();
						break;
		case Mainmenu:
						MainMenuScreenUpdate();
						break;
		case Faultdiagnostic:
						FaultdiagnosticScreenUpdate();
						break;
		case Usersettings:
						UsersettingsScreenUpdate();
						break;
		case Utilities:
						break;
		case Systemsettings:
						break;
		case Systemsetup:
						SystemsetupScreenUpdate();
						break;
		case Servicereminder:
						ServicereminderScreenUpdate();
						break;
		case Changepassword:
						ChangepasswordScreenUpdate();
						break;
		case Vehicleidentification:
						APPW_SetVarData(ID_VAR_BLOCK_SELECTED , gcScrollSel);
						break;
		case Rawcanlogging:
						RawcanloggingScreenUpdate();
						break;
		case Datalogging:
						DataloggingScreenUpdate();
						break;
		case Faultlogging:
						FaultloggingScreenUpdate();
						break;
		case OndisplayKeypad:
						OndisplayKeypadScreenUpdate();
						break;
		case Swcs:		/*shiftwise clock setting*/
						SwcsScreenUpdate();
						break;
		case WorkingHrsLogging:
						WorkingHrsLoggingScreenUpdate();
						break;
		case Faultdiagnostic2 :
						Faultdiagnostic2ScreenUpdate();
						break;
		case EngHrsEdit :
						EngHrsEditScreenUpdate();
						break;
		default:
						break;
	}

	while (GUI_Exec1())
	{
		APPW_Exec();
	}
	APPW_Exec();
}

void DefaultScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_DISPSCREEN	, giScreenSwitch);
	APPW_SetVarData(ID_VAR_SDCARD_POPUP ,gisdcardpopup);
	APPW_SetVarData(ID_VAR_POPUP		,giDMPopUp);
	APPW_SetVarData(ID_VAR_PENDRIVE_POPUP,guiPendrivePoPup);

//	if(gisdcardpopup==1)
//	{
		APPW_SetVarData(ID_VAR_SDCARD_DETECT,gisdcardstatus);
//	}
//	else {/***/}

//	if(guiPendrivePoPup==1)
//	{
		APPW_SetVarData(ID_VAR_PENDRIVE_DETECT,guiPendriveStatus);
//	}
//	else {/***/}

	if(giDMPopUp==1)
	{
		if(giNaviPopUp == 1 || giIntensityPopUp == 1)
		{
			giNaviPopUp = 0;
			giIntensityPopUp = 0;
			APPW_SetVarData(ID_VAR_NAVIPOPUP	, giNaviPopUp);
			APPW_SetVarData(ID_VAR_CHANGE_LUM	, giIntensityPopUp);
		}
		APPW_SetVarData(ID_VAR_ERRCNT1		, strDm1Screen.CurrentCount);
		APPW_SetVarData(ID_VAR_ERRCNT2		, strDm1Screen.MaximumCount);
		APPW_SetVarData(ID_VAR_DM_MSG		, strDm1Screen.Message);

		if(strDm1Screen.Address == VMS_SA)/*VMS source address*/
		{
			strDm1Screen.DeviceId = 1;/*INTERNAL*/
		}
		else
		{
			strDm1Screen.DeviceId = 2;/*EXTERNAL*/
		}

		APPW_SetVarData(ID_VAR_DEVID		, strDm1Screen.DeviceId);
		APPW_SetVarData(ID_VAR_SPN			, strDm1Screen.SPN);
		APPW_SetVarData(ID_VAR_FMI			, strDm1Screen.FMI);
		APPW_SetVarData(ID_VAR_ADD			, strDm1Screen.Address);
		APPW_SetVarData(ID_VAR_POPUPCOL		, strDm1Screen.Status);
	}
	else {/***/}

	if(giIntensityPopUp==1)
	{
		APPW_SetVarData(ID_VAR_INTENSITY_PER, giIntensityPercent);
		APPW_SetVarData(ID_VAR_MODE, giMode);
	}
	else {/***/}
}
void RTCPopupUpdate(void)
{
	APPW_SetVarData(ID_VAR_DAY			, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH		, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR			, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR			, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE		, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_SEC			, strDateTime.Second);
	APPW_SetVarData(ID_VAR_MEREDIAN		, strDateTime.Meredian);
}

void MainDayScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_ICON01		, giIcon01);//diAirfilclg);	/*DI-3: Air Filter clog*/
	APPW_SetVarData(ID_VAR_ICON02		, giIcon02);//EOP-warnings
	APPW_SetVarData(ID_VAR_ICON03		, giIcon03);//ECT-warnings
	APPW_SetVarData(ID_VAR_ICON04		, giIcon04);//EOT-warnings
	APPW_SetVarData(ID_VAR_ICON05		, giIcon05);//diRwl);		/*DI-1: Radiator water level*/
	APPW_SetVarData(ID_VAR_ICON06		, giIcon06);//Low Fuel-warnings
	APPW_SetVarData(ID_VAR_ICON07		, giIcon07);//diseatbelt);	/*DI-4: Seat belt*/
	APPW_SetVarData(ID_VAR_ICON08		, giIcon08);//TOP-warnings
	APPW_SetVarData(ID_VAR_ICON09		, giIcon09);//COT-warnings
	APPW_SetVarData(ID_VAR_ICON10		, giIcon10);//diPrkbrk);	/*DI-2: Parking brake*/
	APPW_SetVarData(ID_VAR_ICON11		, giIcon11);//diEOFC);		/*DI-5: Engine oil filter clog*/
	APPW_SetVarData(ID_VAR_ICON12		, giIcon12);//HOL-warnings
	//APPW_SetVarData(ID_VAR_ICON13		, giIcon13);
	//APPW_SetVarData(ID_VAR_ICON14		, giIcon14);
	//APPW_SetVarData(ID_VAR_ICON15		, giIcon15);
	APPW_SetVarData(ID_VAR_ICON16		, giIcon16);	/**Error icon : 0: Transparent,1: Recall,2: Hide*/
	//APPW_SetVarData(ID_VAR_ICON17		, giIcon17);
	//APPW_SetVarData(ID_VAR_ICON18		, giIcon18);

	//APPW_SetVarData(ID_VAR_HRMETER	, EngineHourMeter);
	//APPW_SetVarData(ID_VAR_CHECKTRANS	, giCheckTrans);
	//APPW_SetVarData(ID_VAR_POPUP		, giDMPopUp);
	//APPW_SetVarData(ID_VAR_TXT_RPM	, giEngineRpm);
	//APPW_SetVarData(ID_VAR_TXT_RPM	, giOutputRpm_text);
	//APPW_SetVarData(ID_VAR_TXT_KMPH	, giVehicleSpeed_text);
	//APPW_SetVarData(ID_VAR_REVCOL		, giIconRevCol);
	//APPW_SetVarData(ID_VAR_ODO		, km_ctr);
	//APPW_SetVarData(ID_VAR_ODO		, Distance_in_km);
#ifdef DOZER_P_VER
	APPW_SetVarData(ID_VAR_00			, GuageEop.PreviousValue);
	APPW_SetVarData(ID_VAR_01			, GuageTop.PreviousValue);
	APPW_SetVarData(ID_VAR_02 			, GuageRpm.PreviousValue);
	APPW_SetVarData(ID_VAR_03			, GuageEct.PreviousValue);
	APPW_SetVarData(ID_VAR_04			, GuageCot.PreviousValue);
	//APPW_SetVarData(ID_VAR_05			, GuageKmph.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_EOP		, gfEop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT		, gfEct_text);
	APPW_SetVarData(ID_VAR_TXT_RPM		, giEngineRpm_text);
	APPW_SetVarData(ID_VAR_TXT_TOP		, gfTop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt_text*10.0);

	APPW_SetVarData(ID_VAR_ICON_EOP		, faultsymbols.eop);
	APPW_SetVarData(ID_VAR_ICON_ECT		, faultsymbols.ect);
	APPW_SetVarData(ID_VAR_ICON_RPM		, faultsymbols.rpm);
	APPW_SetVarData(ID_VAR_ICON_TOP		, faultsymbols.top);
	APPW_SetVarData(ID_VAR_ICON_COT		, faultsymbols.cot);
#else
	APPW_SetVarData(ID_VAR_00			, GuageEop.PreviousValue);
	APPW_SetVarData(ID_VAR_01			, GuageVolt.PreviousValue);
	APPW_SetVarData(ID_VAR_02 			, GuageRpm.PreviousValue);
	APPW_SetVarData(ID_VAR_03			, GuageEct.PreviousValue);
	APPW_SetVarData(ID_VAR_04			, GuageFuel.PreviousValue);
	//APPW_SetVarData(ID_VAR_05			, GuageKmph.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_EOP		, gfEop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT		, gfEct_text);
	APPW_SetVarData(ID_VAR_TXT_RPM		, giEngineRpm_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_AIN2_S_VALUE		, gfHot);

	APPW_SetVarData(ID_VAR_ICON_RPM		, faultsymbols.rpm);
	APPW_SetVarData(ID_VAR_ICON_BATT	, faultsymbols.batt);
	APPW_SetVarData(ID_VAR_ICON_FUEL	, faultsymbols.fuel);
	APPW_SetVarData(ID_VAR_ICON_EOP		, faultsymbols.eop);
	APPW_SetVarData(ID_VAR_ICON_ECT		, faultsymbols.ect);
#endif

	APPW_SetVarData(ID_VAR_NAVIPOPUP	, giNaviPopUp);
	APPW_SetVarData(ID_VAR_CHANGE_LUM	, giIntensityPopUp);
	APPW_SetVarData(ID_VAR_ID_NOT_SET	, id_not_set);
	APPW_SetVarData(ID_VAR_WARN_OVRSPD	, engovrspd);
}

void Main2DayScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_ICON01		, giIcon01);//diAirfilclg);	/*DI-3: Air Filter clog*/
	APPW_SetVarData(ID_VAR_ICON02		, giIcon02);//EOP-warnings
	APPW_SetVarData(ID_VAR_ICON03		, giIcon03);//ECT-warnings
	APPW_SetVarData(ID_VAR_ICON04		, giIcon04);//EOT-warnings
	APPW_SetVarData(ID_VAR_ICON05		, giIcon05);//diRwl);		/*DI-1: Radiator water level*/
	APPW_SetVarData(ID_VAR_ICON06		, giIcon06);//Low Fuel-warnings
	APPW_SetVarData(ID_VAR_ICON07		, giIcon07);//diseatbelt);	/*DI-4: Seat belt*/
	APPW_SetVarData(ID_VAR_ICON08		, giIcon08);//TOP-warnings
	APPW_SetVarData(ID_VAR_ICON09		, giIcon09);//COT-warnings
	APPW_SetVarData(ID_VAR_ICON10		, giIcon10);//diPrkbrk);	/*DI-2: Parking brake*/
	APPW_SetVarData(ID_VAR_ICON11		, giIcon11);//diEOFC);		/*DI-5: Engine oil filter clog*/
	APPW_SetVarData(ID_VAR_ICON12		, giIcon12);//HOL-warnings
	//APPW_SetVarData(ID_VAR_ICON13		, giIcon13);
	//APPW_SetVarData(ID_VAR_ICON14		, giIcon14);
	//APPW_SetVarData(ID_VAR_ICON15		, giIcon15);
	APPW_SetVarData(ID_VAR_ICON16		, giIcon16);	/**Error icon : 0: Transparent,1: Recall,2: Hide*/
	//APPW_SetVarData(ID_VAR_ICON17		, giIcon17);
	//APPW_SetVarData(ID_VAR_ICON18		, giIcon18);
	//APPW_SetVarData(ID_VAR_REVCOL		, giIconRevCol);
	//APPW_SetVarData(ID_VAR_ODO		, km_ctr);
	//APPW_SetVarData(ID_VAR_ODO		, Distance_in_km);
	//APPW_SetVarData(ID_VAR_CHECKTRANS	, giCheckTrans);
	//APPW_SetVarData(ID_VAR_POPUP		, giDMPopUp);
	//APPW_SetVarData(ID_VAR_HRMETER		, EngineHourMeter);
#ifdef DOZER_P_VER
	APPW_SetVarData(ID_VAR_TOP			, GuageTop2.PreviousValue);
	APPW_SetVarData(ID_VAR_ECT2			, GuageEct2.PreviousValue);
	APPW_SetVarData(ID_VAR_COT			, GuageCot2.PreviousValue);
	APPW_SetVarData(ID_VAR_FUEL			, GuageFuel.PreviousValue);
	APPW_SetVarData(ID_VAR_EOT			, GuageEot.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_EOP		, gfEop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_TOP		, gfTop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT2		, gfEct_text2);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_RPM		, giEngineRpm_text);

	APPW_SetVarData(ID_VAR_ICON_TOP		, faultsymbols.top);
	APPW_SetVarData(ID_VAR_ICON_ECT	    , faultsymbols.ect);
	APPW_SetVarData(ID_VAR_ICON_COT	    , faultsymbols.cot);
	APPW_SetVarData(ID_VAR_ICON_EOT		, faultsymbols.eot);
	APPW_SetVarData(ID_VAR_ICON_FUEL	, faultsymbols.fuel);
#else
	APPW_SetVarData(ID_VAR_TOP			, GuageTop.PreviousValue);
	APPW_SetVarData(ID_VAR_ECT2			, GuageEct2.PreviousValue);
	APPW_SetVarData(ID_VAR_COT			, GuageCot.PreviousValue);
	APPW_SetVarData(ID_VAR_VOLT			, GuageVolt2.PreviousValue);
	APPW_SetVarData(ID_VAR_EOT			, GuageEot.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_TOP		, gfTop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT2		, gfEct_text2);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt2_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_FIP_RACK_POS		, gfFIP_text);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_BOOST_PRESS, gfBoostPressure*100.0);
	APPW_SetVarData(ID_VAR_TXT_AIN2_S_VALUE		, gfHot);

	APPW_SetVarData(ID_VAR_ICON_TOP		, faultsymbols.top);
	APPW_SetVarData(ID_VAR_ICON_ECT	    , faultsymbols.ect);
	APPW_SetVarData(ID_VAR_ICON_COT	    , faultsymbols.cot);
	APPW_SetVarData(ID_VAR_ICON_BATT	, faultsymbols.batt);
	APPW_SetVarData(ID_VAR_ICON_EOT		, faultsymbols.eot);
	APPW_SetVarData(ID_VAR_ICON_RPM		, faultsymbols.rpm);
#endif
	APPW_SetVarData(ID_VAR_NAVIPOPUP	, giNaviPopUp);
	APPW_SetVarData(ID_VAR_CHANGE_LUM	, giIntensityPopUp);
	APPW_SetVarData(ID_VAR_ID_NOT_SET	, id_not_set);
	APPW_SetVarData(ID_VAR_WARN_OVRSPD	, engovrspd);
}
void MainNightScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_ICON01		, giIcon01);//diAirfilclg);	/*DI-3: Air Filter clog*/
	APPW_SetVarData(ID_VAR_ICON02		, giIcon02);//EOP-warnings
	APPW_SetVarData(ID_VAR_ICON03		, giIcon03);//ECT-warnings
	APPW_SetVarData(ID_VAR_ICON04		, giIcon04);//EOT-warnings
	APPW_SetVarData(ID_VAR_ICON05		, giIcon05);//diRwl);		/*DI-1: Radiator water level*/
	APPW_SetVarData(ID_VAR_ICON06		, giIcon06);//Low Fuel-warnings
	APPW_SetVarData(ID_VAR_ICON07		, giIcon07);//diseatbelt);	/*DI-4: Seat belt*/
	APPW_SetVarData(ID_VAR_ICON08		, giIcon08);//TOP-warnings
	APPW_SetVarData(ID_VAR_ICON09		, giIcon09);//COT-warnings
	APPW_SetVarData(ID_VAR_ICON10		, giIcon10);//diPrkbrk);	/*DI-2: Parking brake*/
	APPW_SetVarData(ID_VAR_ICON11		, giIcon11);//diEOFC);		/*DI-5: Engine oil filter clog*/
	APPW_SetVarData(ID_VAR_ICON12		, giIcon12);//HOL-warnings
	//APPW_SetVarData(ID_VAR_ICON13		, giIcon13);
	//APPW_SetVarData(ID_VAR_ICON14		, giIcon14);
	//APPW_SetVarData(ID_VAR_ICON15		, giIcon15);
	APPW_SetVarData(ID_VAR_ICON16		, giIcon16);	/**Error icon : 0: Transparent,1: Recall,2: Hide*/
	//APPW_SetVarData(ID_VAR_ICON17		, giIcon17);
	//APPW_SetVarData(ID_VAR_ICON18		, giIcon18);

	//APPW_SetVarData(ID_VAR_HRMETER	, EngineHourMeter);
	//APPW_SetVarData(ID_VAR_CHECKTRANS	, giCheckTrans);
	//APPW_SetVarData(ID_VAR_POPUP		, giDMPopUp);
	//APPW_SetVarData(ID_VAR_TXT_RPM	, giEngineRpm);
	//APPW_SetVarData(ID_VAR_TXT_RPM	, giOutputRpm_text);
	//APPW_SetVarData(ID_VAR_TXT_KMPH	, giVehicleSpeed_text);
	//APPW_SetVarData(ID_VAR_REVCOL		, giIconRevCol);
	//APPW_SetVarData(ID_VAR_ODO		, km_ctr);
	//APPW_SetVarData(ID_VAR_ODO		, Distance_in_km);
#ifdef DOZER_P_VER
	APPW_SetVarData(ID_VAR_00			, GuageEop.PreviousValue);
	APPW_SetVarData(ID_VAR_01			, GuageTop.PreviousValue);
	APPW_SetVarData(ID_VAR_02 			, GuageRpm.PreviousValue);
	APPW_SetVarData(ID_VAR_03			, GuageEct.PreviousValue);
	APPW_SetVarData(ID_VAR_04			, GuageCot.PreviousValue);
	//APPW_SetVarData(ID_VAR_05			, GuageKmph.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_EOP		, gfEop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT		, gfEct_text);
	APPW_SetVarData(ID_VAR_TXT_RPM		, giEngineRpm_text);
	APPW_SetVarData(ID_VAR_TXT_TOP		, gfTop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt_text*10.0);

	APPW_SetVarData(ID_VAR_ICON_EOP		, faultsymbols.eop);
	APPW_SetVarData(ID_VAR_ICON_ECT		, faultsymbols.ect);
	APPW_SetVarData(ID_VAR_ICON_RPM		, faultsymbols.rpm);
	APPW_SetVarData(ID_VAR_ICON_TOP		, faultsymbols.top);
	APPW_SetVarData(ID_VAR_ICON_COT		, faultsymbols.cot);
#else
	APPW_SetVarData(ID_VAR_00			, GuageEop.PreviousValue);
	APPW_SetVarData(ID_VAR_01			, GuageVolt.PreviousValue);
	APPW_SetVarData(ID_VAR_02 			, GuageRpm.PreviousValue);
	APPW_SetVarData(ID_VAR_03			, GuageEct.PreviousValue);
	APPW_SetVarData(ID_VAR_04			, GuageFuel.PreviousValue);
	//APPW_SetVarData(ID_VAR_05			, GuageKmph.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_EOP		, gfEop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT		, gfEct_text);
	APPW_SetVarData(ID_VAR_TXT_RPM		, giEngineRpm_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_AIN2_S_VALUE		, gfHot);

	APPW_SetVarData(ID_VAR_ICON_RPM		, faultsymbols.rpm);
	APPW_SetVarData(ID_VAR_ICON_BATT	, faultsymbols.batt);
	APPW_SetVarData(ID_VAR_ICON_FUEL	, faultsymbols.fuel);
	APPW_SetVarData(ID_VAR_ICON_EOP		, faultsymbols.eop);
	APPW_SetVarData(ID_VAR_ICON_ECT		, faultsymbols.ect);
#endif

	APPW_SetVarData(ID_VAR_NAVIPOPUP	, giNaviPopUp);
	APPW_SetVarData(ID_VAR_CHANGE_LUM	, giIntensityPopUp);
	APPW_SetVarData(ID_VAR_ID_NOT_SET	, id_not_set);
	APPW_SetVarData(ID_VAR_WARN_OVRSPD	, engovrspd);
}
void Main2NightScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_ICON01		, giIcon01);//diAirfilclg);	/*DI-3: Air Filter clog*/
	APPW_SetVarData(ID_VAR_ICON02		, giIcon02);//EOP-warnings
	APPW_SetVarData(ID_VAR_ICON03		, giIcon03);//ECT-warnings
	APPW_SetVarData(ID_VAR_ICON04		, giIcon04);//EOT-warnings
	APPW_SetVarData(ID_VAR_ICON05		, giIcon05);//diRwl);		/*DI-1: Radiator water level*/
	APPW_SetVarData(ID_VAR_ICON06		, giIcon06);//Low Fuel-warnings
	APPW_SetVarData(ID_VAR_ICON07		, giIcon07);//diseatbelt);	/*DI-4: Seat belt*/
	APPW_SetVarData(ID_VAR_ICON08		, giIcon08);//TOP-warnings
	APPW_SetVarData(ID_VAR_ICON09		, giIcon09);//COT-warnings
	APPW_SetVarData(ID_VAR_ICON10		, giIcon10);//diPrkbrk);	/*DI-2: Parking brake*/
	APPW_SetVarData(ID_VAR_ICON11		, giIcon11);//diEOFC);		/*DI-5: Engine oil filter clog*/
	APPW_SetVarData(ID_VAR_ICON12		, giIcon12);//HOL-warnings
	//APPW_SetVarData(ID_VAR_ICON13		, giIcon13);
	//APPW_SetVarData(ID_VAR_ICON14		, giIcon14);
	//APPW_SetVarData(ID_VAR_ICON15		, giIcon15);
	APPW_SetVarData(ID_VAR_ICON16		, giIcon16);	/**Error icon : 0: Transparent,1: Recall,2: Hide*/
	//APPW_SetVarData(ID_VAR_ICON17		, giIcon17);
	//APPW_SetVarData(ID_VAR_ICON18		, giIcon18);
	//APPW_SetVarData(ID_VAR_REVCOL		, giIconRevCol);
	//APPW_SetVarData(ID_VAR_ODO		, km_ctr);
	//APPW_SetVarData(ID_VAR_ODO		, Distance_in_km);
	//APPW_SetVarData(ID_VAR_CHECKTRANS	, giCheckTrans);
	//APPW_SetVarData(ID_VAR_POPUP		, giDMPopUp);
	//APPW_SetVarData(ID_VAR_HRMETER		, EngineHourMeter);
#ifdef DOZER_P_VER
	APPW_SetVarData(ID_VAR_TOP			, GuageTop2.PreviousValue);
	APPW_SetVarData(ID_VAR_ECT2			, GuageEct2.PreviousValue);
	APPW_SetVarData(ID_VAR_COT			, GuageCot2.PreviousValue);
	APPW_SetVarData(ID_VAR_FUEL			, GuageFuel.PreviousValue);
	APPW_SetVarData(ID_VAR_EOT			, GuageEot.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_EOP		, gfEop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_TOP		, gfTop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT2		, gfEct_text2);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_RPM		, giEngineRpm_text);

	APPW_SetVarData(ID_VAR_ICON_TOP		, faultsymbols.top);
	APPW_SetVarData(ID_VAR_ICON_ECT	    , faultsymbols.ect);
	APPW_SetVarData(ID_VAR_ICON_COT	    , faultsymbols.cot);
	APPW_SetVarData(ID_VAR_ICON_EOT		, faultsymbols.eot);
	APPW_SetVarData(ID_VAR_ICON_FUEL	, faultsymbols.fuel);
#else
	APPW_SetVarData(ID_VAR_TOP			, GuageTop.PreviousValue);
	APPW_SetVarData(ID_VAR_ECT2			, GuageEct2.PreviousValue);
	APPW_SetVarData(ID_VAR_COT			, GuageCot.PreviousValue);
	APPW_SetVarData(ID_VAR_VOLT			, GuageVolt2.PreviousValue);
	APPW_SetVarData(ID_VAR_EOT			, GuageEot.PreviousValue);

	APPW_SetVarData(ID_VAR_TXT_TOP		, gfTop_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_ECT2		, gfEct_text2);
	APPW_SetVarData(ID_VAR_TXT_COT		, gfCot_text);
	APPW_SetVarData(ID_VAR_TXT_VOL		, gfVolt2_text*10.0);
	APPW_SetVarData(ID_VAR_TXT_EOT		, gfEot_text);
	APPW_SetVarData(ID_VAR_TXT_FIP_RACK_POS		, gfFIP_text);
	APPW_SetVarData(ID_VAR_TXT_FUEL		, gfFuel_text);
	APPW_SetVarData(ID_VAR_TXT_BOOST_PRESS, gfBoostPressure*100.0);
	APPW_SetVarData(ID_VAR_TXT_AIN2_S_VALUE		, gfHot);

	APPW_SetVarData(ID_VAR_ICON_TOP		, faultsymbols.top);
	APPW_SetVarData(ID_VAR_ICON_ECT	    , faultsymbols.ect);
	APPW_SetVarData(ID_VAR_ICON_COT	    , faultsymbols.cot);
	APPW_SetVarData(ID_VAR_ICON_BATT	, faultsymbols.batt);
	APPW_SetVarData(ID_VAR_ICON_EOT		, faultsymbols.eot);
	APPW_SetVarData(ID_VAR_ICON_RPM		, faultsymbols.rpm);
#endif
	APPW_SetVarData(ID_VAR_NAVIPOPUP	, giNaviPopUp);
	APPW_SetVarData(ID_VAR_CHANGE_LUM	, giIntensityPopUp);
	APPW_SetVarData(ID_VAR_ID_NOT_SET	, id_not_set);
	APPW_SetVarData(ID_VAR_WARN_OVRSPD	, engovrspd);
}

void TroubleShootingScreenUpdate(void)
{
#ifdef DOZER_P_VER
	/****P-Version*****/
	/***************************************INTERNAL****************************************/
    APPW_SetVarData(ID_VAR_AI1RAW	, a1_cnts);//cot
	APPW_SetVarData(ID_VAR_AI2RAW	, a2_cnts);//top
	APPW_SetVarData(ID_VAR_AI3RAW	, a3_cnts);//eop

	/*sensor types either resistance or currnet type*/
    APPW_SetVarData(ID_VAR_AI1_TYPE	, a1_type);		//Resistance(ohm)
	APPW_SetVarData(ID_VAR_AI2_TYPE	, a2_type*10.0);//current(mA)
	APPW_SetVarData(ID_VAR_AI3_TYPE	, a3_type*10.0);//current(mA)

	APPW_SetVarData(ID_VAR_DI1		, strReadInputs.bits.input1);//Coolant level
	APPW_SetVarData(ID_VAR_DI2		, strReadInputs.bits.input2);//Transmission oil filter clog
	APPW_SetVarData(ID_VAR_DI3		, strReadInputs.bits.input3);//NA
	APPW_SetVarData(ID_VAR_DI4		, strReadInputs.bits.input4);//Seat Belt
	APPW_SetVarData(ID_VAR_DI5		, strReadInputs.bits.input5);//NA
	APPW_SetVarData(ID_VAR_FREQ1	, Captured_Freq);//Sensor
	APPW_SetVarData(ID_VAR_DIGITAL_OUTPUT , OFF);//buzzer
	APPW_SetVarData(ID_VAR_TXT_VOL     , gfVolt*10.0);//Internal ADC

	APPW_SetVarData(ID_VAR_TXT_COT  , gfCot);		//From Sensor
	APPW_SetVarData(ID_VAR_TXT_TOP  , gfTop*10.0);	//From Sensor
	APPW_SetVarData(ID_VAR_TXT_EOP  , gfEop*10.0);	//From Sensor

	APPW_SetVarData(ID_VAR_TXT_RPM  , giEngineRpm);	//From Sensor(Frequency Capture Module)

	APPW_SetVarData(ID_VAR_DAY		, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH	, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR		, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR		, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE	, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_SEC		, strDateTime.Second);
	APPW_SetVarData(ID_VAR_MEREDIAN	, strDateTime.Meredian);
#else
	/****E-Version*****/
	/***************************************INTERNAL****************************************/
    APPW_SetVarData(ID_VAR_AI1RAW	, a1_cnts);//cot
	APPW_SetVarData(ID_VAR_AI2RAW	, a2_cnts);//top
	APPW_SetVarData(ID_VAR_AI3RAW	, a3_cnts);//fuel
	/*sensor types either resistance or currnet type*/
    APPW_SetVarData(ID_VAR_AI1_TYPE	, a1_type);		//Resistance(ohm)
	APPW_SetVarData(ID_VAR_AI2_TYPE	, a2_type*10.0);//Current(mA)
	APPW_SetVarData(ID_VAR_AI3_TYPE	, a3_type);		//Resistance(ohm)

	APPW_SetVarData(ID_VAR_DI1		, strReadInputs.bits.input1);//Radiator water level
	APPW_SetVarData(ID_VAR_DI2		, strReadInputs.bits.input2);//parking brake
	APPW_SetVarData(ID_VAR_DI3		, strReadInputs.bits.input3);//Air filter clog
	APPW_SetVarData(ID_VAR_DI4		, strReadInputs.bits.input4);//Seat Belt
	APPW_SetVarData(ID_VAR_DI5		, strReadInputs.bits.input5);//EOFC(Engine Oil Filter clog)
	APPW_SetVarData(ID_VAR_FREQ1	, Captured_Freq);//NA
	APPW_SetVarData(ID_VAR_DIGITAL_OUTPUT , OFF);//buzzer
	APPW_SetVarData(ID_VAR_TXT_VOL     , gfVolt*10.0);//Internal ADC

	APPW_SetVarData(ID_VAR_TXT_COT  , gfCot);		//From Sensor
	APPW_SetVarData(ID_VAR_TXT_TOP  , gfTop*10.0);	//From Sensor
	APPW_SetVarData(ID_VAR_TXT_FUEL , gfFuel);		//From Sensor
	APPW_SetVarData(ID_VAR_TXT_EOP  , gfEop*10.0);	//From CAN
	APPW_SetVarData(ID_VAR_TXT_ECT  , gfEct);		//From CAN
	APPW_SetVarData(ID_VAR_TXT_BOOST_PRESS  , gfBoostPressure*100.0);//From CAN
	APPW_SetVarData(ID_VAR_TXT_EOT  , gfEot);		//From CAN
	APPW_SetVarData(ID_VAR_TXT_RPM  , giEngineRpm);	//From CAN
	APPW_SetVarData(ID_VAR_TXT_FIP_RACK_POS  , gfFIP_RackPosition);	 //From CAN
	APPW_SetVarData(ID_VAR_DAY		, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH	, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR		, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR			, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE		, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_SEC			, strDateTime.Second);
	APPW_SetVarData(ID_VAR_MEREDIAN		, strDateTime.Meredian);
	APPW_SetVarData(ID_VAR_TXT_ECU_BATT , gfEng_battry_volt*10.0);	 //From CAN
#endif
	/*******************************SENDER CAN***********************************************/
	APPW_SetVarData(ID_VAR_AI1_S_RAW  , ain1_s_cnts);
	APPW_SetVarData(ID_VAR_AI2_S_RAW  , ain2_s_cnts);
	APPW_SetVarData(ID_VAR_AI3_S_RAW  , ain3_s_cnts);
	APPW_SetVarData(ID_VAR_AI4_S_RAW  , ain4_s_cnts);

	APPW_SetVarData(ID_VAR_AI1_S_TYPE , ain1_s_type);
	APPW_SetVarData(ID_VAR_AI2_S_TYPE , ain2_s_type);
	APPW_SetVarData(ID_VAR_AI3_S_TYPE , ain3_s_type);
	APPW_SetVarData(ID_VAR_AI4_S_TYPE , ain4_s_type);

	APPW_SetVarData(ID_VAR_TXT_AIN1_S_VALUE  , ain1_s_value);
	APPW_SetVarData(ID_VAR_TXT_AIN2_S_VALUE  , ain2_s_value);
	APPW_SetVarData(ID_VAR_TXT_AIN3_S_VALUE  , ain3_s_value);
	APPW_SetVarData(ID_VAR_TXT_AIN4_S_VALUE  , ain4_s_value);

	//APPW_SetVarData(ID_VAR_AI1_S_RAW  , guiHolCounts);
	//APPW_SetVarData(ID_VAR_AI2_S_RAW  , guiHotCounts);
	//APPW_SetVarData(ID_VAR_AI3_S_RAW  , 0);
	//APPW_SetVarData(ID_VAR_AI4_S_RAW  , 0);
	//
	//APPW_SetVarData(ID_VAR_AI1_S_TYPE , Hol_Resistance);
	//APPW_SetVarData(ID_VAR_AI2_S_TYPE , Hot_Resistance);
	//APPW_SetVarData(ID_VAR_AI3_S_TYPE , 0);
	//APPW_SetVarData(ID_VAR_AI4_S_TYPE , 0);
	//
	//APPW_SetVarData(ID_VAR_TXT_AIN1_S_VALUE  , di_hol);//gfHol
	//APPW_SetVarData(ID_VAR_TXT_AIN2_S_VALUE  , gfHot);
	//APPW_SetVarData(ID_VAR_TXT_AIN3_S_VALUE  , 0);
	//APPW_SetVarData(ID_VAR_TXT_AIN4_S_VALUE  , 0);

	/****************************************GENERAL******************************************/
	APPW_SetVarData(ID_VAR_NAVIPOPUP	, giNaviPopUp);
	APPW_SetVarData(ID_VAR_CHANGE_LUM	, giIntensityPopUp);
	APPW_SetVarData(ID_VAR_ICON16		, giIcon16);/**Error icon : 0: Transparent,1: Recall,2: Hide*/
	APPW_SetVarData(ID_VAR_WARN_OVRSPD	, engovrspd);
}

void TroubleShooting2ScreenUpdate(void)
{
	//APPW_SetVarData(ID_VAR_DI1		, giIcon01-1);
	//APPW_SetVarData(ID_VAR_DI2		, giIcon14-1);
	//APPW_SetVarData(ID_VAR_DI3		, giIcon07-1);
	APPW_SetVarData(ID_VAR_DI1		, strReadInputs.bits.input1);
	APPW_SetVarData(ID_VAR_DI2		, strReadInputs.bits.input2);
	APPW_SetVarData(ID_VAR_DI3		, strReadInputs.bits.input3);
	//APPW_SetVarData(ID_VAR_DI4		, giIcon09-1);
	APPW_SetVarData(ID_VAR_DI5		, strReadInputs.bits.input5);	// CAN
	//APPW_SetVarData(ID_VAR_DI6		, giIcon04-1);
	//APPW_SetVarData(ID_VAR_DI7		, giIconRevCol);
	//APPW_SetVarData(ID_VAR_DI11		, giIcon10-1);
	//APPW_SetVarData(ID_VAR_DI12		, giIcon12-1);
	//APPW_SetVarData(ID_VAR_DI13		, 0);	// CAN
	//APPW_SetVarData(ID_VAR_DI14		, 0);	// CAN
	//APPW_SetVarData(ID_VAR_DI16		, giIcon02-1);
	APPW_SetVarData(ID_VAR_DI17		, strReadInputs.bits.input4);
	//APPW_SetVarData(ID_VAR_DI20		, giIcon11-1);
	//APPW_SetVarData(ID_VAR_DI21		, 0);
	//APPW_SetVarData(ID_VAR_DI23		, giIcon05-1);
	//APPW_SetVarData(ID_VAR_DI25		, 0);
	//APPW_SetVarData(ID_VAR_DI26		, giIcon13-1);
	APPW_SetVarData(ID_VAR_DI27		, strReadInputs.bits.input5);
	//APPW_SetVarData(ID_VAR_DI35		, giIcon15-1);
	//APPW_SetVarData(ID_VAR_FREQ1	, guiFreq1);
	//APPW_SetVarData(ID_VAR_FREQ2	, guiFreq2);
	APPW_SetVarData(ID_VAR_BATTERY_VOL , gfVolt*10);
	APPW_SetVarData(ID_VAR_DAY			, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH		, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR			, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR			, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE		, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_MEREDIAN		, strDateTime.Meredian);

	if(GuageRpm.PreviousValue > 500)
	{
		APPW_SetVarData(ID_VAR_ENG_RUN_STATUS,1);
	}
	else
	{
		APPW_SetVarData(ID_VAR_ENG_RUN_STATUS,0);
	}

	APPW_SetVarData(ID_VAR_HRMETER		, EngineHourMeter);
	APPW_SetVarData(ID_VAR_DISPLAY_HRS	, DisplayHourMeter);

	APPW_SetVarData(ID_VAR_NAVIPOPUP	, giNaviPopUp);
	APPW_SetVarData(ID_VAR_CHANGE_LUM	, giIntensityPopUp);

	APPW_SetVarData(ID_VAR_ICON16		, giIcon16);/**Error icon : 0: Transparent,1: Recall,2: Hide*/
}

void CheckPasswordScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_PWDRETRY		, giPasswordRetry);
	APPW_SetVarData(ID_VAR_CURDISP1		, gucCursorArray[0]);
	APPW_SetVarData(ID_VAR_CURDISP2		, gucCursorArray[1]);
	APPW_SetVarData(ID_VAR_CURDISP3		, gucCursorArray[2]);
	APPW_SetVarData(ID_VAR_CURDISP4		, gucCursorArray[3]);
	APPW_SetVarData(ID_VAR_CURDISP5		, gucCursorArray[4]);
	APPW_SetVarData(ID_VAR_INVALID_PASSWORD,giInvalidPassword);
}
void MainMenuScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_ENGFUELRATE_POPUP, engfulrt_popup);
	APPW_SetVarData(ID_VAR_ENGHRS_POPUP , enghrs_popup);
	APPW_SetVarData(ID_VAR_HRMETER		, EngineHourMeter);
	APPW_SetVarData(ID_VAR_ENGFUEL_RATE , gfFuel_rate);
}
void FaultdiagnosticScreenUpdate(void)
{
  unsigned int luiLoop = 0, luiLoop1 = 0, luiLoop2 = 0;
  unsigned long lulDataVar = 0;
//  unsigned char lucDescription = 0;

	APPW_SetVarData(ID_VAR_DIAG_POPUP	, guiDiagPopUp);
	APPW_SetVarData(ID_VAR_REQUEST_DATA	, guiRequestDM1Data);
	APPW_SetVarData(ID_VAR_ROW_COLOUR , gcDiagScroll);
	gucDiagScrollPer = (gcDiagScroll * 100) / (gucFaultLogs[2] + gucFaultLogs[1] + gucFaultLogs[0] + gucFaultLogs[3]); //added
	APPW_SetVarData(ID_VAR_DIAG_SCROLL , gucDiagScrollPer);

	luiLoop2 = 0;
	for(luiLoop = 0; luiLoop < 4;luiLoop++)//3; luiLoop++) /added
	{
		for(luiLoop1 = 0; luiLoop1 < gucFaultLogs[luiLoop]; luiLoop1++)
		{
			luiLoop2++;

			lulDataVar	 				= strDM1Log[luiLoop][luiLoop1].SpnFmi;

			APPW_SetVarData(ID_VAR_SOURCE1 + luiLoop2 - 1 	, strDM1Log[luiLoop][luiLoop1].SourceAddress);
			APPW_SetVarData(ID_VAR_SPN1 + luiLoop2 - 1     	, lulDataVar & 0x7FFFF);
			APPW_SetVarData(ID_VAR_FMI1 + luiLoop2 - 1    	, lulDataVar >> 19);
			APPW_SetVarData(ID_VAR_COUNT1 + luiLoop2 - 1   	, strDM1Log[luiLoop][luiLoop1].OccuranceCount);
			APPW_SetVarData(ID_VAR_PLUG1 + luiLoop2 - 1    	, 1);

			strDM1Log[luiLoop][luiLoop1].MessageId = DM1MessageSelection((lulDataVar & 0x7FFFF),(lulDataVar >> 19));

			APPW_SetVarData(ID_VAR_DESCRIPT1 + luiLoop2 - 1 , strDM1Log[luiLoop][luiLoop1].MessageId);

			if(gcDiagScroll == luiLoop2-1)
			{
				APPW_SetVarData(ID_VAR_SOURCE11 , strDM1Log[luiLoop][luiLoop1].SourceAddress);
				APPW_SetVarData(ID_VAR_SPN11    , lulDataVar & 0x7FFFF);
				APPW_SetVarData(ID_VAR_FMI11    , lulDataVar >> 19);
				APPW_SetVarData(ID_VAR_COUNT11  , strDM1Log[luiLoop][luiLoop1].OccuranceCount);
				APPW_SetVarData(ID_VAR_PLUG11   , 1);

				strDM1Log[luiLoop][luiLoop1].MessageId = DM1MessageSelection((lulDataVar & 0x7FFFF),(lulDataVar >> 19));

				APPW_SetVarData(ID_VAR_DESCRIPT11, strDM1Log[luiLoop][luiLoop1].MessageId);
			}
		}
	}
}
void UsersettingsScreenUpdate(void)
{
    APPW_SetVarData(ID_VAR_ROWSEL		, gcUserScroll);
	APPW_SetVarData(ID_VAR_WARNING, WarningPopUp);
	APPW_SetVarData(ID_VAR_WARN_MSG, WarningMsg);
	APPW_SetVarData(ID_VAR_MODE			, giMode);
	APPW_SetVarData(ID_VAR_LIGHT		, giMode);
	APPW_SetVarData(ID_VAR_INTENSITY_PER, giIntensityPercent);
	APPW_SetVarData(ID_VAR_DAY_EDIT		, guiDate);
	APPW_SetVarData(ID_VAR_MONTH_EDIT	, guiMonth);
	APPW_SetVarData(ID_VAR_YEAR_EDIT	, guiYear);
	APPW_SetVarData(ID_VAR_HOUR_EDIT	, guiHour);
	APPW_SetVarData(ID_VAR_MIN_EDIT		, guiMinute);
	APPW_SetVarData(ID_VAR_SEC_EDIT		, guiSecond);
	APPW_SetVarData(ID_VAR_MERIDIAN_EDIT, guiMeridian);

	APPW_SetVarData(ID_VAR_SELCT_SCREEN		, guiselct_screen);
	APPW_SetVarData(ID_VAR_SCREEN_ON_OFF	, guiscreen_on_off);
	APPW_SetVarData(ID_VAR_SELCT_HOME_SCREEN, guiselct_home_screen);

	APPW_SetVarData(ID_VAR_SAVE_STATUS, save_status);//0: SAVE,1:DATA SAVED
}

void SystemsetupScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_HRMETER		, EngineHourMeter);
	APPW_SetVarData(ID_VAR_DISPLAY_HRS	, DisplayHourMeter);
}
void ServicereminderScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_BLOCK_SELECTED , gcScrollSel);
	APPW_SetVarData(ID_VAR_CHANGE_ENGOIL_INTERVAL			, guiEngOilInterval);
	APPW_SetVarData(ID_VAR_CHANGE_AIRFILTER_INTERVAL		, guiAirFilterInterval);
	APPW_SetVarData(ID_VAR_CHANGE_HYDOIL_INTERVAL			, guiHydOilInterval);
	APPW_SetVarData(ID_VAR_SERVICE_ENGINE_INTERVAL			, guiSerEngInterval);
	APPW_SetVarData(ID_VAR_SERVICE_MACHINE_INTERVAL			, guiSerMacInterval);
	APPW_SetVarData(ID_VAR_CHANGE_ENGOIL_NEXT				, guiEngOilNext);
	APPW_SetVarData(ID_VAR_CHANGE_AIRFILTER_NEXT			, guiAirFilterNext);
	APPW_SetVarData(ID_VAR_CHANGE_HYDOIL_NEXT				, guiHydOilNext);
	APPW_SetVarData(ID_VAR_SERVICE_ENGINE_NEXT				, guiSerEngNext);
	APPW_SetVarData(ID_VAR_SERVICE_MACHINE_NEXT				, guiSerMacNext);
	APPW_SetVarData(ID_VAR_CHANGE_ENGOIL_REMAINING			, guiEngOilRemain);
	APPW_SetVarData(ID_VAR_CHANGE_AIRFILTER_REMAINING		, guiAirFilterRemain);
	APPW_SetVarData(ID_VAR_CHANGE_HYDOIL_REMAINING			, guiHydOilRemain);
	APPW_SetVarData(ID_VAR_SERVICE_ENGINE_REMAINING			, guiSerEngRemain);
	APPW_SetVarData(ID_VAR_SERVICE_MACHINE_REMAINING		, guiSerMacRemain);

	APPW_SetVarData(ID_VAR_TOTAL_ENGINE_HRS		, EngineHourMeter);
}
void ChangepasswordScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_PWDRETRY		, giPasswordRetry);
	APPW_SetVarData(ID_VAR_CURDISP1		, gucCursorArray[0]);
	APPW_SetVarData(ID_VAR_CURDISP2		, gucCursorArray[1]);
	APPW_SetVarData(ID_VAR_CURDISP3		, gucCursorArray[2]);
	APPW_SetVarData(ID_VAR_CURDISP4		, gucCursorArray[3]);
	APPW_SetVarData(ID_VAR_CURDISP5		, gucCursorArray[4]);
}
void RawcanloggingScreenUpdate(void)
{
	if((gucRecTimeCount == 1 || gucRecTimeCount == 0) && (gucRecordingStatus == 1 || vms.flag.flag_storing_raw_can_data == 1))
	{
		gucRecordingStatus  = 3;//displays STORING.... on the display
	}else{/**/}

	if(timer_updated==0)
	{
		APPW_SetVarData(ID_VAR_30SECTIMER, gucRecTimeCount);
		timer_updated=1;
	}

	/*************Added by Rajashekhar on 15.06.2022 to display STORING.... on the display ************/
	if(vms.flag.flag_storing_raw_can_data == 1 && gucRecordingStatus  == 3)
	{
		vms.flag.flag_storing_raw_can_data = 0;
		store_raw_can_data_sd_card  = 1;
	}else{/**/}
	/**************************************************************************************************/

	APPW_SetVarData(ID_VAR_RECSTATUS	, gucRecordingStatus);
	APPW_SetVarData(ID_VAR_COPYSTATUS	, gucCopyStatus);
	APPW_SetVarData(ID_VAR_READSTATUS	, gucReadStatus);
	APPW_SetVarData(ID_VAR_IDSTATUS		, gucIdStatus);
	APPW_SetVarData(ID_VAR_LOGSIZE		, guiLogFileSize);
	APPW_SetVarData(ID_VAR_DAY			, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH		, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR			, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR			, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE		, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_SEC			, strDateTime.Second);
}
void DataloggingScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_COPYSTATUS	, gucCopyStatus);
	APPW_SetVarData(ID_VAR_READSTATUS	, gucReadStatus);
	APPW_SetVarData(ID_VAR_IDSTATUS		, gucIdStatus);
	APPW_SetVarData(ID_VAR_LOGSIZE		, guiLogFileSize);
	APPW_SetVarData(ID_VAR_DAY			, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH		, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR			, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR			, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE		, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_SEC			, strDateTime.Second);
}
void FaultloggingScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_RECSTATUS	, gucRecordingStatus);
	APPW_SetVarData(ID_VAR_COPYSTATUS	, gucCopyStatus);
	APPW_SetVarData(ID_VAR_READSTATUS	, gucReadStatus);
	APPW_SetVarData(ID_VAR_IDSTATUS		, gucIdStatus);
	APPW_SetVarData(ID_VAR_LOGSIZE		, guiLogFileSize);
	APPW_SetVarData(ID_VAR_DAY			, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH		, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR			, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR			, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE		, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_SEC			, strDateTime.Second);
}
void OndisplayKeypadScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_KEYPAD_X		, guiXAxis);
	APPW_SetVarData(ID_VAR_KEYPAD_Y		, guiYAxis);
	APPW_SetVarData(ID_VAR_SELECTED_CHARACTER		, 1);
	APPW_SetVarData(ID_VAR_KEYPAD_WARNING		, use_only_numericals);
}
void SwcsScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_SAVE_STATUS, save_status);//0: SAVE,1:DATA SAVED

	APPW_SetVarData(ID_VAR_SWCS_CNTR	, swcs_cntr);
	APPW_SetVarData(ID_VAR_S1STRT_HH	, swcs_values[0]);
	APPW_SetVarData(ID_VAR_S1STRT_MM	, swcs_values[1]);
	APPW_SetVarData(ID_VAR_S1STRT_MER	, swcs_values[2]);
	APPW_SetVarData(ID_VAR_S1STOP_HH	, swcs_values[3]);
	APPW_SetVarData(ID_VAR_S1STOP_MM	, swcs_values[4]);
	APPW_SetVarData(ID_VAR_S1STOP_MER	, swcs_values[5]);

	APPW_SetVarData(ID_VAR_S2STRT_HH	, swcs_values[6]);
	APPW_SetVarData(ID_VAR_S2STRT_MM	, swcs_values[7]);
	APPW_SetVarData(ID_VAR_S2STRT_MER	, swcs_values[8]);
	APPW_SetVarData(ID_VAR_S2STOP_HH	, swcs_values[9]);
	APPW_SetVarData(ID_VAR_S2STOP_MM	, swcs_values[10]);
	APPW_SetVarData(ID_VAR_S2STOP_MER	, swcs_values[11]);

	APPW_SetVarData(ID_VAR_S3STRT_HH	, swcs_values[12]);
	APPW_SetVarData(ID_VAR_S3STRT_MM	, swcs_values[13]);
	APPW_SetVarData(ID_VAR_S3STRT_MER	, swcs_values[14]);
	APPW_SetVarData(ID_VAR_S3STOP_HH	, swcs_values[15]);
	APPW_SetVarData(ID_VAR_S3STOP_MM	, swcs_values[16]);
	APPW_SetVarData(ID_VAR_S3STOP_MER	, swcs_values[17]);
}
void WorkingHrsLoggingScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_COPYSTATUS	, gucCopyStatus);
	APPW_SetVarData(ID_VAR_READSTATUS	, gucReadStatus);
	APPW_SetVarData(ID_VAR_IDSTATUS		, gucIdStatus);
	APPW_SetVarData(ID_VAR_LOGSIZE		, guiLogFileSize);
	APPW_SetVarData(ID_VAR_DAY			, strDateTime.Date);
	APPW_SetVarData(ID_VAR_MONTH		, strDateTime.Month);
	APPW_SetVarData(ID_VAR_YEAR			, strDateTime.Year);
	APPW_SetVarData(ID_VAR_HOUR			, strDateTime.Hour);
	APPW_SetVarData(ID_VAR_MINUTE		, strDateTime.Minute);
	APPW_SetVarData(ID_VAR_SEC			, strDateTime.Second);
}
void Faultdiagnostic2ScreenUpdate(void)
{
	APPW_SetVarData(ID_VAR_DIAG_POPUP	, guiDiagPopUp);
	APPW_SetVarData(ID_VAR_SOURCE_SEL	, SourceAdrr);

#ifdef DOZER_P_VER
	APPW_SetVarData(ID_VAR_DESCRIPT1	, DiagPage2[VMS].Message);
	APPW_SetVarData(ID_VAR_SPN1	, DiagPage2[VMS].SPN);
	APPW_SetVarData(ID_VAR_FMI1	, DiagPage2[VMS].FMI);
	APPW_SetVarData(ID_VAR_COUNT1	, DiagPage2[VMS].OccCount);
	APPW_SetVarData(ID_VAR_CURNT_ERR_NO_1	, DiagPage2[VMS].CurrentCount);
	APPW_SetVarData(ID_VAR_TOTAL_ERRS_NO_1	, DiagPage2[VMS].MaximumCount);
#else
	APPW_SetVarData(ID_VAR_DESCRIPT1	, DiagPage2[ENGINE_ECU].Message);
	APPW_SetVarData(ID_VAR_DESCRIPT2	, DiagPage2[VMS].Message);

	APPW_SetVarData(ID_VAR_SPN1	, DiagPage2[ENGINE_ECU].SPN);
	APPW_SetVarData(ID_VAR_SPN2	, DiagPage2[VMS].SPN);

	APPW_SetVarData(ID_VAR_FMI1	, DiagPage2[ENGINE_ECU].FMI);
	APPW_SetVarData(ID_VAR_FMI2	, DiagPage2[VMS].FMI);

	APPW_SetVarData(ID_VAR_COUNT1	, DiagPage2[ENGINE_ECU].OccCount);
	APPW_SetVarData(ID_VAR_COUNT2	, DiagPage2[VMS].OccCount);

	APPW_SetVarData(ID_VAR_CURNT_ERR_NO_1	, DiagPage2[ENGINE_ECU].CurrentCount);
	APPW_SetVarData(ID_VAR_CURNT_ERR_NO_2	, DiagPage2[VMS].CurrentCount);

	APPW_SetVarData(ID_VAR_TOTAL_ERRS_NO_1	, DiagPage2[ENGINE_ECU].MaximumCount);
	APPW_SetVarData(ID_VAR_TOTAL_ERRS_NO_2	, DiagPage2[VMS].MaximumCount);
#endif
	APPW_SetVarData(ID_VAR_STATUS	, DiagPage2[SourceAdrr].Status);
}

void EngHrsEditScreenUpdate(void)
{
#ifdef DOZER_P_VER
	APPW_SetVarData(ID_VAR_WARNING, WarningPopUp);
	APPW_SetVarData(ID_VAR_WARN_MSG, WarningMsg);

	APPW_SetVarData(ID_VAR_EHE_SCROLL, ehe_scroll);
	APPW_SetVarData(ID_VAR_ADJD_ENG_HRS, adjd_eng_hrs);
	APPW_SetVarData(ID_VAR_ENGHRS_EN_DIS, enghrs_en_dis);

	APPW_SetVarData(ID_VAR_CAL_HRS		, CalculatedHrs);//Total Engine Hours
	APPW_SetVarData(ID_VAR_HRMETER		, EngineHourMeter);//Total Engine Hours

	APPW_SetVarData(ID_VAR_SAVE_STATUS, save_status);//0: SAVE,1:DATA SAVED
#endif
}
/*************************** End of file ****************************/
