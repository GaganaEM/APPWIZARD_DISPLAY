#ifndef FILES_HEADER_SOURCEVARIABLE_H_
#define FILES_HEADER_SOURCEVARIABLE_H_

#include "../Files_Application/J1939Stack/sourceJ1939StackVariable.h"
#include "../Files_Application/KeypadStack/sourceKeypadStackVariable.h"
//#include "../Files_Application/USB_UserApp_Stack/usb_user_app_variable.h"
#define MAXIMIM_NO_OF_MIN_MAX_PARAMETERS                        0x0B
int del =0,once=0,ani_start=0;
signed char gcScrollSel = 0;
signed char gcDiagScroll = 0;

bool bDM1RxComplete = 0;
bool bDm1FaultPtr  = 0;

unsigned char TempArray[5000][12] = {0};
unsigned char gucSa = 0;
unsigned char gucSetPassword[5] = {0};
unsigned char gucprevSetPassword[5]={0};
unsigned char gucPasswordArray[5]	= {0};
unsigned char gucCursorArray[5] 	= {0};
char giPasswordRetry = 0;
bool bRetryPwdEntry = 0;
unsigned char gucPasswordEnterCount = 0;
unsigned char gucCnt = 0;
int giScreenSwitch;
//int giScreenPrevSwitch=0;
int p_giScreenSwitch = 0xFF;
int giScreenTimeCount;
int giPopUpScreen;
int giRpmValue;
char gcPowerOnExecute;
int giCheckTrans;
int giCloseOpenScreens=0;
float gfFuel			= 0;
float gfEop				= 0;
float gfEct				= 0;
int giEngineRpm 		= 0;
int giOutputRpm 		= 0;
int giVehicleSpeed  	= 0;
float gfTop				= 0;
float gfTot		 		= 0;
float gfBot		 		= 0;
float gfVolt 			= 0;
float gfEot				= 0;
float gfCot             = 0;

int giSelectedgear  	= 0;
int giCurrentGear   	= 0;


float gfEcl				= 0;
int giIcon01		= 0;
int giIcon02		= 0;
int giIcon03		= 0;
int giIcon04		= 0;
int giIcon05		= 0;
int giIcon06		= 0;
int giIcon07		= 0;
int giIcon08		= 0;
int giIcon09		= 0;
int giIcon10		= 0;
int giIcon11		= 0;
int giIcon12		= 0;
int giIcon13		= 0;
int giIcon14		= 0;
int giIcon15		= 0;
int giIcon16		= 0;
int giIcon17		= 0;
int giIcon18		= 0;
int giIconRevCol	= 0;

int giIcon01Prev=0;
int giIcon02Prev=0;
int giIcon03Prev=0;
int giIcon04Prev=0;
int giIcon05Prev=0;
int giIcon06Prev=0;
int giIcon07Prev=0;
int giIcon08Prev=0;
int giIcon09Prev=0;
int giIcon10Prev=0;
int giIcon11Prev=0;
int giIcon12Prev=0;
int giIcon13Prev=0;
int giIcon14Prev=0;
int giIcon15Prev=0;
int giIcon16Prev=0;
int giIcon17Prev=0;
int giIcon18Prev=0;

uint8_t gucPrevKeyValue = 0;

int giDMPopUp		= 0;
int giOdometer		= 0;
int giNaviPopUp		= 0;
int giIntensityPopUp = 0;
int giIntensityPercent = 0;
int giPopUpCol  	= 0;

int giMode			= 0;
int 		update_rpm = 0;
int	cnt_rpm = 0;

bool bToggleBit 	= 0;
bool bToggleIcon01	= 0;
bool bToggleIcon02	= 0;
bool bToggleIcon03	= 0;
bool bToggleIcon04	= 0;
bool bToggleIcon05	= 0;
bool bToggleIcon06	= 0;
bool bToggleIcon07	= 0;
bool bToggleIcon08	= 0;
bool bToggleIcon09	= 0;
bool bToggleIcon10	= 0;
bool bToggleIcon11	= 0;
bool bToggleIcon12	= 0;
bool bToggleIcon13	= 0;
bool bToggleIcon14	= 0;
bool bToggleIcon15	= 0;
bool bToggleIcon16	= 0;
bool bToggleIcon17	= 0;
bool bTimeFormat	= 0;
bool bNightMode 	= 0;
bool bPrevMode		= 0;

//uint64_t gulDigitalInputFrame1 = 0;
//uint64_t gulDigitalInputFrame2 = 0;
//uint64_t gulAnalogInputFrame1	= 0;
//uint64_t gulAnalogInputFrame2	= 0;
//uint64_t gulAnalogInputFrame3	= 0;

float gfBotValue = 0;
float gfEotValue = 0;
float gfTopValue = 0;
float gfFuelValue = 0;
float gfVoltageValue = 0;

uint16_t giTurbineRpm = 0;
uint16_t guiEctCounts = 0;
uint16_t guiEopCounts = 0;
uint16_t guiTotCounts = 0;

uint16_t guiFreq1 = 0;
uint16_t guiFreq2 = 0;
uint16_t guiVoltageCounts = 0;
uint16_t guiBotCounts = 0;
uint16_t guiEotCounts = 0;
uint16_t guiTopCounts = 0;
uint16_t guiFuelCounts = 0;

uint16_t guiToggleCount		 =0;

unsigned char gucDiagScrollPer		= 0;
unsigned char gucRecordingStatus	= 0;
unsigned char gucCopyStatus			= 0;
unsigned char gucReadStatus			= 0;
unsigned char gucIdStatus			= 0;
unsigned int  guiLogFileSize		= 0;
//volatile unsigned char gucRecTimeCount		= 0;
volatile signed long gucRecTimeCount		= 0;
bool bStartMinMaxFrameLog		= 0;
bool bStartRawFrameLog			= 0;
bool bStartRawFrameUsb			= 0;
bool bStartFaultFrameLog		= 0;
bool bStartFaultFrameUsb		= 0;
bool bStartDataLogging=0;
bool bStrtWorkinghrsLogging = 0;
unsigned int guiRawLogCount		= 0;
unsigned char guiPendrivePoPup=0;
unsigned char guiPendriveStatus=0;

unsigned int pendrive_counter_timeout=0;
unsigned char pendrive_detected_timeout=0;
unsigned char start_pendrive_timeout=0;

unsigned char pendrivestatusstrttimer=0;
unsigned int pendrivestatuscounter=0;

struct GuageIndicator
{
    int16_t  CurrentValue;
    int16_t  PreviousValue;
};

struct GuageIndicator GuageRpm;
struct GuageIndicator GuageKmph;
struct GuageIndicator GuageEop;
struct GuageIndicator GuageEct;
struct GuageIndicator GuageFuel;
struct GuageIndicator GuageFIP;
struct GuageIndicator GuageVolt;
struct GuageIndicator GuageVolt2;

struct GuageIndicator GuageEot;
struct GuageIndicator GuageEct2;
struct GuageIndicator GuageBot;
struct GuageIndicator GuageTop;
struct GuageIndicator GuageTop2;
struct GuageIndicator GuageCot;
struct GuageIndicator GuageCot2;

struct
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

union
{
	uint64_t all;
    struct AnalogData part;
}strIoAnalog;

bool bPasswordTest = 0;
uint8_t gucCurrentScreen = 0;
uint8_t gucKeyPressed = 0;
uint8_t gucFunctionPopUpScreen = 0;

uint8_t gucFaultsActive = 0;
struct
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

unsigned char gucDm1FaultPtr = 0;
unsigned char lucAddress	 = 0;

char gcCharSelect = 0;
unsigned char gucArrayLine[16] = "                ";
unsigned char gucChCount = 0;
unsigned int guiXAxis = 0;
unsigned int guiYAxis = 0;
unsigned char gcAlphabetSel = 0;

unsigned int guiDate = 0;
unsigned int guiMonth = 0;
unsigned int guiYear = 0;
unsigned int guiHour = 0;
unsigned int guiMinute = 0;
unsigned int guiSecond = 0;
unsigned int guiMeridian=0;
char gcUserScroll = 0;

unsigned int guiEngOilInterval = 0;
unsigned int guiAirFilterInterval = 0;
unsigned int guiHydOilInterval = 0;
unsigned int guiSerEngInterval = 0;
unsigned int guiSerMacInterval = 0;

unsigned int guiEngOilNext = 0;
unsigned int guiAirFilterNext = 0;
unsigned int guiHydOilNext = 0;
unsigned int guiSerEngNext = 0;
unsigned int guiSerMacNext = 0;

unsigned int guiEngOilRemain = 0;
unsigned int guiAirFilterRemain = 0;
unsigned int guiHydOilRemain = 0;
unsigned int guiSerEngRemain = 0;
unsigned int guiSerMacRemain = 0;
unsigned char gucEditService = 0;

unsigned char guiDiagTimer=0;
unsigned int guiDiagCounter=0;
int guiRequestDM1Data=0;
unsigned char guiDiagCounttemp=0;
int guiDiagPopUp = 0;
int giInvalidPassword=0;
int WarningPopUp=0;
int guiIconScreen=0;
int sdcard_status=0;
//unsigned char power_on_SD=0;
//unsigned char SDCardfuncBegin=0;
unsigned char power_on=0;
unsigned char file_close=0;
unsigned long datapt=0;
unsigned long filedatapt=0;
unsigned long filefaultlogdatapt=0;
unsigned long fileMinMaxlogdatapt=0;
unsigned long fileDataloggingdatapt=0;
//unsigned char filecopy[1500];
volatile uint8_t created_new=0;
unsigned char store_raw_can_data_sd_card=0;
unsigned char raw_data_header=0;
unsigned char store_dm1_mesg=0;
extern uint8_t conv_array[16];
extern uint8_t new_line_str[];
extern uint8_t num_val;
extern uint8_t hex_char[8];
uint32_t rawdatadatapt=0;
uint32_t Copyrawdataptr=0;
uint32_t  Copyfaultdataptr=0;
extern uint8_t can_data[8];
extern uint32_t gi_FrameCount;
extern uint8_t can_ascii_buff[16];
//unsigned int usb_detection_count=0;
//unsigned char start_usb_detection=0;
//unsigned char check_usb_detection=0;
unsigned char usb_attached=0;
unsigned char data_copied=0;

/*************MinMax***************************/

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

struct AnalogInputDataFrame DefaultAnalogInput[9];
Uint32 gulAdcAndSpeedRawData[11];
Uint32 gulAdcAndSpeedConvetedData[11];
float gulAdcFloatData[11];

struct ADCChannel
{
    float AdcProcessedValue;
    Uint32 AdcAvgCount;
    uint16_t *AdcRawCount;
    uint16_t AdcSamples;
    uint16_t SampledAvgCounts;
};

struct ADCChannel strAdc;

struct AdcSelectRegister
{
    uint8_t readChannel;
    uint8_t lookUpTable;
    uint8_t sensorType;
    uint8_t sensorNumber;
    uint8_t AdcDataSource;
};

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

float giTareValue_A1_I1;
uint16_t giTareCount_A1_I1;
float giCalValue_A1_I1;
uint16_t giCalCount_A1_I1;

float giTareValue_A5_I1;
uint16_t giTareCount_A5_I1;
float giCalValue_A5_I1;
uint16_t giCalCount_A5_I1;

float giTareValue_A1_I2;
uint16_t giTareCount_A1_I2;
float giCalValue_A1_I2;
uint16_t giCalCount_A1_I2;

float giTareValue_A13_I1;
uint16_t giTareCount_A13_I1;
float giCalValue_A13_I1;
uint16_t giCalCount_A13_I1;

float giTareValue_A13_I2;
uint16_t giTareCount_A13_I2;
float giCalValue_A13_I2;
uint16_t giCalCount_A13_I2;

float giTareValue_A14_I1;
uint16_t giTareCount_A14_I1;
float giCalValue_A14_I1;
uint16_t giCalCount_A14_I1;

float giTareValue_A14_I2;
uint16_t giTareCount_A14_I2;
float giCalValue_A14_I2;
uint16_t giCalCount_A14_I2;

/*
const float gucaLookUpTable_A1_R1[][6] = {
                                            0.0,   0.8,    2.0,    5.0,    6.0,    10.0,
                                            122,   330,    634,    1301,   1507,   2236
                                        };

const float gucaLookUpTable_A1_R2[][6] = {
                                            0.0,   0.8,    2.0,    5.0,    6.0,    10.0,
                                            2918,  2665,  2311,    1593,   1437,   890
                                        };

const float gucaLookUpTable_A2_R1[][5] = {
                                            40.0,   60.0,   90.0,   120.0,  140.0,
                                            2544,   1137,    407,     186,    102
                                        };

const float gucaLookUpTable_A2_R2[][5] = {
                                            40.0,   60.0,   90.0,   120.0,  140.0,
                                            1315,    610,    230,     102,     63
                                        };

const float gucaLookUpTable_A3_R1[][6] = {
                                            40.0,   60.0,   80.0,   95.0,   100.0,  120.0,
                                            2538,   1135,    562,    347,     298,  185
                                        };

const float gucaLookUpTable_A3_R2[][6] = {
                                            40.0,   60.0,   80.0,   95.0,   100.0,  120.0,
                                            1314,    610,    335,    207,     181,  102
                                        };

const float gucaLookUpTable_A4_R1[][5] = {
                                            40.0,   60.0,   90.0,   120.0,  140.0,
                                            2544,   1137,    407,     186,    102
                                        };

const float gucaLookUpTable_A4_R2[][5] = {
                                            40.0,   60.0,   90.0,   120.0,  140.0,
                                            1315,    610,    230,     102,     63
                                        };

//const float gucaLookUpTable_A6_R1[][5] = {
//                                            0.0,   0.08,   0.25,   0.5,  0.75,  1.0,
//                                            1050,   839,    612,   396,   260,  127
//                                        };

const float gucaLookUpTable_A6_R1[][5] = {
                                            0.0,    8.00,   25.00,  50.0,  75.00,  100.0,
                                            1050,   839,    612,    396,   260,    127
                                        };

const float gucaLookUpTable_A13_R1[][5] = {
                                            0.0,   2.0,    5.0,    6.0,    10.0,
                                            2917,  2311,   1594,   1435,   889
                                        };

const float gucaLookUpTable_A13_R2[][5] = {
                                            0.0,   2.0,    5.0,    6.0,    10.0,
                                            123,   635,   1300,   1506,    2236
                                        };

//const float gucaLookUpTable_A14_R1[][5] = {
//                                            0.0,   2.0,    5.0,    6.0,    10.0,
//                                            2957,  2343,   1619,   1450,   902
//                                        };

//const float gucaLookUpTable_A14_R1[][5] = {
//                                            40.0,  62.481,  103.28, 123.68, 140.0,
//                                            2551,  2000,    1000,   500,    902
//                                            };
const float gucaLookUpTable_A14_R1[][5] = {
                                             40.0,   60.0,   90.0,   120.0,  140.0,
                                             2544,   1137,    407,     186,    102
                                            };


const float gucaLookUpTable_A14_R2[][5] = {
                                            0.0,   2.0,    5.0,    6.0,    10.0,
                                            125,   642,   1317,   1527,    2262
                                        };
*/

#ifdef ADC_CONFIG_10BIT

const float LookUpTable_A1[][15] = {  0,  10,  20,  30,  40,  50, 60, 70, 80, 90, 100, 110, 120, 130, 140,
									973, 677, 425, 274,	183, 127, 92, 70, 55, 45,  38,	32,	 30,  27,  24
                                   };
const float LookUpTable_A1R1[][15] = { 7208, 4115, 2529, 1594, 1029, 680, 460, 321, 227, 164, 120, 89, 74, 52, 40,
										973,  677,  425,  274,  183, 127,  92,  70,  55,  45,  38, 32, 30, 27, 24
                                      };


const float LookUpTable_A2[][6] = {    0,   12,   24,   36,   48,    60,
									 139,  234,  328,  423,	  518,  612
                                   };
const float LookUpTable_A2I1[][6] = {    4,   7.2,   10.4,   13.6,   16.8,    20,
									   139,   234,    328,    423,	  518,   612
								     };


const float LookUpTable_A3[][5] = {  0,  25,  50,  75,  100,
									 18,  26,  33,  40,	  47
                                   };
const float LookUpTable_A3R1[][5] = {  3,  47,  91,  135,  180, // 3,  47.25,  91.5,  135.75,  180,
									   18,  26,  33,   40,	 47
									  };
#else //12 BIT ADC CONFIGURATION
const float LookUpTable_A1[][17] = {  0,  3, 7, 10,  20,  30,  40,  50, 60, 70, 80, 90, 100, 110, 120, 130, 140,
									3780, 3774,3212,2757, 1776, 1214,	868, 657, 529, 439, 384, 347,  322,	304,	 296,  283,  276
                                   };
const float LookUpTable_A1R1[][17] = { 7208, 6000, 5000,4115, 2529, 1594, 1029, 680, 460, 321, 227, 164, 120, 89, 74, 52, 40,
									3780, 3774,3212,2757, 1776, 1214,	868, 657, 529, 439, 384, 347,  322,	304,	 296,  283,  276
                                      };


const float LookUpTable_A2[][6] = {    0,    12,    24,    36,   48,    60,
									 707,  1061,  1411,  1760, 2113,  2460
                                   };
const float LookUpTable_A2I1[][6] = {  4,   7.2,  10.4,  13.6,   16.8,    20,
									 707,  1061,  1411,  1760,	 2113,  2460
								     };


const float LookUpTable_A3[][5] = {  	0,   25,   50,   75,  100,
									  240,  271,  298,  323,  350
                                   };
const float LookUpTable_A3R1[][5] = {  3,  47.25,  91.5,  135.75,  180, // 3,  47.25,  91.5,  135.75,  180,
									 240,    271,   298,     323,  350
									  };

const float LookUpTable_A4[][29] = {  8,    9,     10,     11,     12,     13,     14,     15,     16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31,     32,     33,     34,     35,     36,
								  1035,	 1149,	1251,	1371,	1474,	1582,	1687,	1795,	1900,	1992,	2090,	2180,	2259,	2343,	2408,	2473,	2534,	2591,	2639,	2684,	2724,	2761,	2801,	2833,	2864,	2890,	2917,	2943,	2964
                                   };
#endif
uint16_t a1_cnts  = 0;
float a1_conv_val = 0;
float a1_type   = 0;

uint16_t a2_cnts  = 0;
float a2_conv_val = 0;
float a2_type   = 0;

uint16_t a3_cnts  = 0;
float a3_conv_val = 0;
float a3_type   = 0;

uint16_t battery_cnts  = 0;
float battery_conv_val = 0;


//-----------engine_oil_pressure-----------//
uint16_t glEOPCanData;
uint16_t giEOP_kPa;
float giEOP_Bar;
//-----------engine_coolant_temprature-----//
uint16_t glECTCanData;
float giECT_DegreeC;
//-----------Transmission_oil_temprature---//
uint16_t glTOTCanData;
float giTOT_DegreeC;
//-----------Engine_speed------------------//
uint16_t glEngine_speedCanData;
//----------Vehicle speed-----------//
uint16_t glVehicle_speedCanData;
//----------HOUR METER-----------//
uint64_t glHour_meterCanData;

struct strValueFormula
{
    uint16_t  Count;
    uint16_t  CountX;
    uint16_t  CountY;
    float ValueX;
    float ValueY;
};

struct  strValueFormula strValueCalculation;

//Calibration Related
int32_t giChannelOffset_A1_R1;
int32_t giChannelOffset_A1_R2;
int32_t giChannelOffset_A1_I1;
int32_t giChannelOffset_A1_I2;

int32_t giChannelOffset_A2_R1;
int32_t giChannelOffset_A2_R2;
int32_t giChannelOffset_A3_R1;
int32_t giChannelOffset_A3_R2;

int32_t giChannelOffset_A5_I1;
int32_t giChannelOffset_A6_R1;
int32_t giChannelOffset_A4_R1;
int32_t giChannelOffset_A4_R2;

int32_t giChannelOffset_A13_R1;
int32_t giChannelOffset_A13_R2;
int32_t giChannelOffset_A13_I1;
int32_t giChannelOffset_A13_I2;

int32_t giChannelOffset_A14_R1;
int32_t giChannelOffset_A14_R2;
int32_t giChannelOffset_A14_I1;
int32_t giChannelOffset_A14_I2;
uint8_t gucCurErrorStatus[48];
enum    CHANNEL_NAME {CH_A1, CH_A2, CH_A3, CH_A4, CH_A5, CH_A6, CH_A7, CH_A8, BATT_IN};
uint8_t gucaMinMaxErrorStatus[MAXIMIM_NO_OF_MIN_MAX_PARAMETERS];

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

struct SpeedInputDataFrame DefaultSpeedInput[2];

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

struct MinMaxLogRegister strMinMaxDataFrame;
struct MinMaxLogRegister strDataLoggingFrame;
struct MinMaxLogRegister strfaultLoggingData;

unsigned char lucPrevErrorStatusECT=0;
unsigned char lucPrevErrorStatusEOP=0;
unsigned char lucPrevErrorStatusRPM=0;
unsigned char lucPrevErrorStatusTOP=0;
unsigned char lucPrevErrorStatusTOT=0;
unsigned char lucPrevErrorStatusRSpeed=0;
unsigned char lucPrevErrorStatusEOT=0;

unsigned long log_no=0;
unsigned char minmaxheader=0;
unsigned long minmaxdatapt=0;
unsigned long CopyMinMaxdataptr=0;
unsigned long CopyDataloggingdataptr=0;
unsigned char timer_updated=0;
unsigned char popeup_out_once=0;
unsigned char pendrive_removed=0;
unsigned char pendrive_check=2;
unsigned char power_on_SD;
unsigned char SDCardfuncBegin;

unsigned char gisdcardpopup;
unsigned char gisdcardstatus;
unsigned int giTimeCountpopup;


unsigned char data_logging_10min=0;
unsigned char start_data_logging_for_every_10min=0;
unsigned long Dataloggingdatapt=0;
unsigned char Dataloggingheader=0;
unsigned long dataloggingcounter=0;
unsigned int uimax22190datareceived=0;
float gfconvertedfuellvl=0;
float gfconvertedCot=0;
uint32_t counterClock = 0;
uint32_t timeCapt     = 0;
uint32_t ucfreqcount        = 0;

volatile bool qtmrIsrFlag = false;
float tusec = 0;
unsigned long freq = 0;
unsigned long Captured_Freq = 0;

uint8_t rtc_sec = 0;
uint8_t rtc_min = 0;
uint8_t rtc_hour = 0;
uint8_t rtc_date=0;
uint8_t rtc_month = 0;
uint8_t rtc_year =0;
uint8_t PM_var = 0;

uint8_t SECOND_ADDRESS      =0;
uint8_t MINUTE_ADDRESS      =0;
uint8_t HOUR_ADDRESS        =0;
uint8_t MONTH_ADDRESS       =0;
uint8_t YEAR_ADDRESS        =0;
uint8_t DAY_OF_WEEK_ADDRESS =0;
uint8_t CTRL_STATUS_ADDRESS =0;
uint8_t DATE_ADDRESS        =0;
uint8_t SET_12HOUR_AM       =0;
uint8_t MASK_12HOUR         =0;
uint8_t MASK_SECOND         =0;
uint8_t MASK_MINUTE         =0;
uint8_t MASK_DATE           =0;
uint8_t MASK_MONTH          =0;
uint8_t MASK_YEAR           =0;

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

union strReadBitsRegister
{
    uint8_t               all;
    struct strReadBits  bits;
}strReadInputs;

unsigned int guiadccounts=0;


uint16_t adccountsfor0to28bar[282]=
{
	50,		137,	138,	140,	141,	143,	145,	147,	149,	150,	152,	154,	155,	157,	159,	161,	162,	164,
	165,	167,	169,	171,	172,	174,	176,	178,	179,	181,	182,	184,	186,	187,	189,	191,	193,
	194,	196,	198,	199,	201,	203,	204,	206,	208,	210,	211,	213,	214,	217,	218,	220,	221,
	223,	225,	226,	228,	230,	232,	234,	235,	237,	238,	241,	242,	244,	245,	247,	249,	250,
	252,	253,	256,	257,	259,	260,	262,	264,	265,	267,	269,	270,	272,	274,	275,	277,	279,
	281,	282,	284,	285,	288,	289,	291,	292,	294,	296,	298,	299,	301,	302,	305,	306,	308,
	309,	311,	313,	314,	316,	317,	320,	321,	323,	325,	326,	328,	330,	331,	333,	335,	337,
	338,	340,	342,	343,	345,	347,	348,	349,	352,	353,	356,	357,	358,	360,	362,	364,	366,
	368,	369,	370,	372,	373,	376,	378,	379,	380,	382,	384,	386,	388,	389,	390,	392,	394,
	396,	398,	400,	401,	402,	405,	406,	408,	410,	411,	412,	414,	416,	418,	419,	422,	424,
	425,	427,	428,	429,	432,	433,	435,	437,	439,	441,	442,	444,	445,	447,	449,	450,	452,
	453,	456,	457,	459,	460,	461,	464,	466,	467,	468,	471,	472,	474,	476,	478,	479,	481,
	483,	484,	486,	488,	489,	491,	493,	494,	496,	498,	500,	501,	503,	505,	506,	508,	509,
	512,	513,	515,	516,	518,	520,	521,	523,	525,	526,	528,	530,	532,	533,	535,	537,	538,
	540,	542,	544,	545,	547,	549,	550,	552,	554,	555,	557,	559,	561,	562,	564,	566,	567,
	569,	571,	572,	574,	576,	577,	579,	580,	582,	584,	585,	587,	589,	590,	592,	594,	595,
	597,	598,	600,	602,	603,	605,	607,	608,	610,
};

float curvaluefor0to28bar[282]=
{
	0.00,	4.00 ,	4.06 ,	4.11 ,	4.17 ,	4.23 ,	4.29 ,	4.34 ,	4.40 ,	4.46 ,	4.51 ,	4.57 ,	4.63 ,	4.69 ,	4.74 ,	4.80 ,	4.86 ,	4.91 ,
	4.97 ,	5.03 ,	5.09 ,	5.14 ,	5.20 ,	5.26 ,	5.31 ,	5.37 ,	5.43 ,	5.49 ,	5.54 ,	5.60 ,	5.66 ,	5.71 ,	5.77 ,	5.83 ,	5.89 ,
	5.94 ,	6.00 ,	6.06 ,	6.11 ,	6.17 ,	6.23 ,	6.29 ,	6.34 ,	6.40 ,	6.46 ,	6.51 ,	6.57 ,	6.63 ,	6.69 ,	6.74 ,	6.80 ,	6.86 ,
	6.91 ,	6.97 ,	7.03 ,	7.09 ,	7.14 ,	7.20 ,	7.26 ,	7.31 ,	7.37 ,	7.43 ,	7.49 ,	7.54 ,	7.60 ,	7.66 ,	7.71 ,	7.77 ,	7.83 ,
	7.89 ,	7.94 ,	8.00 ,	8.06 ,	8.11 ,	8.17 ,	8.23 ,	8.29 ,	8.34 ,	8.40 ,	8.46 ,	8.51 ,	8.57 ,	8.63 ,	8.69 ,	8.74 ,	8.80 ,
	8.86 ,	8.91 ,	8.97 ,	9.03 ,	9.09 ,	9.14 ,	9.20 ,	9.26 ,	9.31 ,	9.37 ,	9.43 ,	9.49 ,	9.54 ,	9.60 ,	9.66 ,	9.71 ,	9.77 ,
	9.83 ,	9.89 ,	9.94 ,	10.00,	10.06,	10.11,	10.17,	10.23,	10.29,	10.34,	10.40,	10.46,	10.51,	10.57,	10.63,	10.69,	10.74,
	10.80,	10.86,	10.91,	10.97,	11.03,	11.09,	11.14,	11.20,	11.26,	11.31,	11.37,	11.43,	11.49,	11.54,	11.60,	11.66,	11.71,
	11.77,	11.83,	11.89,	11.94,	12.00,	12.06,	12.11,	12.17,	12.23,	12.29,	12.34,	12.40,	12.46,	12.51,	12.57,	12.63,	12.69,
	12.74,	12.80,	12.86,	12.91,	12.97,	13.03,	13.09,	13.14,	13.20,	13.26,	13.31,	13.37,	13.43,	13.49,	13.54,	13.60,	13.66,
	13.71,	13.77,	13.83,	13.89,	13.94,	14.00,	14.06,	14.11,	14.17,	14.23,	14.29,	14.34,	14.40,	14.46,	14.51,	14.57,	14.63,
	14.69,	14.74,	14.80,	14.86,	14.91,	14.97,	15.03,	15.09,	15.14,	15.20,	15.26,	15.31,	15.37,	15.43,	15.49,	15.54,	15.60,
	15.66,	15.71,	15.77,	15.83,	15.89,	15.94,	16.00,	16.06,	16.11,	16.17,	16.23,	16.29,	16.34,	16.40,	16.46,	16.51,	16.57,
	16.63,	16.69,	16.74,	16.80,	16.86,	16.91,	16.97,	17.03,	17.09,	17.14,	17.20,	17.26,	17.31,	17.37,	17.43,	17.49,	17.54,
	17.60,	17.66,	17.71,	17.77,	17.83,	17.89,	17.94,	18.00,	18.06,	18.11,	18.17,	18.23,	18.29,	18.34,	18.40,	18.46,	18.51,
	18.57,	18.63,	18.69,	18.74,	18.80,	18.86,	18.91,	18.97,	19.03,	19.09,	19.14,	19.20,	19.26,	19.31,	19.37,	19.43,	19.49,
	19.54,	19.60,	19.66,	19.71,	19.77,	19.83,	19.89,	19.94,	20.00,
};

float pressurevaluefor0to28bar[282]=
{
	0,		0   ,	0.1 ,	0.2 ,	0.3 ,	0.4 ,	0.5 ,	0.6 ,	0.7 ,	0.8 ,	0.9 ,	1   ,	1.1 ,	1.2 ,	1.3 ,	1.4 ,	1.5 ,	1.6 ,	1.7 ,
	1.8 ,	1.9 ,	2   ,	2.1 ,	2.2 ,	2.3 ,	2.4 ,	2.5 ,	2.6 ,	2.7 ,	2.8 ,	2.9 ,	3   ,	3.1 ,	3.2 ,	3.3 ,	3.4 ,	3.5 ,
	3.6 ,	3.7 ,	3.8 ,	3.9 ,	4   ,	4.1 ,	4.2 ,	4.3 ,	4.4 ,	4.5 ,	4.6 ,	4.7 ,	4.8 ,	4.9 ,	5   ,	5.1 ,	5.2 ,	5.3 ,
	5.4 ,	5.5 ,	5.6 ,	5.7 ,	5.8 ,	5.9 ,	6   ,	6.1 ,	6.2 ,	6.3 ,	6.4 ,	6.5 ,	6.6 ,	6.7 ,	6.8 ,	6.9 ,	7   ,	7.1 ,
	7.2 ,	7.3 ,	7.4 ,	7.5 ,	7.6 ,	7.7 ,	7.8 ,	7.9 ,	8   ,	8.1 ,	8.2 ,	8.3 ,	8.4 ,	8.5 ,	8.6 ,	8.7 ,	8.8 ,	8.9 ,
	9   ,	9.1 ,	9.2 ,	9.3 ,	9.4 ,	9.5 ,	9.6 ,	9.7 ,	9.8 ,	9.9 ,	10  ,	10.1,	10.2,	10.3,	10.4,	10.5,	10.6,	10.7,
	10.8,	10.9,	11  ,	11.1,	11.2,	11.3,	11.4,	11.5,	11.6,	11.7,	11.8,	11.9,	12  ,	12.1,	12.2,	12.3,	12.4,	12.5,
	12.6,	12.7,	12.8,	12.9,	13  ,	13.1,	13.2,	13.3,	13.4,	13.5,	13.6,	13.7,	13.8,	13.9,	14  ,	14.1,	14.2,	14.3,
	14.4,	14.5,	14.6,	14.7,	14.8,	14.9,	15  ,	15.1,	15.2,	15.3,	15.4,	15.5,	15.6,	15.7,	15.8,	15.9,	16  ,	16.1,
	16.2,	16.3,	16.4,	16.5,	16.6,	16.7,	16.8,	16.9,	17  ,	17.1,	17.2,	17.3,	17.4,	17.5,	17.6,	17.7,	17.8,	17.9,
	18  ,	18.1,	18.2,	18.3,	18.4,	18.5,	18.6,	18.7,	18.8,	18.9,	19  ,	19.1,	19.2,	19.3,	19.4,	19.5,	19.6,	19.7,
	19.8,	19.9,	20  ,	20.1,	20.2,	20.3,	20.4,	20.5,	20.6,	20.7,	20.8,	20.9,	21  ,	21.1,	21.2,	21.3,	21.4,	21.5,
	21.6,	21.7,	21.8,	21.9,	22  ,	22.1,	22.2,	22.3,	22.4,	22.5,	22.6,	22.7,	22.8,	22.9,	23  ,	23.1,	23.2,	23.3,
	23.4,	23.5,	23.6,	23.7,	23.8,	23.9,	24  ,	24.1,	24.2,	24.3,	24.4,	24.5,	24.6,	24.7,	24.8,	24.9,	25  ,	25.1,
	25.2,	25.3,	25.4,	25.5,	25.6,	25.7,	25.8,	25.9,	26  ,	26.1,	26.2,	26.3,	26.4,	26.5,	26.6,	26.7,	26.8,	26.9,
	27  ,	27.1,	27.2,	27.3,	27.4,	27.5,	27.6,	27.7,	27.8,	27.9,	28  ,
};

uint16_t adccountsfor0to60bar[602]=
{
	50,		137,	138,	138,	139,	140,	141,	142,	142,	143,	144,	145,	146,	146,	147,	148,	149,	150,	150,
	151,	152,	153,	154,	154,	155,	156,	157,	157,	158,	159,	160,	161,	161,	162,	163,	164,	165,
	165,	166,	167,	168,	169,	169,	170,	171,	172,	173,	173,	174,	175,	176,	177,	178,	178,	179,
	180,	180,	181,	182,	183,	184,	185,	185,	186,	187,	188,	188,	189,	189,	190,	192,	193,	193,
	194,	195,	195,	196,	197,	198,	199,	200,	200,	201,	202,	202,	203,	204,	205,	206,	207,	207,
	208,	209,	210,	211,	211,	212,	213,	214,	214,	215,	216,	217,	218,	218,	219,	220,	221,	221,
	222,	223,	224,	225,	226,	226,	227,	228,	228,	230,	230,	231,	232,	233,	234,	234,	235,	236,
	237,	238,	238,	239,	240,	240,	241,	242,	243,	244,	245,	245,	246,	247,	248,	249,	249,	250,
	251,	251,	252,	253,	254,	255,	256,	257,	257,	258,	259,	260,	260,	261,	262,	263,	263,	265,
	265,	266,	266,	267,	268,	269,	270,	271,	271,	272,	273,	274,	274,	275,	276,	277,	278,	279,
	279,	280,	281,	282,	282,	283,	284,	285,	285,	287,	288,	289,	289,	289,	290,	291,	292,	293,
	294,	294,	295,	296,	297,	297,	298,	299,	300,	301,	302,	302,	303,	304,	305,	306,	306,	307,
	308,	309,	309,	310,	311,	312,	313,	314,	314,	315,	316,	316,	317,	318,	319,	320,	321,	321,
	322,	323,	324,	324,	325,	326,	327,	328,	329,	329,	330,	330,	332,	333,	333,	334,	335,	336,
	337,	338,	338,	339,	339,	340,	341,	342,	343,	343,	345,	345,	346,	347,	347,	348,	349,	349,
	350,	351,	352,	353,	354,	355,	355,	356,	357,	358,	359,	360,	360,	361,	362,	363,	364,	364,
	365,	365,	366,	368,	369,	369,	370,	371,	372,	373,	374,	374,	375,	376,	376,	377,	378,	378,
	379,	380,	380,	381,	382,	383,	384,	385,	385,	386,	387,	388,	389,	390,	391,	391,	392,	392,
	393,	395,	395,	396,	397,	397,	398,	399,	399,	401,	401,	402,	403,	404,	404,	405,	406,	407,
	407,	408,	409,	410,	411,	411,	412,	413,	413,	414,	416,	417,	418,	419,	419,	419,	421,	422,
	422,	423,	423,	424,	425,	426,	426,	427,	428,	429,	430,	431,	431,	432,	433,	434,	434,	435,
	437,	437,	438,	438,	440,	440,	442,	442,	443,	444,	444,	445,	446,	447,	448,	449,	450,	450,
	451,	452,	452,	453,	454,	455,	455,	456,	457,	458,	459,	460,	460,	461,	461,	463,	463,	464,
	465,	466,	467,	468,	468,	468,	469,	470,	471,	472,	473,	474,	475,	476,	476,	477,	478,	479,
	479,	480,	481,	482,	483,	484,	484,	485,	486,	487,	488,	488,	489,	489,	490,	491,	492,	493,
	494,	494,	495,	496,	497,	498,	499,	499,	500,	501,	502,	503,	504,	504,	505,	506,	506,	507,
	508,	509,	509,	510,	511,	512,	513,	514,	514,	515,	516,	516,	517,	518,	519,	520,	521,	521,
	522,	523,	524,	525,	525,	526,	527,	528,	528,	529,	530,	531,	532,	532,	533,	534,	535,	536,
	536,	537,	538,	539,	540,	540,	541,	542,	542,	543,	544,	545,	546,	547,	547,	548,	549,	550,
	551,	551,	552,	553,	554,	554,	555,	556,	557,	557,	558,	559,	560,	561,	562,	562,	563,	564,
	565,	566,	566,	567,	568,	569,	569,	570,	571,	572,	573,	573,	574,	575,	576,	577,	577,	578,
	579,	580,	581,	581,	582,	582,	583,	584,	585,	586,	586,	587,	588,	589,	589,	590,	591,	592,
	593,	593,	594,	595,	596,	596,	597,	598,	598,	599,	600,	601,	602,	602,	603,	604,	605,	605,
	606,	607,	608,	609,	609,	610,	611,
};

float curvaluefor0to60bar[602]=
{
	0.00,	4.00 ,	4.03 ,	4.05 ,	4.08 ,	4.11 ,	4.13 ,	4.16 ,	4.19 ,	4.21 ,	4.24 ,	4.27 ,	4.29 ,	4.32 ,	4.35 ,	4.37 ,	4.40 ,	4.43 ,
	4.45 ,	4.48 ,	4.51 ,	4.53 ,	4.56 ,	4.59 ,	4.61 ,	4.64 ,	4.67 ,	4.69 ,	4.72 ,	4.75 ,	4.77 ,	4.80 ,	4.83 ,	4.85 ,	4.88 ,
	4.91 ,	4.93 ,	4.96 ,	4.99 ,	5.01 ,	5.04 ,	5.07 ,	5.09 ,	5.12 ,	5.15 ,	5.17 ,	5.20 ,	5.23 ,	5.25 ,	5.28 ,	5.31 ,	5.33 ,
	5.36 ,	5.39 ,	5.41 ,	5.44 ,	5.47 ,	5.49 ,	5.52 ,	5.55 ,	5.57 ,	5.60 ,	5.63 ,	5.65 ,	5.68 ,	5.71 ,	5.73 ,	5.76 ,	5.79 ,
	5.81 ,	5.84 ,	5.87 ,	5.89 ,	5.92 ,	5.95 ,	5.97 ,	6.00 ,	6.03 ,	6.05 ,	6.08 ,	6.11 ,	6.13 ,	6.16 ,	6.19 ,	6.21 ,	6.24 ,
	6.27 ,	6.29 ,	6.32 ,	6.35 ,	6.37 ,	6.40 ,	6.43 ,	6.45 ,	6.48 ,	6.51 ,	6.53 ,	6.56 ,	6.59 ,	6.61 ,	6.64 ,	6.67 ,	6.69 ,
	6.72 ,	6.75 ,	6.77 ,	6.80 ,	6.83 ,	6.85 ,	6.88 ,	6.91 ,	6.93 ,	6.96 ,	6.99 ,	7.01 ,	7.04 ,	7.07 ,	7.09 ,	7.12 ,	7.15 ,
	7.17 ,	7.20 ,	7.23 ,	7.25 ,	7.28 ,	7.31 ,	7.33 ,	7.36 ,	7.39 ,	7.41 ,	7.44 ,	7.47 ,	7.49 ,	7.52 ,	7.55 ,	7.57 ,	7.60 ,
	7.63 ,	7.65 ,	7.68 ,	7.71 ,	7.73 ,	7.76 ,	7.79 ,	7.81 ,	7.84 ,	7.87 ,	7.89 ,	7.92 ,	7.95 ,	7.97 ,	8.00 ,	8.03 ,	8.05 ,
	8.08 ,	8.11 ,	8.13 ,	8.16 ,	8.19 ,	8.21 ,	8.24 ,	8.27 ,	8.29 ,	8.32 ,	8.35 ,	8.37 ,	8.40 ,	8.43 ,	8.45 ,	8.48 ,	8.51 ,
	8.53 ,	8.56 ,	8.59 ,	8.61 ,	8.64 ,	8.67 ,	8.69 ,	8.72 ,	8.75 ,	8.77 ,	8.80 ,	8.83 ,	8.85 ,	8.88 ,	8.91 ,	8.93 ,	8.96 ,
	8.99 ,	9.01 ,	9.04 ,	9.07 ,	9.09 ,	9.12 ,	9.15 ,	9.17 ,	9.20 ,	9.23 ,	9.25 ,	9.28 ,	9.31 ,	9.33 ,	9.36 ,	9.39 ,	9.41 ,
	9.44 ,	9.47 ,	9.49 ,	9.52 ,	9.55 ,	9.57 ,	9.60 ,	9.63 ,	9.65 ,	9.68 ,	9.71 ,	9.73 ,	9.76 ,	9.79 ,	9.81 ,	9.84 ,	9.87 ,
	9.89 ,	9.92 ,	9.95 ,	9.97 ,	10.00,	10.03,	10.05,	10.08,	10.11,	10.13,	10.16,	10.19,	10.21,	10.24,	10.27,	10.29,	10.32,
	10.35,	10.37,	10.40,	10.43,	10.45,	10.48,	10.51,	10.53,	10.56,	10.59,	10.61,	10.64,	10.67,	10.69,	10.72,	10.75,	10.77,
	10.80,	10.83,	10.85,	10.88,	10.91,	10.93,	10.96,	10.99,	11.01,	11.04,	11.07,	11.09,	11.12,	11.15,	11.17,	11.20,	11.23,
	11.25,	11.28,	11.31,	11.33,	11.36,	11.39,	11.41,	11.44,	11.47,	11.49,	11.52,	11.55,	11.57,	11.60,	11.63,	11.65,	11.68,
	11.71,	11.73,	11.76,	11.79,	11.81,	11.84,	11.87,	11.89,	11.92,	11.95,	11.97,	12.00,	12.03,	12.05,	12.08,	12.11,	12.13,
	12.16,	12.19,	12.21,	12.24,	12.27,	12.29,	12.32,	12.35,	12.37,	12.40,	12.43,	12.45,	12.48,	12.51,	12.53,	12.56,	12.59,
	12.61,	12.64,	12.67,	12.69,	12.72,	12.75,	12.77,	12.80,	12.83,	12.85,	12.88,	12.91,	12.93,	12.96,	12.99,	13.01,	13.04,
	13.07,	13.09,	13.12,	13.15,	13.17,	13.20,	13.23,	13.25,	13.28,	13.31,	13.33,	13.36,	13.39,	13.41,	13.44,	13.47,	13.49,
	13.52,	13.55,	13.57,	13.60,	13.63,	13.65,	13.68,	13.71,	13.73,	13.76,	13.79,	13.81,	13.84,	13.87,	13.89,	13.92,	13.95,
	13.97,	14.00,	14.03,	14.05,	14.08,	14.11,	14.13,	14.16,	14.19,	14.21,	14.24,	14.27,	14.29,	14.32,	14.35,	14.37,	14.40,
	14.43,	14.45,	14.48,	14.51,	14.53,	14.56,	14.59,	14.61,	14.64,	14.67,	14.69,	14.72,	14.75,	14.77,	14.80,	14.83,	14.85,
	14.88,	14.91,	14.93,	14.96,	14.99,	15.01,	15.04,	15.07,	15.09,	15.12,	15.15,	15.17,	15.20,	15.23,	15.25,	15.28,	15.31,
	15.33,	15.36,	15.39,	15.41,	15.44,	15.47,	15.49,	15.52,	15.55,	15.57,	15.60,	15.63,	15.65,	15.68,	15.71,	15.73,	15.76,
	15.79,	15.81,	15.84,	15.87,	15.89,	15.92,	15.95,	15.97,	16.00,	16.03,	16.05,	16.08,	16.11,	16.13,	16.16,	16.19,	16.21,
	16.24,	16.27,	16.29,	16.32,	16.35,	16.37,	16.40,	16.43,	16.45,	16.48,	16.51,	16.53,	16.56,	16.59,	16.61,	16.64,	16.67,
	16.69,	16.72,	16.75,	16.77,	16.80,	16.83,	16.85,	16.88,	16.91,	16.93,	16.96,	16.99,	17.01,	17.04,	17.07,	17.09,	17.12,
	17.15,	17.17,	17.20,	17.23,	17.25,	17.28,	17.31,	17.33,	17.36,	17.39,	17.41,	17.44,	17.47,	17.49,	17.52,	17.55,	17.57,
	17.60,	17.63,	17.65,	17.68,	17.71,	17.73,	17.76,	17.79,	17.81,	17.84,	17.87,	17.89,	17.92,	17.95,	17.97,	18.00,	18.03,
	18.05,	18.08,	18.11,	18.13,	18.16,	18.19,	18.21,	18.24,	18.27,	18.29,	18.32,	18.35,	18.37,	18.40,	18.43,	18.45,	18.48,
	18.51,	18.53,	18.56,	18.59,	18.61,	18.64,	18.67,	18.69,	18.72,	18.75,	18.77,	18.80,	18.83,	18.85,	18.88,	18.91,	18.93,
	18.96,	18.99,	19.01,	19.04,	19.07,	19.09,	19.12,	19.15,	19.17,	19.20,	19.23,	19.25,	19.28,	19.31,	19.33,	19.36,	19.39,
	19.41,	19.44,	19.47,	19.49,	19.52,	19.55,	19.57,	19.60,	19.63,	19.65,	19.68,	19.71,	19.73,	19.76,	19.79,	19.81,	19.84,
	19.87,	19.89,	19.92,	19.95,	19.97,	20.00,
};

float pressurevaluefor0to60bar[602]=
{
	0,		0   ,	0.1 ,	0.2 ,	0.3 ,	0.4 ,	0.5 ,	0.6 ,	0.7 ,	0.8 ,	0.9 ,	1   ,	1.1 ,	1.2 ,	1.3 ,	1.4 ,	1.5 ,	1.6 ,
	1.7 ,	1.8 ,	1.9 ,	2   ,	2.1 ,	2.2 ,	2.3 ,	2.4 ,	2.5 ,	2.6 ,	2.7 ,	2.8 ,	2.9 ,	3   ,	3.1 ,	3.2 ,	3.3 ,
	3.4 ,	3.5 ,	3.6 ,	3.7 ,	3.8 ,	3.9 ,	4   ,	4.1 ,	4.2 ,	4.3 ,	4.4 ,	4.5 ,	4.6 ,	4.7 ,	4.8 ,	4.9 ,	5   ,
	5.1 ,	5.2 ,	5.3 ,	5.4 ,	5.5 ,	5.6 ,	5.7 ,	5.8 ,	5.9 ,	6   ,	6.1 ,	6.2 ,	6.3 ,	6.4 ,	6.5 ,	6.6 ,	6.7 ,
	6.8 ,	6.9 ,	7   ,	7.1 ,	7.2 ,	7.3 ,	7.4 ,	7.5 ,	7.6 ,	7.7 ,	7.8 ,	7.9 ,	8   ,	8.1 ,	8.2 ,	8.3 ,	8.4 ,
	8.5 ,	8.6 ,	8.7 ,	8.8 ,	8.9 ,	9   ,	9.1 ,	9.2 ,	9.3 ,	9.4 ,	9.5 ,	9.6 ,	9.7 ,	9.8 ,	9.9 ,	10  ,	10.1,
	10.2,	10.3,	10.4,	10.5,	10.6,	10.7,	10.8,	10.9,	11  ,	11.1,	11.2,	11.3,	11.4,	11.5,	11.6,	11.7,	11.8,
	11.9,	12  ,	12.1,	12.2,	12.3,	12.4,	12.5,	12.6,	12.7,	12.8,	12.9,	13  ,	13.1,	13.2,	13.3,	13.4,	13.5,
	13.6,	13.7,	13.8,	13.9,	14  ,	14.1,	14.2,	14.3,	14.4,	14.5,	14.6,	14.7,	14.8,	14.9,	15  ,	15.1,	15.2,
	15.3,	15.4,	15.5,	15.6,	15.7,	15.8,	15.9,	16  ,	16.1,	16.2,	16.3,	16.4,	16.5,	16.6,	16.7,	16.8,	16.9,
	17  ,	17.1,	17.2,	17.3,	17.4,	17.5,	17.6,	17.7,	17.8,	17.9,	18  ,	18.1,	18.2,	18.3,	18.4,	18.5,	18.6,
	18.7,	18.8,	18.9,	19  ,	19.1,	19.2,	19.3,	19.4,	19.5,	19.6,	19.7,	19.8,	19.9,	20  ,	20.1,	20.2,	20.3,
	20.4,	20.5,	20.6,	20.7,	20.8,	20.9,	21  ,	21.1,	21.2,	21.3,	21.4,	21.5,	21.6,	21.7,	21.8,	21.9,	22  ,
	22.1,	22.2,	22.3,	22.4,	22.5,	22.6,	22.7,	22.8,	22.9,	23  ,	23.1,	23.2,	23.3,	23.4,	23.5,	23.6,	23.7,
	23.8,	23.9,	24  ,	24.1,	24.2,	24.3,	24.4,	24.5,	24.6,	24.7,	24.8,	24.9,	25  ,	25.1,	25.2,	25.3,	25.4,
	25.5,	25.6,	25.7,	25.8,	25.9,	26  ,	26.1,	26.2,	26.3,	26.4,	26.5,	26.6,	26.7,	26.8,	26.9,	27  ,	27.1,
	27.2,	27.3,	27.4,	27.5,	27.6,	27.7,	27.8,	27.9,	28  ,	28.1,	28.2,	28.3,	28.4,	28.5,	28.6,	28.7,	28.8,
	28.9,	29  ,	29.1,	29.2,	29.3,	29.4,	29.5,	29.6,	29.7,	29.8,	29.9,	30  ,	30.1,	30.2,	30.3,	30.4,	30.5,
	30.6,	30.7,	30.8,	30.9,	31  ,	31.1,	31.2,	31.3,	31.4,	31.5,	31.6,	31.7,	31.8,	31.9,	32  ,	32.1,	32.2,
	32.3,	32.4,	32.5,	32.6,	32.7,	32.8,	32.9,	33  ,	33.1,	33.2,	33.3,	33.4,	33.5,	33.6,	33.7,	33.8,	33.9,
	34  ,	34.1,	34.2,	34.3,	34.4,	34.5,	34.6,	34.7,	34.8,	34.9,	35  ,	35.1,	35.2,	35.3,	35.4,	35.5,	35.6,
	35.7,	35.8,	35.9,	36  ,	36.1,	36.2,	36.3,	36.4,	36.5,	36.6,	36.7,	36.8,	36.9,	37  ,	37.1,	37.2,	37.3,
	37.4,	37.5,	37.6,	37.7,	37.8,	37.9,	38  ,	38.1,	38.2,	38.3,	38.4,	38.5,	38.6,	38.7,	38.8,	38.9,	39  ,
	39.1,	39.2,	39.3,	39.4,	39.5,	39.6,	39.7,	39.8,	39.9,	40  ,	40.1,	40.2,	40.3,	40.4,	40.5,	40.6,	40.7,
	40.8,	40.9,	41  ,	41.1,	41.2,	41.3,	41.4,	41.5,	41.6,	41.7,	41.8,	41.9,	42  ,	42.1,	42.2,	42.3,	42.4,
	42.5,	42.6,	42.7,	42.8,	42.9,	43  ,	43.1,	43.2,	43.3,	43.4,	43.5,	43.6,	43.7,	43.8,	43.9,	44  ,	44.1,
	44.2,	44.3,	44.4,	44.5,	44.6,	44.7,	44.8,	44.9,	45  ,	45.1,	45.2,	45.3,	45.4,	45.5,	45.6,	45.7,	45.8,
	45.9,	46  ,	46.1,	46.2,	46.3,	46.4,	46.5,	46.6,	46.7,	46.8,	46.9,	47  ,	47.1,	47.2,	47.3,	47.4,	47.5,
	47.6,	47.7,	47.8,	47.9,	48  ,	48.1,	48.2,	48.3,	48.4,	48.5,	48.6,	48.7,	48.8,	48.9,	49  ,	49.1,	49.2,
	49.3,	49.4,	49.5,	49.6,	49.7,	49.8,	49.9,	50  ,	50.1,	50.2,	50.3,	50.4,	50.5,	50.6,	50.7,	50.8,	50.9,
	51  ,	51.1,	51.2,	51.3,	51.4,	51.5,	51.6,	51.7,	51.8,	51.9,	52  ,	52.1,	52.2,	52.3,	52.4,	52.5,	52.6,
	52.7,	52.8,	52.9,	53  ,	53.1,	53.2,	53.3,	53.4,	53.5,	53.6,	53.7,	53.8,	53.9,	54  ,	54.1,	54.2,	54.3,
	54.4,	54.5,	54.6,	54.7,	54.8,	54.9,	55  ,	55.1,	55.2,	55.3,	55.4,	55.5,	55.6,	55.7,	55.8,	55.9,	56  ,
	56.1,	56.2,	56.3,	56.4,	56.5,	56.6,	56.7,	56.8,	56.9,	57  ,	57.1,	57.2,	57.3,	57.4,	57.5,	57.6,	57.7,
	57.8,	57.9,	58  ,	58.1,	58.2,	58.3,	58.4,	58.5,	58.6,	58.7,	58.8,	58.9,	59  ,	59.1,	59.2,	59.3,	59.4,
	59.5,	59.6,	59.7,	59.8,	59.9,	60  ,
};

uint16_t adccountsforbatteryVol[122]=
{
	722,	720,	719,	717,	715,	714,	712,	710,	708,	707,	705,	703,	701,	699,	698,	696,	694,	692,
	690,	688,	685,	683,	681,	679,	677,	675,	673,	670,	668,	665,	663,	661,	658,	656,	653,	651,
	649,	646,	643,	641,	639,	635,	632,	629,	626,	624,	620,	617,	613,	610,	607,	603,	599,	596,
	592,	589,	585,	581,	577,	573,	570,	564,	560,	555,	551,	548,	542,	537,	532,	528,	524,	517,
	513,	507,	502,	498,	492,	486,	481,	475,	470,	465,	459,	453,	448,	444,	436,	430,	425,	419,
	416,	408,	402,	396,	390,	384,	378,	372,	367,	361,	356,	349,	343,	337,	331,	325,	319,	313,
	307,	301,	296,	288,	282,	276,	269,	266,	258,	252,	246,	240,	235,    220
};

float batteryVolvaluefor8to32V[122]=
{
	32  ,	31.8,	31.6,	31.4,	31.2,	31  ,	30.8,	30.6,	30.4,	30.2,	30  ,	29.8,	29.6,	29.4,	29.2,	29  ,	28.8,	28.6,
	28.4,	28.2,	28  ,	27.8,	27.6,	27.4,	27.2,	27  ,	26.8,	26.6,	26.4,	26.2,	26  ,	25.8,	25.6,	25.4,	25.2,	25  ,
	24.8,	24.6,	24.4,	24.2,	24  ,	23.8,	23.6,	23.4,	23.2,	23  ,	22.8,	22.6,	22.4,	22.2,	22  ,	21.8,	21.6,	21.4,
	21.2,	21  ,	20.8,	20.6,	20.4,	20.2,	20  ,	19.8,	19.6,	19.4,	19.2,	19  ,	18.8,	18.6,	18.4,	18.2,	18  ,	17.8,
	17.6,	17.4,	17.2,	17  ,	16.8,	16.6,	16.4,	16.2,	16  ,	15.8,	15.6,	15.4,	15.2,	15  ,	14.8,	14.6,	14.4,	14.2,
	14  ,	13.8,	13.6,	13.4,	13.2,	13  ,	12.8,	12.6,	12.4,	12.2,	12  ,	11.8,	11.6,	11.4,	11.2,	11  ,	10.8,	10.6,
	10.4,	10.2,	10  ,	9.8 ,	9.6 ,	9.4 ,	9.2 ,	9   ,	8.8 ,	8.6 ,	8.4 ,	8.2 ,	8   ,   0   ,
};

uint16_t adccountsforres40to6K[106]=
{
	26 ,	27 ,	27 ,	28 ,	29 ,	31 ,	32 ,	33 ,	34 ,	35 ,	37 ,	39 ,	41 ,	42 ,	43 ,	44 ,	45 ,	46 ,
	47 ,	48 ,	49 ,	50 ,	51 ,	52 ,	53 ,	54 ,	55 ,	57 ,	58 ,	59 ,	60 ,	62 ,	63 ,	65 ,	66 ,	67 ,
	69 ,	72 ,	74 ,	76 ,	78 ,	80 ,	82 ,	84 ,	86 ,	88 ,	91 ,	95 ,	98 ,	101,	105,	108,	111,	115,
	118,	121,	126,	131,	137,	142,	147,	153,	158,	163,	168,	173,	182,	186,	198,	207,	216,	224,
	233,	241,	249,	258,	272,	286,	300,	314,	328,	341,	355,	370,	384,	398,	422,	445,	470,	491,
	517,	540,	564,	587,	610,	633,	659,	683,	711,	738,	764,	792,	819,	847,	874,	901,
};

uint16_t resvaluefor40to6K[106]=
{
	40  ,	46  ,	52  ,	58  ,	63  ,	74  ,	81  ,	89  ,	95  ,	104 ,	120 ,	133 ,	142 ,	150 ,	155 ,	164 ,	170 ,	176 ,
	182 ,	189 ,	195 ,	201 ,	208 ,	214 ,	220 ,	227 ,	236 ,	245 ,	255 ,	264 ,	274 ,	283 ,	292 ,	302 ,	311 ,	321 ,
	334 ,	348 ,	362 ,	376 ,	390 ,	404 ,	418 ,	432 ,	446 ,	460 ,	482 ,	504 ,	526 ,	548 ,	570 ,	592 ,	614 ,	636 ,
	658 ,	680 ,	714 ,	749 ,	784 ,	819 ,	854 ,	889 ,	924 ,	959 ,	994 ,	1029,	1085,	1142,	1198,	1255,	1311,	1368,
	1424,	1481,	1537,	1594,	1687,	1781,	1874,	1968,	2061,	2155,	2248,	2342,	2435,	2529,	2687,	2846,	3004,	3163,
	3322,	3480,	3639,	3797,	3956,	4115,	4303,	4492,	4680,	4869,	5057,	5246,	5434,	5623,	5811,	6000,
};

uint16_t tempvaluefor40to6K[106]=
{
	140,	135,	130,	127,	125,	120,	115,	110,	108,	105,	100,	97 ,	95 ,	93 ,	92 ,	90 ,	89 ,	88 ,
	87 ,	86 ,	85 ,	84 ,	83 ,	82 ,	81 ,	80 ,	79 ,	78 ,	77 ,	76 ,	75 ,	74 ,	73 ,	72 ,	71 ,	70 ,
	69 ,	68 ,	67 ,	66 ,	65 ,	64 ,	63 ,	62 ,	61 ,	60 ,	59 ,	58 ,	57 ,	56 ,	55 ,	54 ,	53 ,	52 ,
	51 ,	50 ,	49 ,	48 ,	47 ,	46 ,	45 ,	44 ,	43 ,	42 ,	41 ,	40 ,	39 ,	38 ,	37 ,	36 ,	35 ,	34 ,
	33 ,	32 ,	31 ,	30 ,	29 ,	28 ,	27 ,	26 ,	25 ,	24 ,	23 ,	22 ,	21 ,	20 ,	19 ,	18 ,	17 ,	16 ,
	15 ,	14 ,	13 ,	12 ,	11 ,	10 ,	9  ,	8  ,	7  ,	6  ,	5  ,	4  ,	3  ,	2  ,	1  ,	0  ,
};

float gfeopcurrentvalue=0;
uint16_t guieopadcvalue=0;
float gftopcurrentvalue=0;
uint16_t guitopadcvalue=0;
uint16_t guicotresistancevalue=0;
uint16_t guicotadcvalue=0;
uint16_t guicottempvalue=0;
uint16_t guibatteryadcvalue=0;

unsigned char diRwl=0;
unsigned char diPrkbrk=0;
unsigned char diAirfilclg = 0;
unsigned char diseatbelt=0;
unsigned char diEOFC = 0;


struct strDiagnosticMessage strDmLogfromVMS[NO_OF_INTERNAL_DM1_MSG];
struct strDiagnosticMessage strDmLogfromVMSprev[NO_OF_INTERNAL_DM1_MSG];
struct strDiagnosticMessage strDmLogfromVMSerror[NO_OF_INTERNAL_DM1_MSG];

unsigned char error_cnt=0;
unsigned char error_cnt_VMS=0;

struct
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
	volatile unsigned int counter_cot=0;
	volatile unsigned int counter_eop=0;
	volatile unsigned int counter_top=0;
	volatile unsigned int counter_batt=0;
	volatile unsigned int counter_freq=0;

	struct adccounts
	{
		uint16_t	cot_adc_counts;
		uint16_t	top_adc_counts;
		uint16_t	eop_adc_counts;
		uint16_t	battery_adc_counts;
		unsigned long freq_counts;
	};

	struct adccounts presentadc;
	struct adccounts prevadc;
	struct adccounts tempadc;

	struct timeout
	{
		uint8_t  cot_adc :1,
				 top_adc: 1,
				 eop_adc: 1,
				 battery_adc: 1,
				 freq_in:1;
	};

	struct timeout starttmr;
	struct timeout stoptmr;
#else
	volatile unsigned int counter_cot=0;
	volatile unsigned int counter_top=0;
	volatile unsigned int counter_fuel=0;
	volatile unsigned int counter_batt=0;
	volatile unsigned int counter_freq=0;

	struct adccounts
	{
	    uint16_t	cot_adc_counts;
	    uint16_t	top_adc_counts;
	    uint16_t	fuel_adc_counts;
	    uint16_t	battery_adc_counts;
	    unsigned long freq_counts;
	};

	struct adccounts presentadc;
	struct adccounts prevadc;
	struct adccounts tempadc;

	struct timeout
	{
	    uint8_t  cot_adc :1,
				 top_adc: 1,
	     	 	 fuel_adc: 1,
				 battery_adc: 1,
				 freq_in:1;
	};

	struct timeout starttmr;
	struct timeout stoptmr;
#endif

float km_ctr							= 0;
float fract_ctr                  		= 0;
float frac_km      						= 0;
uint32_t Distance_in_km					= 0;
float one_km_1  						= 0;
float CAN_distance                      = 0;
float distance_p_sec					= 0;

unsigned char flagkm_CAN = 0;
unsigned char flagodometer_updated = 0;
unsigned char flagdistance =0;

unsigned long temp_calc_var=0;
unsigned char set_onesec_timer=0;
unsigned int onseccounter=0;
unsigned int countervar=0;

unsigned char unlink_rawCandatalog=0;
unsigned char unlink_datalog=0;
unsigned char unlink_faultlog=0;

volatile unsigned int pulsecount=0;
volatile unsigned int pulsecounter=0;
unsigned char set_pulse_timer=0;

unsigned char pendrive_detected=0;

/****added by Rajashekhar on 21.04.22 for APLMS CAN****/
//***********APLMS RELATED*********//
struct flag_CAN {
	uint16_t
	F100_last_record	: 1,
	F101_diagnostics 	: 1,
	F102_bargraph 		: 1,
	F105_customer 		: 1,
	process_customer 	: 1,
	process_last_record : 1;
};

union {
	uint16_t    all;
	struct flag_CAN APLMS_PGNs;
}aplms_CAN_flags;
//char cutomer_name_buffer[20]	= "abcdefghijklmnopqrst";
//char model_number_buffer[8] 	= " BH 100M";
//char serial_number_buffer[8] 	= "12345678" ;
unsigned char data_time_buffer[8]		= {0};
char cutomer_name_buffer[20] 			= {0};
char model_number_buffer[8]				= {0};
char serial_number_buffer[8]			= {0};

unsigned int latched_wt                 = 0;
unsigned int swings						= 0;

unsigned int LoadTimeHour				= 0;
unsigned char LoadTimeMinute 			= 0;

unsigned int HaulTimeHour				= 0;
unsigned char HaulTimeMinute			= 0;

unsigned int HaulStopTimeHour			= 0;
unsigned char HaulStopTimeMinute		= 0;

unsigned int DumpTimeHour				= 0;
unsigned char DumpTimeMinute			= 0;

unsigned int ReturnTimeHour				= 0;
unsigned char ReturnTimeMinute			= 0;

unsigned int ReturnStopTimeHour			= 0;
unsigned char ReturnStopTimeMinute		= 0;

unsigned int HaulDistance_msb				= 0;
unsigned int ReturnDistance_msb				= 0;
unsigned int HaulMaxSpeed_msb				= 0;
unsigned int HaulAvgSpeed_msb				= 0;
unsigned int ReturnMaxSpeed_msb				= 0;
unsigned int ReturnAvgSpeed_msb				= 0;

unsigned int HaulDistance_lsb				= 0;
unsigned int ReturnDistance_lsb				= 0;
unsigned int HaulMaxSpeed_lsb				= 0;
unsigned int HaulAvgSpeed_lsb				= 0;
unsigned int ReturnMaxSpeed_lsb			= 0;
unsigned int ReturnAvgSpeed_lsb			= 0;

unsigned long long operator_id 			= 0;
unsigned int Last_Status				= 0;
unsigned int Last_Year					= 0;
unsigned int Over_Loaded				= 0;
unsigned int Bucket_weight				= 0;
unsigned int K1_bucket_weight			= 0;
unsigned int K2_bucket_weight			= 0;
unsigned int Seconds					= 0;

unsigned char Last_Date					= 0;
unsigned char Last_Month				= 0;
unsigned char Last_Hour					= 0;
unsigned char Last_Minute				= 0;
unsigned char Last_Seconds				= 0;

unsigned long cummulative_weight_per_day             = 0;
unsigned int cycle_weight_final                     = 0;
unsigned int vehicle_speed                          = 0;
unsigned int total_trips_per_day                    = 0;
unsigned int number_of_frames = 0;
unsigned int display_tone_value                     = 0;

union TpBufferRegister lastrecord[9];
union TpBufferRegister customer[3];

unsigned char fuel_per_msb = 0;
unsigned char fuel_per_lsb = 0;
unsigned char error_code = 0;

unsigned int total_time_hh = 0;
unsigned int total_time_mm = 0;
unsigned int total_dst_km = 0;
unsigned int total_dst_m = 0;

float gfFuel_text			    = 0;
float gfFIP_text			    = 0;
float gfEop_text				= 0;
float gfEct_text				= 0;
float gfEct_text2				= 0;
int giEngineRpm_text 		= 0;
int giOutputRpm_text 		= 0;
int giVehicleSpeed_text  	= 0;
float gfTop_text			= 0;
float gfTot_text		 	= 0;
float gfBot_text		 		= 0;
float gfVolt_text 			= 0;
float gfVolt2_text 			= 0;
float gfEot_text			= 0;
float gfCot_text            = 0;

unsigned int aplms_year=0;

/**********added on 15.06.2022 by Rajashekhar from BH60***************/

uint8_t power_on_open_faultlog_file = 0;
uint8_t fault_found_write_to_sd = 0;

struct vms_hmi_flags
{
	uint64_t
	flag_storing_raw_can_data :	1,
	gauge_rotation_poweron : 1,
	screen_onoff_home_read :1;
};

union
{
	uint64_t all;
    struct vms_hmi_flags flag;
}vms;

int EngRpmSensor = 0;
int prevRpm = 0;

uint8_t freq_tmr_start = 0;
uint16_t freq_tmr_start_cnt = 0;

int16_t StepSize = 0;
int16_t Step_Size2 = 0;
int16_t Step_Size3 = 0;
uint8_t no_of_sec = 0;

/******17.04.2023***********/
Uint32 giHourMeter	 	= 0;
float EngineHourMeter	= 0;
float Prev_EngineHrs = 0;
uint32_t DisplayHourMeter	= 0;

bool speedo_onoff_status = 0;
bool trans_onoff_status = 0;
bool digi_onoff_status  = 0;
bool analog_onoff_status = 0;
bool eng_rpm_onoff_status = 0;

bool speedo_home_status = 0;
bool trans_home_status = 0;
bool digi_home_status  = 0;
bool analog_home_status = 0;
bool eng_rpm_home_status = 0;

uint8_t brightness_percentage = 0;
bool use_only_numericals = 0;

uint8_t Winbond_mem_test_flag = 0;

uint16_t delay_cntrl = 0;

bool datalog_overflow = 0;
bool errorlog_overflow = 0;
bool swwhlog_overflow = 0;

uint8_t datalog_array[100]   = {0};
uint8_t errorlog_array[100]   = {0};
uint8_t swwhlog_array[100]   = {0};
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

struct DL_frame Datalog_frame;

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

struct EL_frame Errorlog_frame;

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
struct frame Swwhlog_frame;

bool Start_aplms_logging = 0;

bool Appwizard_rendering_pendrv_detect = 0;
bool startcpy_to_pendrv = 0;
uint16_t rendrng_cnter = 0;

uint8_t *pendrv_filename;

bool buzzer_op 			= 0;
bool asr_hill_holder_op = 0;
float gfFuel_rate 		= 0;
float avg_fuel_rate 	= 0;
float Prev_Fuel_rate = 0;

uint16_t veh_spd_lmt   = 0;
uint16_t disp_seconds_cntr = 0;

bool log_display_hrs = 0;
uint8_t  Display_fractn_hr = 0;
uint32_t Display_actual_hr = 0;

bool cwl_op = 0;
bool asr_hill_hldr_op = 0;

bool spn_fmi_is_valid = 0;

bool asr_off_switch = 0;
bool abs_off_switch = 0;

unsigned int guiselct_screen=0;
unsigned int guiscreen_on_off=0;
unsigned int guiselct_home_screen=0;

bool start_tmr_for_pwron_errs = 0;
uint16_t cntr_for_pwron_errs = 0;
bool wait_donotlog_errs_immediately_during_pwron = 0;

uint16_t Ect_Resistance = 0;
uint16_t Eot_Resistance = 0;
uint16_t Fuel_Resistance = 0;

uint16_t Sender_CAN_Alive = 0;
bool start_tmr_for_sender_CAN = 0;
uint16_t Sender_CAN_tmr_cnt = 0;
bool SenderCAN_disconnected = 0;

uint8_t Eng_oil_filter_clogd = 0;

bool start_tmr_for_eng_hrs_log = 0;
uint16_t eng_hrs_tmr_cnt = 0;
bool log_eng_hrs = 0;
uint16_t eng_seconds_cntr = 0;
uint8_t eng_fractn_hr = 0;
uint32_t eng_actual_hr = 0;

uint16_t datalength = 0;
bool dm1_process_start = 0;

/******02.06.2022*********/
uint16_t gl_LoopCheck = 0;

uint8_t  gl_NoOfFaults 	= 0;
uint8_t  gl_Loop 		= 0;
uint8_t  gl_Loop1		= 0;
uint8_t  gl_Frame		= 0;
uint8_t  gl_Status		= 0;

Uint32 gl_spnDm1 =0;
uint8_t gl_fmiDm1=0;

bool engfulrt_popup = 0;
bool enghrs_popup = 0;

uint8_t swcs_cntr = 0;

uint8_t swcs_values[18] = {0};
uint8_t values_of_swcs[18] = {0};

uint8_t swcs_def_values[] = {07,01,MER_AM, 03,00,MER_PM, 03,01,MER_PM, 11,00,MER_PM, 11,01,MER_PM, 07,00,MER_AM};

uint8_t log_sec_counter = 0;
bool start_tmr_for_disp_hrs_log = 0;
bool display_on = 0;
bool eng_on = 0;
bool Eng_rpm_present = 0;

uint8_t ref_hr = 0;
uint8_t ref_min = 0;
uint8_t ref_sec = 0;

uint8_t reference_hr = 0;
uint8_t reference_min = 0;
uint8_t reference_sec = 0;

uint8_t whrs_ref_hr = 0;
uint8_t whrs_ref_min = 0;
uint8_t whrs_ref_sec = 0;
bool whrs_make_ref_time_as_prsnt_time = 0;

bool make_ref_time_as_prsnt_time = 0;
bool make_ref_tm_as_prsnt_tm_eng_hrs = 0;
bool rtc_datetime_edited = 0;
bool rtc_datetime_edited_enghrs = 0;
bool save_status = 0;
uint32_t stored_ref_time = 0;

/*****************************************************/
uint8_t lucFault = 0;

bool Next_error_msg = 0;
bool Previous_error_msg = 0;

bool next_to_previous_flag = 0;
bool previous_to_next_flag = 0;

uint16_t Currnt_err_no = 0;
uint16_t err_index = 0;
bool next_button_pressed = 0;
bool previous_button_pressed = 0;

uint16_t s_addr = 0;
uint16_t err_no = 0;

bool strt_tmr_for_err_icon_toggle = 0;
uint16_t toggle_err_icon_cntr = 0;

bool strt_tmr_for_idntset_toggle = 0;
uint16_t toggle_idntset_cntr = 0;

bool strt_tmr_for_seatbelt_symbol_toggle = 0;
uint16_t toggle_seatbelt_cntr = 0;

bool strt_tmr_for_eop_icon_toggle = 0;
uint16_t toggle_eop_icon_cntr = 0;

bool strt_tmr_for_ect_icon_toggle = 0;
uint16_t toggle_ect_icon_cntr = 0;

bool strt_tmr_for_eot_icon_toggle = 0;
uint16_t toggle_eot_icon_cntr = 0;

bool strt_tmr_for_fuel_icon_toggle = 0;
uint16_t toggle_fuel_icon_cntr = 0;

bool strt_tmr_for_top_icon_toggle = 0;
uint16_t toggle_top_icon_cntr = 0;

bool strt_tmr_for_tot_icon_toggle = 0;
uint16_t toggle_tot_icon_cntr = 0;

bool strt_tmr_for_ovrspd_toggle = 0;
uint16_t toggle_ovrpsd_cntr = 0;
bool engovrspd = 0;

uint16_t Err_index[DM1_SA] = {0};
uint16_t currnt_err_num[DM1_SA] = {0};
int8_t SourceAdrr = 0;
uint8_t next_to_prev[DM1_SA] = {0};
uint8_t prev_to_next[DM1_SA] = {0};
bool blue_upbutton_pressed = 0;
bool blue_downbutton_pressed = 0;

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

struct DiagScreen DiagPage2[DM1_SA];

bool get_faults = 0;

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

struct communication Can_Comm;

int  EngRpmCan		= 0;

uint16_t Hol_Resistance = 0;
uint16_t guiHolCounts = 0;
float gfHol				= 0;

uint16_t Hot_Resistance = 0;
uint16_t guiHotCounts = 0;
float gfHot				= 0;

float gfBoostPressure = 0;
float gfEng_battry_volt = 0;
float gfFIP_RackPosition = 0;

uint8_t uin[17] = {0};
uint8_t make[17] = {0};
uint8_t model[17] = {0};
uint8_t serial_number[17] = {0};
uint8_t unit_number[17] = {0};
uint8_t display_date_code[] = {":170620231701"};/*DDMMYYYYHHMM*/
uint8_t io_module_firmware[] = {":79.70.0175 V008"};

uint8_t di_hol = 0;

uint8_t datalog_pwron = 0;

bool id_not_set = 0;

uint8_t cntr_1s_1 = 0;
uint8_t cntr_1s_2 = 0;

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
union GeneralBufferFrame1 unGeneralBufferFrame1;
union GeneralBufferFrame1 unGeneralBufferFrame2;
union GeneralBufferFrame1 unGeneralBufferFrame3;
union GeneralBufferFrame1 unGeneralBufferFrame4;
union GeneralBufferFrame1 unGeneralBufferFrame5;
union GeneralBufferFrame1 unGeneralBufferFrame6;
union GeneralBufferFrame1 unGeneralBufferFrame7;
union GeneralBufferFrame1 unGeneralBufferFrame8;

uint8_t Swwhloggingheader = 0;
uint32_t Swwhloggingdatapt = 0;
uint32_t Genloggingdatapt = 0;

uint8_t ShiftNo = 0;
uint16_t total_whrs = 0;
uint64_t Whrs_actual_hr = 0;
uint8_t Whrs_fractn_hr = 0;

bool rtc_edited = 0;
bool donot_store_prev_date =0;

float ain1_s_cnts = 0;
float ain2_s_cnts = 0;
float ain3_s_cnts = 0;
float ain4_s_cnts = 0;

float ain1_s_type = 0;
float ain2_s_type = 0;
float ain3_s_type = 0;
float ain4_s_type = 0;

float ain1_s_value = 0;
float ain2_s_value = 0;
float ain3_s_value = 0;
float ain4_s_value = 0;

float adjd_eng_hrs = 0;
int8_t ehe_scroll = 0;
uint8_t WarningMsg = 0;
float CalculatedHrs = 0;
bool enghrs_en_dis = 0;

	#ifdef DOZER_P_VER
		uint32_t SPN_FMI_DATA[NO_OF_DM1_MESSAGES - 1][2] =
		{
				{177,	16},	//Transmission oil temperature is above normal.
				{127,	16},	//Transmission Oil Pressure is Above Normal
				{127,	18},	//Transmission Oil Pressure is below Normal
				{100,	18},	//Engine oil pressure below normal.
				{190,	16},	//Engine is over speed.
				{3359,	16},	//Transmission Oil Filter Clogged
				{111,   18},	//Low engine coolant level.
				{168,	18},	//Electrical Battery Potential out of Range
				{110,	16},	//Engine water temperature above normal
				{175,	16},	//Engine Oil temperature above normal.
				{96,	18},	//Fuel level is low.
				{99,	16},	//Engine Oil Filter Clogged
				{96,	3},		//Fuel Level sensor open circuit
				{100,	2},		//Engine oil pressure Sensor malfunction
				{100,	3},		//Engine oil pressure voltage is above normal, or shorted to high.
				{100,	4},		//Engine oil pressure voltage is below normal, or shorted to low.
				{110,	3},		//Engine coolant temperature voltage is above normal, or shorted to high.
				{110,	4},		//Engine coolant temperature voltage is below normal, or shorted to low.
				{175,	3},		//Engine Oil Temperature is Open Circuit
				{175,	4},		//Engine Oil Temperature is Short Circuit
				{177,	3},		//Converter Oil Temperature is Open Circuit
				{177,	4},		//Converter Oil Temperature is Short Circuit
				{127,	2},		//Transmission oil pressure Sensor malfunction
				{127,	3},		//Transmission oil pressure voltage is above normal, or shorted to high.
				{127,	4},		//Transmission oil pressure voltage is below normal, or shorted to low.
				{521001,3},		//SenderCAN is Disconnected
		};
	#else
		uint32_t SPN_FMI_DATA[NO_OF_DM1_MESSAGES - 1][2] =
		{
				{810,	2},		//ErrPickUp1
				{723,	2},		//ErrPickUp2
				{190,	31},	//ErrOverSpeed
				{91	,	31},	//ErrSetp1Ext
				{974,	31},	//ErrSetp2Ext
				{102,	2},		//ErrBoostPressure
				{100,	2},		//ErrOilPressure
				{108,	31},	//ErrAmbientPressure
				{110,	2},		//ErrCoolantTemp
				{175,	2},		//ErrOilTemp
				{167,	31},	//ErrAlternator
				{100,	17},	//ErrOilPressWarn
				{100,	1},		//ErrOilPressEcy
				{110,	15},	//ErrCoolantTempWarn
				{175,	15},	//ErrOilTempWarn
				{110,	0},		//ErrCoolantTempEcy
				{167,	31},	//ErrAlternatorWarn
				{4002,	31},	//ErrFailedToStart
				{3058,	31},	//ErrPECommonAlarm
				{1210,	31},	//ErrFeedback
				{638,   31},	//ErrActuatorDiff
				{1210,	31},	//ErrFeedbackRef
				{1210,	31},	//ErrFeedbackAdjust
				{638,	31},	//ErrAmplifier
				{639,	31},	//ErrSAEJ1939CanBus
				{639,	31},	//ErrSAEJ1939Comm
				{3058,	31},	//ErrHZMCanBus
				{3058,	31},	//ErrHZMCanComm
				{3058,	31},	//ErrPEFatalError
				{630,	31},	//ErrParamStore
				{628,	31},	//ErrProgramTest
				{629,	31},	//ErrRAMTest
				{924,	31},	//ErrDigitalOut
				{3597,	31},	//ErrPowerSupply
				{3599,	31},	//ErrSupply7.5V
				{3598,	31},	//ErrPowerSupplyEDCFb
				{3509,	31},	//Err5VSensorSupply1
				{3510,	31},	//Err5VSensorSupply2
				{3511,	31},	//Err5VSensorSupply3
				{3512,	31},	//Err5VSensorSupply4
				{1136,	31},	//ErrInternTemp1
				{1136,	31},	//ErrInternTemp2
				{628,	31},	//ErrData
				{501,	31},	//ErrConfiguration
				{628,	31},	//ErrStack
				{629,	31},	//ErrIntern
				{96	,	18},	//Fuel level is Low
				{96	,	3},		//Fuel level sensor is Open
				{127,	18},	//Transmission oil pressure is low
				{127,	16},	//Transmission oil pressure is high
				{127,	4},		//Transmission oil pressure sensor Input is below normal, or shorted to low
				{127,	3},		//Transmission oil pressure sensor Input  is above normal, or shorted to high.
				{3823,	16},	//Converter oil temperature is high
				{3823,	3},		//Converter Oil Temperature Sensor Open Circuit.
				{3823,	4},		//Converter Oil Temperature Sensor Short Circuit.
				{111,	18},	//Radiator water level is low
				{70,	16},	//Parking brake is ON
				{99,	18},	//engine oil filter is clogged
				{5086,	18},	//Air Filter Clogged
				{1638,	3},		//Hydraulic  Oil Temperature Sensor Open Circuit.
				{1638,	4},		//Hydraulic Oil Temperature Sensor Short Circuit.
				{2602,	18},	//Hydraulic Oil Level Low
				{521001,3},		//SenderCAN is Disconnected
		};
	#endif



#endif

