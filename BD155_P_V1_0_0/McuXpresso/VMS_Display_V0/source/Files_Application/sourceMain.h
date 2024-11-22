/*
 * sourceMain.h
 *
 *  Created on: 08-Oct-2021
 *      Author: EME01-L-02D19
 */

#ifndef SOURCEMAIN_H_
#define SOURCEMAIN_H_

#include <math.h>
#include "../Files_Header/sourceMacro.h"
#include "../Files_Header/sourceVariable.h"
#include "../Files_Header/sourceInclude.h"
#include "fsl_common.h"

extern uint8_t gLOG_DATA_TYPE_APP;
const TCHAR driverNumberBuffer2[3U] = {SDDISK + '0', ':', '/'};
const TCHAR driverNumberBuffer1[3U] = {USBDISK + '0', ':', '/'};
unsigned char usb_written = 0,sd_written = 0;
extern unsigned char acAPPW_Language_0[];


/**************from sourceMain.c***************/
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*************04.11.2022**************/
/* The PWM base address */
#define BOARD_PWM_BASEADDR PWM4

#define PWM_SRC_CLK_FREQ CLOCK_GetFreq(kCLOCK_IpgClk)
/* Definition for default PWM frequence in hz. */
#ifndef APP_DEFAULT_PWM_FREQUENCE
#define APP_DEFAULT_PWM_FREQUENCE (400UL)

uint32_t duty_cycle = 4;
#define PWM_4_SM3
#endif
/*************************************/


#define APP_PXP                PXP
#define EXAMPLE_GPT            GPT2
#define EXAMPLE_GPT_TICK_TO_MS 25
#define DEMO_SDCARD_POWER_CTRL_FUNCTION_EXIST
#define BUFFER_SIZE (20000)

#define ADC_BASE          ADC2
//#define DEMO_ADC_USER_CHANNEL  0U
#define ADC_CHANNEL_GROUP  0

#define BOARD_QTMR_BASEADDR              TMR3
#define BOARD_QTMR_INPUT_CAPTURE_CHANNEL kQTMR_Channel_3//kQTMR_Channel_0
#define BOARD_QTMR_PWM_CHANNEL           kQTMR_Channel_1
#define QTMR_CounterInputPin             kQTMR_Counter3InputPin//kQTMR_Counter0InputPin

/* Interrupt number and interrupt handler for the QTMR instance used */
#define QTMR_IRQ_ID      TMR3_IRQn
#define QTMR_IRQ_HANDLER TMR3_IRQHandler

/* QTMR Clock source divider for Ipg clock source, the value of two macros below should be aligned. */
#define QTMR_PRIMARY_SOURCE       (kQTMR_ClockDivide_64)
#define QTMR_CLOCK_SOURCE_DIVIDER (64)
/* The frequency of the source clock after divided. */
#define QTMR_SOURCE_CLOCK (CLOCK_GetFreq(kCLOCK_IpgClk) / QTMR_CLOCK_SOURCE_DIVIDER)

#define EXAMPLE_I2C_MASTER_BASE (LPI2C1_BASE)
/* Select USB1 PLL (480 MHz) as master lpi2c clock source */
#define LPI2C_CLOCK_SOURCE_SELECT (0U)
/* Clock divider for master lpi2c clock source */
#define LPI2C_CLOCK_SOURCE_DIVIDER (5U)
/* Get frequency of lpi2c clock */
#define LPI2C_CLOCK_FREQUENCY ((CLOCK_GetFreq(kCLOCK_Usb1PllClk) / 8) / (LPI2C_CLOCK_SOURCE_DIVIDER + 1U))
#define LPI2C_MASTER_CLOCK_FREQUENCY LPI2C_CLOCK_FREQUENCY
#define WAIT_TIME                    20U

#define EXAMPLE_I2C_MASTER ((LPI2C_Type *)EXAMPLE_I2C_MASTER_BASE)
#define LPI2C_MASTER_SLAVE_ADDR_7BIT 0x6F
#define LPI2C_BAUDRATE               100000
//#define LPI2C_DATA_LENGTH            33U

lpi2c_master_config_t masterConfig;

FRESULT error;
uint32_t spn 			= 0;
uint8_t fmi 			= 0;
//unsigned long record_adjust_10min_time_count=0;

struct test
{
	unsigned char a:1;

};

void BOARD_PowerOffSDCARD(void);
void BOARD_PowerOnSDCARD(void);
int funcSdCardApplication(void);
unsigned long count=0;
static status_t sdcardWaitCardInsert(void);

static FATFS g_fileSystem; /* File system object */
//FIL g_fileObject;   /* File object */
FIL g_fileObject1;

static DIR g_opendir;



//SDK_ALIGN(uint8_t g_bufferWrite[BUFFER_SIZE], BOARD_SDMMC_DATA_BUFFER_ALIGN_SIZE);
SDK_ALIGN(uint8_t g_bufferRead[20000], BOARD_SDMMC_DATA_BUFFER_ALIGN_SIZE);
FRESULT error;
DIR directory; /* Directory object */
FILINFO fileInformation;
UINT bytesWritten;
UINT bytesRead;

#define SDCARD_NEW_LINE f_write(&g_fileObject1,"\n",sizeof("\n"),&bytesWritten)

adc_config_t adcConfigStrcut;
adc_channel_config_t adcChannelConfigStruct;

qtmr_config_t qtmrConfig;

//unsigned char usb_attached=0;
/*******************************************************************************



static usb_status_t USB_HostEvent(usb_device_handle deviceHandle,
                                  usb_host_configuration_handle configurationHandle,
                                  uint32_t eventCode);

/*!
 * @brief app initialization.
 */

static void USB_HostApplicationInit(void);
extern void USB_HostClockInit(void);
extern void USB_HostIsrEnable(void);
extern void USB_HostTaskFn(void *param);
void BOARD_InitHardware(void);
void BOARD_EnableLcdInterrupt(void);
void BOARD_EnableLcdInterrupt(void);

extern usb_host_msd_fatfs_instance_t g_MsdFatfsInstance;
usb_host_handle g_HostHandle;

bool test_toggle=0;
unsigned int test_var=0;
/**********************************************/

extern void J1939Config(void);
extern void J1939MailboxConfigure(void);
extern void funcTransmitCanFrame(void);
extern void CanaFrameConfigure(void);
extern void KeypadConfig(void);
extern void KeypadPeriodicTimeCall(void);
extern void funcDm1ScreenScroll(void);
extern void LoadFaultToStruct(uint8_t lucSource);
void ProcessDigitalInput(void);
void ProcessAnalogInput(void);
extern void hex_display(unsigned long hex_data);
//extern void funcSdCardApplication(void);
extern void ProcessDisplayData(void);
void VariablesInit(void);
void funcSdCardtest(void);
void Store_Dmlog_Frame_From_Into_SDCard(void);
void write_string_to_SDcard(uint8_t *pstr,uint8_t *seperator);
void write_value_to_SDcard(uint32_t hex_value,uint8_t *seperator);
extern uint8_t *spn_fmi_decode(uint32_t llspn,uint8_t lcfmi);
void store_raw_can_data_into_sd_card(void);
extern void funcCopySdCardRawCanDatafileToUSB(void);
uint8_t DetectSDCard(void);
void funcsdcardtrail(void);
extern void funcusbtrail(void);
void funcstore30secrawcandataintosdcard(void);
void funcstoreDM1faultmesgesintoSdcard (void);
void funcReadRawDatafromSdCard(void);
void funcReadFaultDatafromSdCard(void);
extern void funcCopySdCardFaultCanDatafileToUSB(void);

extern void ReadAdcChannels(void);
extern void InputsThresholdDecisionMaking(void);
extern void funcMinMaxErrorLog(void);
extern void funcDataLogging(void);
void funcPrintParameterType(uint8_t lucParameterType);
void funcPrintErrorType(uint8_t lucErrorType);
void FuncStringPrint(uint8_t *puidata);
void store_minmax_to_sd_card(struct MinMaxLogRegister strMinMaxLogData);
void store_Datalogging_to_sd_card(struct MinMaxLogRegister strDataLoggingData);
void funcTempHextoAscii(Uint32 luiHexValue);
void funcWriteMinMaxToSdCard(void);
void funcWriteDataloggingToSdCard(void);
void funcReadMinMaxfromSDcard(void);
void funcReadDataLogfromSdCard(void);
extern void funcCopySdCardMinMaxCanDatafileToUSB(void);
extern void funcCopySdCardDataloggingCanDatafileToUSB(void);
extern uint8_t *source_addr_decode(uint8_t sa);
extern void hex_buff(unsigned char *a);
extern uint8_t hex2ascii(uint32_t hex_value);
unsigned int ReadADCValues(unsigned int channel_number);
void InitAdc(void);
void FuncfaultlogStringPrint(uint8_t *puidata);
void funcfaultTempHextoAscii(Uint32 luiHexValue);
void FreqCaptureInit(void);
unsigned long Readfrequency(void);
void I2cWrite(uint8_t i2caddress,uint8_t i2cdata);
uint8_t  I2cRead(uint8_t i2cReadaddress);
uint16_t bcd2bin(uint16_t BCD);
void ReadRTC(void);
void RTCInit(void);
void WriteRTC(void);
uint8_t  hexa2bcd_rtc(uint8_t temp_data);
void Max22190Init(void);
void WriteSpiMax22190(uint8_t lcMax22190WriteAddress,uint8_t lcMax22190WriteData);
uint16_t Max22190DeviceProcess(uint8_t adresss);
uint8_t ClockDataIn(void);

void DelayUs1(unsigned long llTick);
void ClockDataOut(uint8_t lcSpiTxData);
void funcMUXSelected(uint8_t muxselected);
void ReadandProcessallADCchannels(void);
void ReadandProcessDigitalIO(void);
void funcProcessCOTValue(uint16_t luicotadccounts);
void funcProcessEOPValue(uint16_t luieopadccounts);
void funcProcessBatteryVolValue(uint16_t luibattvoladccounts);
void funcProcessTOPValue(uint16_t luitopadccounts);
void funcProcessFuelValue(uint16_t luifueladccounts);

void ProcessDM1faultfromVMS(void);
void StoreDM1faultfromVMS(void);
extern void StoreDiagnosticMessage(uint8_t lucSource, uint8_t StructureArray, struct strDiagnosticMessage strLocalDM1Log);

extern void    fram_write(Uint32 fram_write_address,uint8_t fram_write_data);
extern uint8_t fram_read(Uint32 fram_read_address);
extern void    winbond_write(Uint32 win_wr_mem_address,uint8_t winbond_write_data);
extern uint8_t winbond_read(Uint32 win_rd_mem_address);
extern void erase_winbond_memory(Uint32 memory_erase_addr,uint8_t erase_type);
extern void FramMemoryTest(void);
extern void WinbondMemoryTest(void);
extern Uint32 MemoryReadVariable(uint8_t MemorySelect, Uint32 MemoryAdd, uint16_t NumberofBytes);
extern void   MemoryWriteVariable(uint8_t MemorySelect, Uint32 MemoryAdd, Uint32 MemoryData, uint16_t NumberofBytes);
//extern void write_fram(Uint32 fram_wr_mem_address,Uint32 data,uint8_t no_of_bytes);
//extern unsigned long read_fram(Uint32 fram_wr_mem_address,uint8_t no_of_bytes);

void Indicatefaultsymbols(void);
void Writedataintofram(unsigned char store_parameter);
void Poweronreaddatafromfram(void);
void Validate_adc_counts(void);
void Adcdatavalidation(void);
void Calculate_distance_in_km_from_CAN_per_sec(void);
void Distance_in_kilometer(void);
void Updatedistance(void);
uint32_t final_km_convertion(uint32_t int_km,uint8_t fractional_km);
void ConvertFREQtoRPM(unsigned long luifreq);

static unsigned int Filter_Engine_Speed1(unsigned int Values_To_Read);
static unsigned int Filter_Engine_Speed2(unsigned int Values_To_Read);
static unsigned int Filter_Engine_Speed_RPM(unsigned int Values_To_Read);
static unsigned int Filter_AIN1_counts(unsigned int Values_To_Read);
static unsigned int Filter_AIN2_counts(unsigned int Values_To_Read);
static unsigned int Filter_AIN3_counts(unsigned int Values_To_Read);
static unsigned int Filter_Battery_counts(unsigned int Values_To_Read);

void Min_max_gauge_values(void);

void PowerONGaugeRotation(void);

void fl_cpy_drv1_to_drv0(void);//added for testing purpose

extern void read_onoff_home_setting_status(void);
extern void Homescreen_select_day(void);
extern void Homescreen_select_night(void);

int PWM_config(void);
void generate_pwm(uint16_t duty_cycle);
void set_brightness(uint8_t brightness_percentage);
extern void Read_brightness_from_FRAM(void);

/*******28.11.2022*********/
void Poweron_memory_read_write(void);
extern void check_winbond_overflowed(void);
void Data_logging(void);
void Fault_logging(void);
void Copy_datalog_file_to_pendrive(void);
void Copy_errorlog_file_to_pendrive(void);
void Copy_rawcanlog_file_to_pendrive(void);
void Copy_WorkingHrslog_file_to_pendrive(void);
void Decode_datalog_array(void);
void Decode_errorlog_array(void);
void write_one_datalog_frame_to_pendrive(struct DL_frame Datalog_frame);
void write_one_errorlog_frame_to_pendrive(struct EL_frame Errorlog_frame);
void write_one_swwhlog_frame_to_pendrive(struct frame Swwhlog_frame);
void write_rawcan_frame_to_pendrive(void);
extern void Store_one_datalog_frame_to_winbond_table(void);
extern void Store_one_errorlog_frame_to_winbond_table(void);
extern void Store_one_swwhlog_frame_to_winbond_table(void);

extern void Read_all_datalog_frames_from_winbond_table(void);
extern void Read_all_errorlog_frames_from_winbond_table(void);
extern void Read_all_swwhlog_frames_from_winbond_table(void);
extern uint8_t *pendrive_filename_creation(uint8_t *filename);

void Logging(void);
void Copying_of_logged_data(void);
void Display_Errors(void);

extern uint8_t Find_Valid_spnfmi(Uint32 lulspn,uint8_t lucfmi);
uint16_t Re_asgn_Org_srs_addr_frm_dm1_array(uint16_t array_sa, uint16_t fault_no);
uint16_t Re_asgn_Org_srs_addr_frm_dm1_array_2(uint16_t SA);
void KeypadApplication(void);

void All_CAN_disconnected_counter(void);
void Reset_all_CAN_parameters(void);
void Reset_Engine_CAN_parameters(void);
void Reset_Transmission_CAN_parameters(void);
void Reset_Io_module_CAN_parameters(void);
void Reset_Sender_CAN_parameters(void);

void write_value_to_Pendrv(Uint32 hex_value,uint8_t *seperator);
void write_string_to_Pendrv(uint8_t *pstr,uint8_t *seperator);

extern uint8_t *pendrive_filename_creation(uint8_t *filename);

void tmr_display_hrs(void);
uint32_t DisplayHours_calculation(void);
uint32_t EngineHours_calculation(void);
void ReadEngHrs(void);
void ReadDisplayHrs(void);
void ReadEngFuelRate(void);
void Decide_eng_on_or_not(void);
void CheckEngRpm_is_coming(void);
void DisplayHrs(void);
void EngineHrs(void);
uint32_t DisplayHoursUsingRTC(void);
uint32_t EngineHoursUsingRTC(void);
extern void funcCanTransmitMailbox(unsigned char lcCanPort, struct CanMessage strTxCanFrame);
void sendEngHrsRequest1(void);
void sendEngHrsRequest2(void);
void send_ToP_ToT(void);
void send_FueL_lvl(void);
void send_ECL_EOP(void);
void send_ParkBrkSw_and_VehicleSpd(void);
void send_AirFilClog(void);
void send_SeatBeltSw(void);
void send_ECT_EOT(void);
void send_E_N_G_SPD(void);
void send_TOFC(void);

extern float LoadProcessedValue(uint16_t LookUpNumber, uint32_t AdcCounts);;
void ADC_channel_processing(uint8_t adc_channel_no, uint32_t raw_adc_counts);

extern void Dm1ScreenScroll(void);
void SeatBeltFlow(void);
void SeatbeltIconToggle(void);
void ErrorIconToggle(void);
void id_notset_Toggle(void);
void EopIconToggle(void);
void EctIconToggle(void);
void EotIconToggle(void);
void FuelIconToggle(void);
void TopIconToggle(void);
void TotIconToggle(void);
void EngOvrSpdIconToggle(void);
void BUZZER_ENABLE(void);


void Read_identification_details(void);
void datalog_write_idntfn_data_to_ext_memory(void);
void errorlog_write_idntfn_data_to_ext_memory(void);

void Condition_to_datalog(void);

extern void read_swcs_data(void);
extern void store_swcs_data(void);

extern uint8_t DM1MessageSelection(Uint32 lulspn,uint8_t lucfmi);

void workingHrsLogic(void);
uint32_t WorkingHrsCalculation(bool eraseall);
void Swwh_logging(bool Shift_start,bool Shift_end,uint8_t ShiftNo,uint16_t Working_Hours);

void str_tx(uint8_t str);
void Serial_TX(LPUART_Type *base, uint8_t data);
void transmit_serial(const uint8_t *str);


uint8_t prsnt_hr  = 0,prsnt_min = 0,prsnt_sec = 0;
uint32_t prsnt_time = 0,
		shift1_start_total_time = 0, shift1_stop_total_time = 0,
		shift2_start_total_time = 0, shift2_stop_total_time = 0,
		shift3_start_total_time = 0, shift3_stop_total_time = 0,DifferenceinDays = 0;

uint8_t Prev_Day = 0,Prev_Mon = 0,Prev_Year = 0,curDay   = 0,curMon   = 0,curYear   = 0;

int getDifference(uint8_t Prev_Day, uint8_t Prev_Mon, uint8_t Prev_Year,uint8_t curDay,uint8_t curMon,uint8_t curYear);
int countLeapYears(uint8_t day, uint8_t mon, uint8_t year);
void Store_Shifts_Started_Date(uint8_t shiftno,uint8_t Date,uint8_t Month,uint8_t Year);
void PowerOnReadForShiftHrs(void);

extern void funcDelayUs(Uint32 llTick);
void Initialization(void);



/*********************encoder***************************/




int32_t mCurPosValue;
volatile uint32_t gMilliseconds = 0;
void Init_SysTick(void);
uint32_t millis(void);
extern void debounce_encoder();
#endif /* SOURCEMAIN_H_ */
