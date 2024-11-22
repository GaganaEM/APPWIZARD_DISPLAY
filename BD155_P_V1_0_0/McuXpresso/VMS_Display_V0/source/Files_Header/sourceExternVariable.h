#ifndef FILES_HEADER_EXTERNSOURCEVARIABLE_H_
#define FILES_HEADER_EXTERNSOURCEVARIABLE_H_

#define MAXIMIM_NO_OF_MIN_MAX_PARAMETERS                        0x0B


#include "../Files_Application/J1939Stack/sourceJ1939StackExternVariable.h"
#include "../Files_Application/KeypadStack/sourceKeypadStackExternVariable.h"
//#include "../Files_Application/USB_UserApp_Stack/usb_user_app_extern_variables.h"

extern int 	update_rpm;
extern int	cnt_rpm;

extern signed char gcScrollSel;
extern signed char gcDiagScroll;

extern unsigned char gucDiagScrollPer;

extern uint16_t giTurbineRpm;
extern uint16_t guiEctCounts;
extern uint16_t guiEopCounts;
extern uint16_t guiTotCounts;

extern uint16_t guiFreq1;
extern uint16_t guiFreq2;

extern uint8_t gucFaultsActive;
extern unsigned char TempArray[5000][12];

extern bool bDM1RxComplete;
extern bool bDm1FaultPtr;
extern unsigned char gucCnt;
extern unsigned char gucSa;
extern int del,once,ani_start;

extern unsigned char gucSetPassword[5] ;
extern unsigned char gucprevSetPassword[5];
extern unsigned char gucPasswordArray[5]	;
extern unsigned char gucCursorArray[5] 	;
extern char giPasswordRetry;
extern bool bRetryPwdEntry;
extern unsigned char gucPasswordEnterCount;

extern int giScreenSwitch;
extern int giScreenTimeCount;
extern int giPopUpScreen;
extern int giRpmValue;
extern char gcPowerOnExecute;
extern int p_giScreenSwitch;
extern int giCheckTrans;
extern float gfEcl;
extern float gfFuel			;
extern float gfEop				;
extern float gfEct				;
extern int giEngineRpm 		;
extern int giOutputRpm 		;
extern int giVehicleSpeed  	;
extern float gfTop				;
extern float gfTot		 		;
extern float gfBot		 		;
extern float gfVolt 			;
extern float gfEot				;
extern int giSelectedgear  	;
extern int giCurrentGear   	;

extern uint8_t gucPrevKeyValue;
extern unsigned int guiMeridian;
extern int giIcon01	;
extern int giIcon02	;
extern int giIcon03	;
extern int giIcon04	;
extern int giIcon05	;
extern int giIcon06	;
extern int giIcon07	;
extern int giIcon08	;
extern int giIcon09	;
extern int giIcon10	;
extern int giIcon11	;
extern int giIcon12	;
extern int giIcon13	;
extern int giIcon14	;
extern int giIcon15	;
extern int giIcon16	;
extern int giIcon17	;
extern int giIcon18	;
extern int giIconRevCol	;

extern int giIcon01Prev;
extern int giIcon02Prev;
extern int giIcon03Prev;
extern int giIcon04Prev;
extern int giIcon05Prev;
extern int giIcon06Prev;
extern int giIcon07Prev;
extern int giIcon08Prev;
extern int giIcon09Prev;
extern int giIcon10Prev;
extern int giIcon11Prev;
extern int giIcon12Prev;
extern int giIcon13Prev;
extern int giIcon14Prev;
extern int giIcon15Prev;
extern int giIcon16Prev;
extern int giIcon17Prev;
extern int giIcon18Prev;

extern int giOdometer	;

extern int giNaviPopUp;
extern int giIntensityPopUp;
extern int giIntensityPercent;
extern int giPopUpCol;
extern int giDMPopUp		;
extern int gidel;

extern int giMode		   ;
extern int giProcessRpm    ;
extern int giProcessKmph   ;
extern int giProcessEop    ;
extern int giProcessEot    ;
extern int giProcessVolt   ;
extern int giProcessFuel   ;

extern bool bToggleBit 		;
extern bool bToggleIcon01	;
extern bool bToggleIcon02	;
extern bool bToggleIcon03	;
extern bool bToggleIcon04	;
extern bool bToggleIcon05	;
extern bool bToggleIcon06	;
extern bool bToggleIcon07	;
extern bool bToggleIcon08	;
extern bool bToggleIcon09	;
extern bool bToggleIcon10	;
extern bool bToggleIcon11	;
extern bool bToggleIcon12	;
extern bool bToggleIcon13	;
extern bool bToggleIcon14	;
extern bool bToggleIcon15	;
extern bool bToggleIcon16	;
extern bool bToggleIcon17	;

extern bool bNightMode		;
extern bool bPrevMode		;
extern bool bTimeFormat		;

//extern uint64_t gulDigitalInputFrame1;
//extern uint64_t gulDigitalInputFrame2;
//extern uint64_t gulAnalogInputFrame1	;
//extern uint64_t gulAnalogInputFrame2;
//extern uint64_t gulAnalogInputFrame3;

extern float gfBotValue;
extern float gfEotValue;
extern float gfTopValue;
extern float gfFuelValue;
extern float gfVoltageValue;

extern uint16_t guiVoltageCounts;
extern uint16_t guiBotCounts;
extern uint16_t guiEotCounts;
extern uint16_t guiTopCounts;
extern uint16_t guiFuelCounts;

extern uint16_t guiToggleCount		 ;

struct GuageIndicator
{
    int16_t  CurrentValue;
    int16_t  PreviousValue;
};

extern struct GuageIndicator GuageRpm;
extern struct GuageIndicator GuageKmph;
extern struct GuageIndicator GuageEop;
extern struct GuageIndicator GuageEct;
extern struct GuageIndicator GuageFuel;
extern struct GuageIndicator GuageFIP;

extern struct GuageIndicator GuageVolt;
extern struct GuageIndicator GuageVolt2;

extern struct GuageIndicator GuageEot;
extern struct GuageIndicator GuageEct2;
extern struct GuageIndicator GuageBot;
extern struct GuageIndicator GuageTop;
extern struct GuageIndicator GuageTop2;
extern struct GuageIndicator GuageCot;
extern struct GuageIndicator GuageCot2;

extern struct
{
	uint8_t Date;
	uint8_t Month;
	uint16_t Year;
	uint8_t Hour;
	uint8_t Minute;
	uint8_t Second;
	uint8_t Meredian;
}strDateTime;

struct AnalogData
{
	uint64_t
	An1Raw 			:	16,
	An1Converted 	:	16,
	An2Raw 			:	16,
	An2Converted	:	16;
};

extern union
{
	uint64_t 	all;
    struct AnalogData part;
}strIoAnalog;

extern unsigned char gucRecordingStatus;
extern unsigned char gucCopyStatus;
extern unsigned char gucReadStatus;
extern unsigned char gucIdStatus;
extern unsigned char gucRecordingStatus;
extern unsigned int  guiLogFileSize;
//volatile extern unsigned char gucRecTimeCount;
extern volatile signed long gucRecTimeCount;
extern unsigned char filecopy[1500];
extern bool bStartMinMaxFrameLog;
extern bool bStartRawFrameLog;
extern bool bStartRawFrameUsb;
extern bool bStartFaultFrameLog;
extern bool bStartFaultFrameUsb;
extern bool bStartDataLogging;
extern bool bStrtWorkinghrsLogging;
extern unsigned int guiRawLogCount;
//extern int giScreenPrevSwitch;

extern bool bPasswordTest;
extern uint8_t gucCurrentScreen;
extern uint8_t gucKeyPressed;
extern uint8_t gucFunctionPopUpScreen;

extern struct
{
	uint8_t 	CurrentCount;
	uint8_t 	MaximumCount;
	uint8_t 	DeviceId;
	Uint32	SPN;
	uint8_t	FMI;
	uint8_t   OccCount;
	uint8_t   Address;
	uint8_t   Message;
	uint8_t   Status;
}strDm1Screen;
extern unsigned char gucDm1FaultPtr;
extern unsigned char lucAddress	 ;

extern char gcCharSelect;
extern unsigned char gucArrayLine[16];
extern unsigned char gucChCount;
extern unsigned int guiXAxis;
extern unsigned int guiYAxis;
extern unsigned char gcAlphabetSel;
extern unsigned long filedatapt;


extern unsigned int guiDate;
extern unsigned int guiMonth;
extern unsigned int guiYear;
extern unsigned int guiHour;
extern unsigned int guiMinute;
extern unsigned int guiSecond;
extern char gcUserScroll;

extern unsigned int guiEngOilInterval;
extern unsigned int guiAirFilterInterval;
extern unsigned int guiHydOilInterval;
extern unsigned int guiSerEngInterval;
extern unsigned int guiSerMacInterval;

extern unsigned int guiEngOilNext;
extern unsigned int guiAirFilterNext;
extern unsigned int guiHydOilNext;
extern unsigned int guiSerEngNext;
extern unsigned int guiSerMacNext;

extern unsigned int guiEngOilRemain;
extern unsigned int guiAirFilterRemain;
extern unsigned int guiHydOilRemain;
extern unsigned int guiSerEngRemain;
extern unsigned int guiSerMacRemain;
extern unsigned char gucEditService;
extern unsigned char store_raw_can_data_sd_card;

extern unsigned char guiDiagTimer;
extern unsigned int guiDiagCounter;
extern int guiRequestDM1Data;
extern unsigned char guiDiagCounttemp;
extern int guiDiagPopUp;
extern int giInvalidPassword;
extern int WarningPopUp;
extern int guiIconScreen;
extern GUI_CONST_STORAGE GUI_BITMAP bmleftind1OFF52X52;
extern GUI_CONST_STORAGE GUI_BITMAP bmleftind1ON52X52;
extern GUI_CONST_STORAGE GUI_BITMAP bmLeftInd_on52X52;
extern GUI_CONST_STORAGE GUI_BITMAP bmLeftInd_off52X52;
extern uint32_t rawdatadatapt;

/*************************************MinMax*******************************/

struct AnalogInputDataFrame
{
    uint8_t Name[16];
    uint8_t Idendifier;
    uint8_t FunctionStatus;
    uint8_t ModeSelection;
    float ErrorLow;
    float ErrorHigh;
    float ErrorOpen;
    float ErrorShortCircuit;
    float PosNegCorreFactor;
    float CorreCalibrationFactor;
};

extern struct AnalogInputDataFrame DefaultAnalogInput[9];
extern struct AnalogInputDataFrame DefaultAnalogInput[9];
extern Uint32 gulAdcAndSpeedRawData[11];
extern Uint32 gulAdcAndSpeedConvetedData[11];
extern float gulAdcFloatData[11];

struct ADCChannel
{
    float AdcProcessedValue;
    Uint32 AdcAvgCount;
    uint16_t *AdcRawCount;
    uint16_t AdcSamples;
    uint16_t SampledAvgCounts;
};

struct AdcSelectRegister
{
    uint8_t readChannel;
    uint8_t lookUpTable;
    uint8_t sensorType;
    uint8_t sensorNumber;
    uint8_t AdcDataSource;
};

extern struct ADCChannel strAdc;

enum  CHANNEL_TYPE {   CH_A1_R1,   CH_A1_R2,  CH_A1_I1,  CH_A1_I2,  CH_A1_V,  CH_A1_EC,   CH_A1_TC,
	CH_A2_R1,   CH_A2_R2,  CH_A2_I1,  CH_A2_I2,  CH_A2_V,  CH_A2_EC,   CH_A2_TC,
	CH_A3_R1,   CH_A3_R2,  CH_A3_I1,  CH_A3_I2,  CH_A3_V,  CH_A3_EC,   CH_A3_TC,
	CH_A4_R1,   CH_A4_R2,  CH_A4_I1,  CH_A4_I2,  CH_A4_V,  CH_A4_EC,   CH_A4_TC,
	CH_A5_R1,   CH_A5_R2,  CH_A5_I1,  CH_A5_I2,  CH_A5_V,  CH_A5_EC,   CH_A5_TC,
	CH_A6_R1,   CH_A6_R2,  CH_A6_I1,  CH_A6_I2,  CH_A6_V,  CH_A6_EC,   CH_A6_TC,
	CH_A13_R1,  CH_A13_R2, CH_A13_I1, CH_A13_I2, CH_A13_V, CH_A13_EC,  CH_A13_TC,
	CH_A14_R1,  CH_A14_R2, CH_A14_I1, CH_A14_I2, CH_A14_V, CH_A14_EC,  CH_A14_TC,
	CH_BATT_IN
};

enum CHANNEL_NAME {CH_A1, CH_A2, CH_A3, CH_A4, CH_A5, CH_A6, CH_A7, CH_A8, BATT_IN};

extern float giTareValue_A1_I1;
extern uint16_t giTareCount_A1_I1;
extern float giCalValue_A1_I1;
extern uint16_t giCalCount_A1_I1;

extern float giTareValue_A5_I1;
extern uint16_t giTareCount_A5_I1;
extern float giCalValue_A5_I1;
extern uint16_t giCalCount_A5_I1;

extern float giTareValue_A1_I2;
extern uint16_t giTareCount_A1_I2;
extern float giCalValue_A1_I2;
extern uint16_t giCalCount_A1_I2;

extern float giTareValue_A13_I1;
extern uint16_t giTareCount_A13_I1;
extern float giCalValue_A13_I1;
extern uint16_t giCalCount_A13_I1;

extern float giTareValue_A13_I2;
extern uint16_t giTareCount_A13_I2;
extern float giCalValue_A13_I2;
extern uint16_t giCalCount_A13_I2;

extern float giTareValue_A14_I1;
extern uint16_t giTareCount_A14_I1;
extern float giCalValue_A14_I1;
extern uint16_t giCalCount_A14_I1;

extern float giTareValue_A14_I2;
extern uint16_t giTareCount_A14_I2;
extern float giCalValue_A14_I2;
extern uint16_t giCalCount_A14_I2;


//extern const float gucaLookUpTable_A1_R1[][6];
//extern const float gucaLookUpTable_A1_R2[][6];
//extern const float gucaLookUpTable_A2_R1[][5];
//extern const float gucaLookUpTable_A2_R2[][5];
//extern const float gucaLookUpTable_A3_R1[][6];
//extern const float gucaLookUpTable_A3_R2[][6];
//extern const float gucaLookUpTable_A4_R1[][5];
//extern const float gucaLookUpTable_A4_R2[][5];
//extern const float gucaLookUpTable_A6_R1[][5];
//extern const float gucaLookUpTable_A13_R1[][5];
//extern const float gucaLookUpTable_A13_R2[][5];
//extern const float gucaLookUpTable_A14_R1[][5];
//extern const float gucaLookUpTable_A14_R2[][5];
#ifdef ADC_CONFIG_10BIT
	extern const float LookUpTable_A1[][15];
	extern const float LookUpTable_A1R1[][15];

	extern const float LookUpTable_A2[][6];
	extern const float LookUpTable_A2I1[][6];

	extern const float LookUpTable_A3[][5];
	extern const float LookUpTable_A3R1[][5];
#else
	extern const float LookUpTable_A1[][17];
	extern const float LookUpTable_A1R1[][17];

	extern const float LookUpTable_A2[][6];
	extern const float LookUpTable_A2I1[][6];

	extern const float LookUpTable_A3[][5];
	extern const float LookUpTable_A3R1[][5];

	extern const float LookUpTable_A4[][29];
#endif
extern uint16_t a1_cnts  ;
extern float a1_conv_val ;
extern float a1_type   ;

extern uint16_t a2_cnts  ;
extern float a2_conv_val ;
extern float a2_type   ;

extern uint16_t a3_cnts  ;
extern float a3_conv_val ;
extern float a3_type   ;

extern uint16_t battery_cnts  ;
extern float battery_conv_val ;

//-----------engine_oil_pressure-----------//
extern uint16_t glEOPCanData;
extern uint16_t giEOP_kPa;
extern float giEOP_Bar;
//-----------engine_coolant_temprature-----//
extern uint16_t glECTCanData;
extern float giECT_DegreeC;
//-----------Transmission_oil_temprature---//
extern uint16_t glTOTCanData;
extern float giTOT_DegreeC;
//-----------Engine_speed------------------//
extern uint16_t glEngine_speedCanData;
//----------Vehicle speed-----------//
extern uint16_t glVehicle_speedCanData;
//----------HOUR METER-----------//
extern uint64_t glHour_meterCanData;

struct strValueFormula
{
    uint16_t  Count;
    uint16_t  CountX;
    uint16_t  CountY;
    float ValueX;
    float ValueY;
};

extern struct  strValueFormula strValueCalculation;

//Calibration Related
extern int32_t giChannelOffset_A1_R1;
extern int32_t giChannelOffset_A1_R2;
extern int32_t giChannelOffset_A1_I1;
extern int32_t giChannelOffset_A1_I2;
extern int32_t giChannelOffset_A2_R1;
extern int32_t giChannelOffset_A2_R2;
extern int32_t giChannelOffset_A3_R1;
extern int32_t giChannelOffset_A3_R2;
extern int32_t giChannelOffset_A5_I1;
extern int32_t giChannelOffset_A6_R1;
extern int32_t giChannelOffset_A4_R1;
extern int32_t giChannelOffset_A4_R2;
extern int32_t giChannelOffset_A13_R1;
extern int32_t giChannelOffset_A13_R2;
extern int32_t giChannelOffset_A13_I1;
extern int32_t giChannelOffset_A13_I2;

extern int32_t giChannelOffset_A14_R1;
extern int32_t giChannelOffset_A14_R2;
extern int32_t giChannelOffset_A14_I1;
extern int32_t giChannelOffset_A14_I2;
extern uint8_t gucCurErrorStatus[48];
extern uint8_t gucaMinMaxErrorStatus[MAXIMIM_NO_OF_MIN_MAX_PARAMETERS];

struct SpeedInputDataFrame
{
    uint8_t Name[16];
    uint8_t Idendifier;
    uint8_t FunctionStatus;
    uint8_t ModeSelection;
    float ErrorLow;
    float ErrorHigh;
    float ErrorOpen;
    float ErrorShortCircuit;
    float PosNegCorreFactor;
    float CorreCalibrationFactor;
    Uint32 TeethCounts;
};

extern struct SpeedInputDataFrame DefaultSpeedInput[2];

struct MinMaxLogRegister
{
    Uint32 Date;
    Uint32 Time;
    Uint32 DisplayHoursRunHrs;

    float CltTempMaxValueTHDEG;
    float CltTempCurrentValueDEG;
    float CltTempMinValueTHDEG;

    float EopMaxValueHighIdleTHKKpa;
    float EopCurrentValueKpa;
    float EopMinValueHighIdleTHKpa;

    float EngSpdMaxValueRPM;
    float EngSpdCurrentValueRPM;
    float EngSpdAvgValueRPM;

    float TopMaxValueKpa;
    float TopCurrentValueKpa;
    float TopMinValueKpa;

    float TotMaxValueDEG;
    float TotCurrenrvalueDEG;
    float TotMinValueDEG;

    float HrotMaxValueDEG;
    float HrotCurentValueDEG;
    float HrotMinValueDEG;

    float VehSpdMaxValueKmph;
    float VehSpdCurrentValueKmph;

    float EotMaxValueDEG;
    float EotCurrentValueDEG;
    float EotMinValueDEG;

    float ApMaxValueKpa;
    float ApCurrentValueKpa;
    float ApMinValueKpa;

    float SotMaxValueDEG;
    float SotCurrentValueDEG;
    float SotMinValueDEG;

    float FuellvlMaxValuePer;
    float FuellvlCurrentValuePer;
    float FuellvlMinValuePer;

    float BatteryMaxValueV;
    float BatteryCurrentValueV;
    float BatteryMinValueV;

    float ConverterOiltempMaxValue;
    float ConverterOiltempCurrentValue;
    float ConverterOiltempMinValue;

    Uint32 LogNumber;
    uint8_t ErrorType;
    uint8_t ParameterType;
};

extern struct MinMaxLogRegister strMinMaxDataFrame;
extern struct MinMaxLogRegister strDataLoggingFrame;
extern struct MinMaxLogRegister strfaultLoggingData;
extern unsigned char lucPrevErrorStatusECT;
extern unsigned char lucPrevErrorStatusEOP;
extern unsigned char lucPrevErrorStatusRPM;
extern unsigned char lucPrevErrorStatusTOP;
extern unsigned char lucPrevErrorStatusTOT;
extern unsigned char lucPrevErrorStatusRSpeed;
extern unsigned char lucPrevErrorStatusEOT;
extern unsigned char timer_updated;
extern unsigned char guiPendrivePoPup;
extern unsigned char guiPendriveStatus;
extern unsigned int pendrive_counter_timeout;
extern unsigned char pendrive_detected_timeout;
extern unsigned char start_pendrive_timeout;

extern unsigned char pendrivestatusstrttimer;
extern unsigned int pendrivestatuscounter;
extern unsigned char pendrive_removed;
extern unsigned char popeup_out_once;
extern int giCloseOpenScreens;
extern unsigned char pendrive_check;
extern unsigned char gisdcardpopup;
extern unsigned char gisdcardstatus;
extern unsigned int giTimeCountpopup;
extern unsigned char SDCardfuncBegin;


extern unsigned char data_logging_10min;
extern unsigned char start_data_logging_for_every_10min;
extern unsigned long Dataloggingdatapt;
extern unsigned char Dataloggingheader;
extern unsigned long dataloggingcounter;

extern unsigned long CopyMinMaxdataptr;
extern unsigned long CopyDataloggingdataptr;
extern float gfconvertedfuellvl;
extern float gfconvertedCot;

extern uint32_t counterClock;
extern uint32_t timeCapt;
extern uint32_t ucfreqcount;

extern volatile bool qtmrIsrFlag;
extern float tusec;
extern unsigned long freq;
extern unsigned long Captured_Freq;

extern uint8_t rtc_sec;
extern uint8_t rtc_min;
extern uint8_t rtc_hour;
extern uint8_t rtc_date;
extern uint8_t rtc_month;
extern uint8_t rtc_year;
extern uint8_t PM_var;

extern uint8_t SECOND_ADDRESS      ;
extern uint8_t MINUTE_ADDRESS      ;
extern uint8_t HOUR_ADDRESS        ;
extern uint8_t MONTH_ADDRESS       ;
extern uint8_t YEAR_ADDRESS        ;
extern uint8_t DAY_OF_WEEK_ADDRESS ;
extern uint8_t CTRL_STATUS_ADDRESS ;
extern uint8_t DATE_ADDRESS        ;
extern uint8_t SET_12HOUR_AM       ;
extern uint8_t MASK_12HOUR         ;
extern uint8_t MASK_SECOND         ;
extern uint8_t MASK_MINUTE         ;
extern uint8_t MASK_DATE           ;
extern uint8_t MASK_MONTH          ;
extern uint8_t MASK_YEAR           ;

extern unsigned int uimax22190datareceived;

struct strReadBits
{
    uint8_t
//    DiEngCoolantLevel           :1,
//	DiTransOilfilterClog        :1,
//    input_3        				:1,
//    DiSeatBelt        			:1,
//    input_5        				:1,
//    ingnition      				:1,
//    na             				:1,
//    na1            				:1;

	input1        :1,
	input2        :1,
	input3        :1,
	input4        :1,
	input5        :1,
	input6        :1,
	na            :1,
	na1           :1;
};

extern union strReadBitsRegister
{
    uint8_t               all;
    struct strReadBits  bits;
}strReadInputs;

extern unsigned int guiadccounts;
extern uint16_t adccountsfor0to28bar[282];
extern float curvaluefor0to28bar[282];
extern float pressurevaluefor0to28bar[282];
extern uint16_t adccountsfor0to60bar[602];
extern float curvaluefor0to60bar[602];
extern float pressurevaluefor0to60bar[602];
extern uint16_t adccountsforbatteryVol[122];
extern float batteryVolvaluefor8to32V[122];
extern uint16_t adccountsforres40to6K[106];
extern uint16_t resvaluefor40to6K[106];
extern uint16_t tempvaluefor40to6K[106];

extern float gfeopcurrentvalue;
extern uint16_t guieopadcvalue;
extern float gftopcurrentvalue;
extern uint16_t guitopadcvalue;
extern uint16_t guicotresistancevalue;
extern uint16_t guicotadcvalue;
extern uint16_t guicottempvalue;
extern uint16_t guibatteryadcvalue;

extern unsigned char diRwl;
extern unsigned char diPrkbrk;
extern unsigned char diAirfilclg;
extern unsigned char diseatbelt;
extern unsigned char diEOFC;


extern float gfCot;

extern struct strDiagnosticMessage strDmLogfromVMS[NO_OF_INTERNAL_DM1_MSG];
extern struct strDiagnosticMessage strDmLogfromVMSprev[NO_OF_INTERNAL_DM1_MSG];
extern struct strDiagnosticMessage strDmLogfromVMSerror[NO_OF_INTERNAL_DM1_MSG];
extern unsigned char error_cnt;
extern unsigned char error_cnt_VMS;

extern struct
{
	unsigned int
				eop 	: 1,
				rpm 	: 1,
				speed 	: 1,
				batt 	: 1,
				ect 	: 1,
				top 	: 1,
				tot 	: 1,
				eot 	: 1,
				cot 	: 1,
				fuel 	: 1;
}faultsymbols;

#ifdef DOZER_P_VER
	extern unsigned int counter_cot;
	extern unsigned int counter_top;
	extern unsigned int counter_eop;
	extern unsigned int counter_batt;
	extern unsigned int counter_freq;

	struct adccounts
	{
		uint16_t cot_adc_counts;
		uint16_t eop_adc_counts;
		uint16_t top_adc_counts;
		uint16_t battery_adc_counts;
		unsigned long freq_counts;
	};

	extern struct adccounts presentadc;
	extern struct adccounts prevadc;
	extern struct adccounts tempadc;


	struct timeout
	{
		uint8_t  cot_adc :1,
				 eop_adc: 1,
				 top_adc: 1,
				 battery_adc: 1,
				 freq_in:1;
	};

	extern struct timeout starttmr;
	extern struct timeout stoptmr;
#else
	extern unsigned int counter_cot;
	extern unsigned int counter_top;
	extern unsigned int counter_fuel;
	extern unsigned int counter_batt;
	extern unsigned int counter_freq;
	struct adccounts
	{
		uint16_t cot_adc_counts;
		uint16_t top_adc_counts;
		uint16_t fuel_adc_counts;
		uint16_t battery_adc_counts;
		unsigned long freq_counts;
	};

	extern struct adccounts presentadc;
	extern struct adccounts prevadc;
	extern struct adccounts tempadc;


	struct timeout
	{
		uint8_t  cot_adc :1,
		 	 	 top_adc: 1,
				 fuel_adc: 1,
				 battery_adc: 1,
				 freq_in:1;
	};

	extern struct timeout starttmr;
	extern struct timeout stoptmr;
#endif
extern float km_ctr							;
extern float fract_ctr                  	;
extern float frac_km						;
extern uint32_t Distance_in_km				;
extern float one_km_1  						;
extern float CAN_distance                   ;
extern float distance_p_sec					;

extern unsigned char flagkm_CAN;
extern unsigned char flagodometer_updated;
extern unsigned char flagdistance;
extern unsigned int temp_calc_var;

extern unsigned char unlink_rawCandatalog;
extern unsigned char unlink_datalog;
extern unsigned char unlink_faultlog;
extern unsigned int pulsecount;

/*************APLMS RELATED VARIABLES*************/
struct flag_CAN {
	uint16_t
	F100_last_record	: 1,
	F101_diagnostics 	: 1,
	F102_bargraph 		: 1,
	F105_customer 		: 1,
	process_customer 	: 1,
	process_last_record : 1;
};

extern union {
	uint16_t    all;
	struct flag_CAN APLMS_PGNs;
}aplms_CAN_flags;
//char cutomer_name_buffer[20]	= "abcdefghijklmnopqrst";
//char model_number_buffer[8] 	= " BH 100M";
//char serial_number_buffer[8] 	= "12345678" ;
extern unsigned char data_time_buffer[8]		;
extern char cutomer_name_buffer[20] 			;
extern char model_number_buffer[8]				;
extern char serial_number_buffer[8]				;

extern unsigned int latched_wt                 	;
extern unsigned int swings						;

extern unsigned int LoadTimeHour				;
extern unsigned char LoadTimeMinute 			;

extern unsigned int HaulTimeHour				;
extern unsigned char HaulTimeMinute				;

extern unsigned int HaulStopTimeHour			;
extern unsigned char HaulStopTimeMinute			;

extern unsigned int DumpTimeHour				;
extern unsigned char DumpTimeMinute				;

extern unsigned int ReturnTimeHour				;
extern unsigned char ReturnTimeMinute			;

extern unsigned int ReturnStopTimeHour			;
extern unsigned char ReturnStopTimeMinute		;

extern unsigned int HaulDistance_msb				;
extern unsigned int ReturnDistance_msb				;
extern unsigned int HaulMaxSpeed_msb				;
extern unsigned int HaulAvgSpeed_msb				;
extern unsigned int ReturnMaxSpeed_msb				;
extern unsigned int ReturnAvgSpeed_msb				;

extern unsigned int HaulDistance_lsb				;
extern unsigned int ReturnDistance_lsb				;
extern unsigned int HaulMaxSpeed_lsb				;
extern unsigned int HaulAvgSpeed_lsb				;
extern unsigned int ReturnMaxSpeed_lsb				;
extern unsigned int ReturnAvgSpeed_lsb				;

extern unsigned long long operator_id 			;
extern unsigned int Last_Status					;
extern unsigned int Last_Year					;
extern unsigned int Over_Loaded					;
extern unsigned int Bucket_weight				;
extern unsigned int K1_bucket_weight			;
extern unsigned int K2_bucket_weight			;
extern unsigned int Seconds						;

extern unsigned char Last_Date					;
extern unsigned char Last_Month					;
extern unsigned char Last_Hour					;
extern unsigned char Last_Minute				;
extern unsigned char Last_Seconds				;

extern unsigned long cummulative_weight_per_day	;
extern unsigned int cycle_weight_final         	;
extern unsigned int vehicle_speed              	;
extern unsigned int total_trips_per_day        	;
extern unsigned int number_of_frames ;
extern unsigned int display_tone_value         	;

extern union TpBufferRegister lastrecord[9];
extern union TpBufferRegister customer[3];

extern unsigned char fuel_per_msb ;
extern unsigned char fuel_per_lsb ;
extern unsigned char error_code ;

extern unsigned int total_time_hh ;
extern unsigned int total_time_mm ;
extern unsigned int total_dst_km ;
extern unsigned int total_dst_m ;

extern unsigned int aplms_year;

extern unsigned char acAPPW_Language_0[];

extern float gfFuel_text;
extern float gfFIP_text;
extern float gfEop_text;
extern float gfEct_text;
extern float gfEct_text2;
extern int giEngineRpm_text;
extern int giOutputRpm_text;
extern int giVehicleSpeed_text;
extern float gfTop_text;
extern float gfTot_text;
extern float gfBot_text;
extern float gfVolt_text;
extern float gfVolt2_text;
extern float gfEot_text;
extern float gfCot_text;

/**********added on 15.06.2022 by Rajashekhar from BH60***************/

extern uint8_t power_on_open_faultlog_file;
extern uint8_t fault_found_write_to_sd ;

struct vms_hmi_flags
{
	uint64_t
	flag_storing_raw_can_data :	1,
	gauge_rotation_poweron : 1,
	screen_onoff_home_read :1;
};

extern union
{
	uint64_t all;
    struct vms_hmi_flags flag;
}vms;

extern int EngRpmSensor ;
extern int prevRpm ;

extern uint8_t freq_tmr_start ;
extern uint16_t freq_tmr_start_cnt ;
extern int16_t StepSize;
extern int16_t Step_Size2;
extern int16_t Step_Size3;
extern uint8_t no_of_sec ;

/******17.04.2023***********/
extern Uint32 giHourMeter	;
extern float EngineHourMeter;
extern float Prev_EngineHrs;
extern uint32_t DisplayHourMeter;

extern bool speedo_onoff_status ;
extern bool trans_onoff_status ;
extern bool digi_onoff_status   ;
extern bool analog_onoff_status ;
extern bool eng_rpm_onoff_status;

extern bool speedo_home_status;
extern bool trans_home_status ;
extern bool digi_home_status  ;
extern bool analog_home_status;
extern bool eng_rpm_home_status;

extern uint8_t brightness_percentage ;
extern bool use_only_numericals ;

extern uint8_t Winbond_mem_test_flag;

extern bool datalog_overflow;
extern bool errorlog_overflow ;
extern bool swwhlog_overflow;

extern uint8_t datalog_array[100];
extern uint8_t errorlog_array[100];
extern uint8_t swwhlog_array[50];
/*DL-->DATALOG*/
struct DL_frame
{
    uint8_t DL_Date; 			/*1 byte*/
    uint8_t DL_Month;			/*1 byte*/
    uint8_t DL_Year;			/*1 byte*/
    uint8_t DL_Hour;			/*1 byte*/
    uint8_t DL_Minute;			/*1 byte*/
    uint8_t DL_Seconds;			/*1 byte*/
    uint8_t DL_Merideian;		/*1 byte*/

#ifdef DOZER_P_VER
    uint16_t DL_Engine_Speed;	/*2 byte*/
    uint16_t DL_COT;			/*2 byte*/
    uint16_t DL_TOP;			/*2 byte*/
    uint32_t DL_EngineHoursRunHrs;/*4 byte*/
    uint16_t DL_EOP;			/*2 byte*/
    uint16_t DL_Battery_V;		/*2 byte*/
    uint16_t DL_ECT;			/*2 byte*/
    uint16_t DL_EOT;			/*2 byte*/
    uint16_t DL_Fuel_Percentage;/*2 byte*/
#else
    uint16_t DL_Engine_Speed;	/*2 byte*/
    uint16_t DL_EOP;			/*2 byte*/
    uint16_t DL_EOT;			/*2 byte*/
    uint16_t DL_ECT;			/*2 byte*/
    uint32_t DL_EngineHoursRunHrs;/*4 byte*/
    uint16_t DL_Battery_V;		/*2 byte*/
    uint16_t DL_FIP_rack_pos;	/*2 byte*/
    uint16_t DL_Fuel_Percentage;/*2 byte*/
    uint16_t DL_COT;			/*2 byte*/
    uint16_t DL_TOP;			/*2 byte*/
    uint16_t DL_HOT;			/*2 byte*/
#endif
};

extern struct DL_frame Datalog_frame;

/*EL-->ERRORLOG*/
struct EL_frame
{
    uint8_t EL_Date; 			/*1 byte*/
    uint8_t EL_Month;			/*1 byte*/
    uint8_t EL_Year;			/*1 byte*/
    uint8_t EL_Hour;			/*1 byte*/
    uint8_t EL_Minute;			/*1 byte*/
    uint8_t EL_Seconds;			/*1 byte*/
    uint8_t EL_Merideian;		/*1 byte*/
#ifdef DOZER_P_VER
    uint16_t EL_Engine_Speed;	/*2 byte*/
    uint16_t EL_COT;			/*2 byte*/
    uint16_t EL_TOP;			/*2 byte*/
    uint32_t EL_EngineHoursRunHrs;/*4 byte*/
    uint16_t EL_EOP;			/*2 byte*/
    uint16_t EL_Battery_V;		/*2 byte*/
    uint16_t EL_ECT;			/*2 byte*/
    uint16_t EL_EOT;			/*2 byte*/
    uint16_t EL_Fuel_Percentage;/*2 byte*/
#else
    uint16_t EL_Engine_Speed;	/*2 byte*/
    uint16_t EL_EOP;			/*2 byte*/
    uint16_t EL_EOT;			/*2 byte*/
    uint16_t EL_ECT;			/*2 byte*/
    uint32_t EL_EngineHoursRunHrs;/*4 byte*/
    uint16_t EL_Battery_V;		/*2 byte*/
    uint16_t EL_FIP_rack_pos;	/*2 byte*/
    uint16_t EL_Fuel_Percentage;/*2 byte*/
    uint16_t EL_COT;			/*2 byte*/
    uint16_t EL_TOP;			/*2 byte*/
    uint16_t EL_HOT;			/*2 byte*/
#endif
    uint8_t EL_Source_Addr;     /*1 byte*/
    uint8_t EL_Plug_ID;     	/*1 byte*/
    Uint32 	EL_SPN;     		/*3 byte*/
    uint8_t EL_FMI;     		/*1 byte*/
    uint8_t EL_Occurance_cnt;   /*1 byte*/
    uint8_t EL_Err_status;      /*1 byte*/
    uint8_t EL_Lamp_status;     /*1 byte*/
};

extern struct EL_frame Errorlog_frame;

/*shiftwise working hours*/
struct frame
{
    uint8_t ShiftNo; 			/*1 byte*/
    uint8_t ShiftStartDD;		/*1 byte*/
    uint8_t ShiftStartMM;		/*1 byte*/
    uint8_t ShiftStartYY;		/*1 byte*/
    uint8_t ShiftStartHH;		/*1 byte*/
    uint8_t ShiftStartMIN;		/*1 byte*/
    uint8_t ShiftStartSS;		/*1 byte*/
    uint8_t ShiftStartMER;		/*1 byte*/

    uint8_t ShiftCloseDD;		/*1 byte*/
    uint8_t ShiftCloseMM;		/*1 byte*/
    uint8_t ShiftCloseYY;		/*1 byte*/
    uint8_t ShiftCloseHH;		/*1 byte*/
    uint8_t ShiftCloseMIN;		/*1 byte*/
    uint8_t ShiftCloseSS;		/*1 byte*/
    uint8_t ShiftCloseMER;		/*1 byte*/

    uint16_t ShiftWorkingHrs;		/*2 byte*/
};
extern struct frame Swwhlog_frame;

extern unsigned long log_no;
extern uint8_t usb_attached;
extern bool Start_aplms_logging;

extern bool Appwizard_rendering_pendrv_detect;
extern bool startcpy_to_pendrv;
extern uint16_t rendrng_cnter ;
extern uint8_t *pendrv_filename;

extern bool buzzer_op 			;
extern bool asr_hill_holder_op ;
extern float  gfFuel_rate 		;
extern float  avg_fuel_rate 	;
extern float Prev_Fuel_rate;

extern uint16_t veh_spd_lmt  ;
extern uint16_t disp_seconds_cntr;

extern bool log_display_hrs ;
extern uint8_t  Display_fractn_hr ;
extern uint32_t Display_actual_hr ;

extern bool cwl_op;
extern bool asr_hill_hldr_op;

extern bool spn_fmi_is_valid;

extern bool asr_off_switch;
extern bool abs_off_switch;

extern unsigned int guiselct_screen;
extern unsigned int guiscreen_on_off;
extern unsigned int guiselct_home_screen;

extern bool start_tmr_for_pwron_errs;
extern uint16_t cntr_for_pwron_errs ;
extern bool wait_donotlog_errs_immediately_during_pwron;

extern uint16_t Ect_Resistance ;
extern uint16_t Eot_Resistance ;
extern uint16_t Fuel_Resistance;

extern uint16_t Sender_CAN_Alive;

extern bool start_tmr_for_sender_CAN;
extern uint16_t Sender_CAN_tmr_cnt ;
extern bool SenderCAN_disconnected;

extern uint8_t Eng_oil_filter_clogd;

extern bool start_tmr_for_eng_hrs_log;
extern uint16_t eng_hrs_tmr_cnt;
extern bool log_eng_hrs ;
extern uint16_t eng_seconds_cntr;
extern uint8_t eng_fractn_hr;
extern uint32_t eng_actual_hr ;

extern uint16_t datalength;
extern bool dm1_process_start;

/******02.06.2022*********/
extern uint16_t gl_LoopCheck ;

extern uint8_t  gl_NoOfFaults;
extern uint8_t  gl_Loop 	;
extern uint8_t  gl_Loop1	;
extern uint8_t  gl_Frame	;
extern uint8_t  gl_Status		;

extern Uint32 gl_spnDm1 ;
extern uint8_t gl_fmiDm1;

extern bool engfulrt_popup;
extern bool enghrs_popup;

extern uint8_t swcs_cntr;
extern uint8_t swcs_values[18];
extern uint8_t values_of_swcs[18];
extern uint8_t swcs_def_values[];


extern uint8_t log_sec_counter;
extern bool start_tmr_for_disp_hrs_log;
extern bool display_on;
extern bool eng_on;
extern bool Eng_rpm_present;

extern uint8_t ref_hr;
extern uint8_t ref_min;
extern uint8_t ref_sec;

extern uint8_t reference_hr;
extern uint8_t reference_min;
extern uint8_t reference_sec;

extern uint8_t whrs_ref_hr;
extern uint8_t whrs_ref_min;
extern uint8_t whrs_ref_sec;
extern bool whrs_make_ref_time_as_prsnt_time;

extern bool make_ref_time_as_prsnt_time;
extern bool make_ref_tm_as_prsnt_tm_eng_hrs;
extern bool rtc_datetime_edited;
extern bool rtc_datetime_edited_enghrs;
extern bool save_status;

extern uint32_t stored_ref_time;

/**DM1 RELATED**/
extern union TpBufferRegister DM1RecieveMsgBuffer[DM1_SA][255];

/*********************************************************/
extern uint8_t lucFault;

extern bool Next_error_msg;
extern bool Previous_error_msg;

extern bool next_to_previous_flag;
extern bool previous_to_next_flag;

extern uint16_t Currnt_err_no;
extern uint16_t err_index ;
extern bool next_button_pressed;
extern bool previous_button_pressed;

extern uint16_t s_addr;
extern uint16_t err_no;

extern bool strt_tmr_for_err_icon_toggle;
extern uint16_t toggle_err_icon_cntr;

extern bool strt_tmr_for_idntset_toggle;
extern uint16_t toggle_idntset_cntr;

extern bool strt_tmr_for_seatbelt_symbol_toggle;
extern uint16_t toggle_seatbelt_cntr;

extern bool strt_tmr_for_eop_icon_toggle;
extern uint16_t toggle_eop_icon_cntr;

extern bool strt_tmr_for_ect_icon_toggle;
extern uint16_t toggle_ect_icon_cntr;

extern bool strt_tmr_for_eot_icon_toggle;
extern uint16_t toggle_eot_icon_cntr;

extern bool strt_tmr_for_fuel_icon_toggle;
extern uint16_t toggle_fuel_icon_cntr;

extern bool strt_tmr_for_top_icon_toggle;
extern uint16_t toggle_top_icon_cntr;

extern bool strt_tmr_for_tot_icon_toggle;
extern uint16_t toggle_tot_icon_cntr;

extern bool strt_tmr_for_ovrspd_toggle;
extern uint16_t toggle_ovrpsd_cntr;
extern bool engovrspd;

extern uint16_t Err_index[];
extern uint16_t currnt_err_num[];
extern int8_t SourceAdrr;
extern uint8_t next_to_prev[];
extern uint8_t prev_to_next[];
extern bool blue_upbutton_pressed;
extern bool blue_downbutton_pressed;


struct DiagScreen
{
	uint8_t 	CurrentCount;
	uint8_t 	MaximumCount;
	uint8_t 	DeviceId;
	Uint32	SPN;
	uint8_t	FMI;
	uint8_t   OccCount;
	uint8_t   Address;
	uint8_t   Message;
	uint8_t   Status;
};

extern struct DiagScreen DiagPage2[DM1_SA];

extern bool get_faults;

struct communication
{
	bool strt_tmr_entirecan_discnctd;
	bool strt_tmr_engcan_discnctd;
	bool strt_tmr_transcan_discnctd;
	bool strt_tmr_iomcan_discnctd;
	bool strt_tmr_sendercan_discnctd;

	uint16_t Can_Disconnected_Counter;
	uint16_t EngCanDisconnectedCntr;
	uint16_t TransCanDisconnectedCntr;
	uint16_t IomCanDisconnectedCntr;
	uint16_t SenderCanDisconnectedCntr;

	bool Reset_AllCanParameters;
	bool Reset_EngCanParameters;
	bool Reset_TransCanParameters;
	bool Reset_IomCanParameters;
	bool Reset_SenderCanParameters;
};

extern struct communication Can_Comm;

extern int  EngRpmCan;

extern uint16_t Hol_Resistance;
extern uint16_t guiHolCounts;
extern float gfHol;

extern uint16_t Hot_Resistance;
extern uint16_t guiHotCounts;
extern float gfHot;

extern float gfBoostPressure;
extern float gfEng_battry_volt;
extern float gfFIP_RackPosition;

extern uint8_t uin[17];
extern uint8_t make[17];
extern uint8_t model[17];
extern uint8_t serial_number[17];
extern uint8_t unit_number[17];
extern uint8_t display_date_code[];
extern uint8_t io_module_firmware[];

extern uint8_t di_hol;

extern uint8_t datalog_pwron;

extern bool id_not_set;

extern uint8_t cntr_1s_1;
extern uint8_t cntr_1s_2;

struct GeneralBufferFrame1Register
{
    uint64_t
    Byte8                   : 8,
    Byte7                   : 8,
    Byte6                   : 8,
    Byte5                   : 8,
    Byte4                   : 8,
    Byte3                   : 8,
    Byte2                   : 8,
    Byte1                   : 8;
};

union GeneralBufferFrame1
{
    uint64_t all;
    struct GeneralBufferFrame1Register bytes;
};
extern union GeneralBufferFrame1 unGeneralBufferFrame1;
extern union GeneralBufferFrame1 unGeneralBufferFrame2;
extern union GeneralBufferFrame1 unGeneralBufferFrame3;
extern union GeneralBufferFrame1 unGeneralBufferFrame4;
extern union GeneralBufferFrame1 unGeneralBufferFrame5;
extern union GeneralBufferFrame1 unGeneralBufferFrame6;
extern union GeneralBufferFrame1 unGeneralBufferFrame7;
extern union GeneralBufferFrame1 unGeneralBufferFrame8;

extern uint8_t Swwhloggingheader;
extern uint32_t Swwhloggingdatapt;
extern uint32_t Genloggingdatapt;

extern bool rtc_edited;

extern float ain1_s_cnts;
extern float ain2_s_cnts;
extern float ain3_s_cnts;
extern float ain4_s_cnts;

extern float ain1_s_type;
extern float ain2_s_type;
extern float ain3_s_type;
extern float ain4_s_type;

extern float ain1_s_value;
extern float ain2_s_value;
extern float ain3_s_value;
extern float ain4_s_value;

extern float adjd_eng_hrs;
extern int8_t ehe_scroll;
extern uint8_t WarningMsg;
extern float CalculatedHrs;
extern bool enghrs_en_dis;

extern uint32_t SPN_FMI_DATA[NO_OF_DM1_MESSAGES - 1][2];


/***************encoder**********************/
extern int32_t mCurPosValue;

#endif
