#ifndef FILES_HEADER_SOURCEMACRO_H_
#define FILES_HEADER_SOURCEMACRO_H_

#include "../Files_Application/J1939Stack/sourceJ1939StackMacro.h"
#include "../Files_Application/KeypadStack/sourceKeypadStackMacro.h"
#include "../Files_Application/USB_UserApp_Stack/usb_user_app_macro.h"

#include "usb_host_config.h"
#include "usb_host.h"
#include "usb_host_msd.h"
#include "host_msd_fatfs.h"
#include "fsl_common.h"

#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "fsl_adc.h"
#include "board.h"
#include "emwin_support.h"

#ifndef APPWIZARD
#include "DIALOG.h"
#include "Resource.h"
#else
#include "GUI.h"
#endif

#include <stdio.h>
#include <stdint.h>
#include "fsl_gpio.h"
#include "fsl_gpt.h"
#include "fsl_common.h"
#include "fsl_iomuxc.h"

#include "fsl_flexcan.h"

#include "fsl_gpio.h"
#include "fsl_gpt.h"
#include "usb_phy.h"
#include "app.h"
#include "string.h"
#include "stdbool.h"

#include "fsl_sd.h"
#include "ff.h"
#include "diskio.h"
#include "fsl_sd_disk.h"
#include "../board/sdmmc_config.h"
#include "fsl_qtmr.h"
#include "fsl_lpi2c.h"

/***04.11.22***/
#include "fsl_pwm.h"
#include "fsl_xbara.h"

//-----------MDFD BY RAJASHEKHAR FOR UART----------//
#define DEMO_LPUART            LPUART1
#define DEMO_LPUART_CLK_FREQ   BOARD_DebugConsoleSrcFreq()
#define DEMO_LPUART_IRQn       LPUART1_IRQn
#define DEMO_LPUART_IRQHandler LPUART1_IRQHandler

/*! @brief Ring buffer size (Unit: Byte). */
#define DEMO_RING_BUFFER_SIZE 16

#include "fsl_lpuart.h"
#include "fsl_debug_console.h"

//#define SYSTICK_TIMER_USED
#define NEW_LOOKUPTABLE_PROCESS
//#define GLOBAL_MASK_DISABLE
//#define DI_ICON_TOGGLE
//#define PENDRIVE_USED
#define DOZER_P_VER


/*****internal use only not the actual source address****/
//#define ENGINE_ECU				0
//#define TRANSMISSION_ECU		1
//#define IOMODULE_ECU			2
//#define VMS			            3
//#define SENDER_CAN				4

#ifdef DOZER_P_VER
/**DM1 are generate internal itself no receiving from CAN**/
	#define ENGINE_ECU				1
	#define TRANSMISSION_ECU		2
	#define IOMODULE_ECU			3
	#define VMS			            0
	#define SENDER_CAN				4
#else
	#define ENGINE_ECU				0
	#define TRANSMISSION_ECU		2
	#define IOMODULE_ECU			3
	#define VMS			            1
	#define SENDER_CAN				4
#endif

/**********Actual Source Address ********/
#define ENGINE_SA				0x00
#define IO_MODULE_SA			0x02
#define TCM_SA					0x03
#define VMS_SA			        0xF2
#define SENDER_CAN_SA			0xE2
//#define APLMS_SA				0xFF
//#define ABS_ASR_SA				0x0B

#define OFFSET_0	0
#define OFFSET_1	OFFSET_0 + 17
#define OFFSET_2	OFFSET_1 + 17
#define OFFSET_3	OFFSET_2 + 17
#define OFFSET_4	OFFSET_3 + 17
#define OFFSET_5	OFFSET_4 + 17


#define VALUE_ROW                                               0x00
#define COUNT_ROW                                               0x01
#define FROM_CAN_SOURCE                                         0x01
#define ADC_CHANNEL                                             0x02
#define RESISTIVE_1                                             0x11
#define RESISTIVE_2                                             0x22
#define CURRENT_1                                               0x33
#define CURRENT_2                                               0x44
#define VOLTAGE                                                 0x55
#define ENGINE_CAN                                              0x66
#define TRANSMISSION_CAN                                        0x77
#define ERROR_STATUS_NORMAL                                     0x00
#define ERROR_STATUS_OPEN                                       0x11
#define ERROR_STATUS_HIGH                                       0x22
#define ERROR_STATUS_LOW                                        0x33
#define ERROR_STATUS_SHORT                                      0x44
#define NO_OF_DIGITAL_INPUT_OUTPUTS                             37
#define NO_OF_DIGITAL_PLUS_ANALOG_INPUT_OUTPUTS                 46
#define NO_BYTES_TO_SEND                                        343
#define ERROR_ACTIVE                                            0x55
#define NO_ERROR                                                0x00

#define A1_EOP                                                  0x00
#define A2_EOT                                                  0x01
#define A3_ECT                                                  0x02
#define A4_TOT                                                  0x03
#define A5_TOP                                                  0x04
#define A6_FL                                                   0x05
#define A13_BCAP1                                               0x06
#define A14_BCAP2                                               0x07
#define PWR_IN_IO                                               0x08
#define A16_ENG_RPM                                             0x09
#define A17_ROAD_SPD                                            0x0A
#define A18_HROT                                                A14_BCAP2   /* Assign BCAP2 for testing */
#define A19_AP                                                  A13_BCAP1   /* Assign BCAP1 for testing */
#define A20_SOT                                                 A4_TOT      /* Assign TOT for testing */

#define MAX22190_ADDR_FAULT1_REG    0x04
#define MAX22190_ADDR_WB_REG        0x00
#define MAX22190_ADDR_IN1_REG       0x06
#define MAX22190_ADDR_IN2_REG       0x08
#define MAX22190_ADDR_IN3_REG       0x0A
#define MAX22190_ADDR_IN4_REG       0x0C
#define MAX22190_ADDR_IN5_REG       0x0E
#define MAX22190_ADDR_IN6_REG       0x10
#define MAX22190_ADDR_IN7_REG       0x12
#define MAX22190_ADDR_IN8_REG       0x14
#define MAX22190_ADDR_INEN_REG      0x1A
#define MAX22190_ADDR_FAULT1EN_REG  0x24
#define MAX22190_ADDR_DATA_REG      0x02
#define MAX22190_ADDR_CONFIG        0x18// 00
#define MAX22190_ADDR_FAULT2        0x1C
#define MAX22190_ADDR_FAULT2EN      0x1E //00
#define MAX22190_ADDR_GPO           0x22 //00

#define AIN1_SELECTED      1
#define AIN2_SELECTED      2
#define AIN3_SELECTED      3
#define BATTERY_SELECTED   4

#define UIN 			1
#define MAKE 			2
#define MODEL 			3
#define SERIAL_NO 		4
#define UNIT_NO 		5
#define MODE			6
#define PASSWORD    	7
#define RAW_DATA_PTR	8
#define DATA_LOG_PTR	9
#define FAULT_DATA_PTR	10
#define KM_DISTANCE		11
#define FRAC_KM_DISTANCE 12
/*********user setting page related *********/
#define ON  0
#define OFF 1
#define SPEEDOMETER_SCREEN  1
#define TRANSMISSION_SCREEN 2
#define DIGITAL_IO_SCREEN   3
#define ANALOG_IO_SCREEN    4
#define ENGINE_RPM_SCREEN	5
#define IN_VAL_TIME 	250

#define DAY  			0
#define NIGHT 			1
#define AM              0
#define PM              1


#define MER_AM              1
#define MER_PM              2

#define PENDRIVE_NOT_DETECTED		0
#define PENDRIVE_DETECTED			1
#define DETECTING_PENDRIVE			2
#define PENDRIVE_DETACHED			3
#define DATA_UNAVAILABLE			4
#define DATA_CLEARED_FROM_MEMORY	5

#define IDLE		0
#define COPYING		1
#define COMPLETED	2

#define SAVING        1
#define DATA_SAVED    2
#define DATANOT_SAVED 3

#define ONE_FRAC_DIGIT   10
#define TWO_FRAC_DIGIT   100
#define THREE_FRAC_DIGIT 1000

#ifdef DOZER_P_VER
	#define DM1_SA 					4
	#define NO_OF_DM1_MESSAGES    	27
	#define NO_OF_INTERNAL_DM1_MSG	27 //26+1(sender CAN disconnected)
#else
	#define DM1_SA 					4
	#define NO_OF_DM1_MESSAGES    	64//63
	#define NO_OF_INTERNAL_DM1_MSG	17 //16+1(sender CAN disconnected)
#endif
#define ENGINE_FLY_WHEEL_TEETH  138 //as per dozer BD155 spec

#define EOP_MAX_RANGE  		10
#define ECT_MAX_RANGE  		120
#define ENG_RPM_MAX_RANGE 	3000
#define BATT_MAX_RANGE 		36
#define FUEL_MAX_RANGE		100
#define FIP_MAX_RANGE		100
#define TOP_MAX_RANGE		40
#define COT_MAX_RANGE		140
#define EOT_MAX_RANGE		140

#define ECT_MIN_RANGE		40
#define COT_MIN_RANGE		40
#define EOT_MIN_RANGE		40

#define SIX_MINUTE   			360

#ifdef ADC_CONFIG_10BIT
	#define OPEN_CIRCUIT_COUNTS		970
	#define SHORT_CIRCUIT_COUNTS    20
#else
	#ifdef DOZER_P_VER
		#define CH1_OPEN_CNTS		3791
		#define CH1_SHORT_CNTS    	265

		#define CH2_OPEN_CNTS		3791
		#define CH2_SHORT_CNTS    	400		//267

		#define CH3_OPEN_CNTS		3791
		#define CH3_SHORT_CNTS    	400		//267
	#else
		#define CH1_OPEN_CNTS		3791
		#define CH1_SHORT_CNTS    	265

		#define CH2_OPEN_CNTS		3791
		#define CH2_SHORT_CNTS    	400		//267

		#define CH3_OPEN_CNTS		3770
		#define CH3_SHORT_CNTS    	240
	#endif
#endif

#define CUR_4mA_CNTS		707
#define CUR_20mA_CNTS		2460

#define PRESSURE_SENSOR1_MIN_VAL	0
#define PRESSURE_SENSOR1_MAX_VAL	28

#define PRESSURE_SENSOR2_MIN_VAL	0
#define PRESSURE_SENSOR2_MAX_VAL	60

#define CURR_SENSOR_MIN_INPUT		4
#define CURR_SENSOR_MAX_INPUT		20

#define ERROR_ACTIVE		0x55
#define ERROR_INACTIVE		0x00

#define TEN_SEC		1000

//----------FRAM_memory--------//
#define PRIMARY_MEMORY        					01  //FRAM Memory
#define SECONDARY_MEMORY      					02  //WINBOND Memory

#define UIN_ADDR 								0x0A //10
#define MAKE_ADDR 								0x1A //26
#define MODEL_ADDR								0x2A //42
#define SERIAL_NO_ADDR							0x3A //58
#define UNIT_NO_ADDR							0x4A //74
#define MODE_ADDR								0x5A //90
#define PASSWORD_ADDR							0x5B //91
#define RAW_CAN_DATA_PTR_ADDR					0x60 //96
#define DATALOG_PTR_ADDR						0x64 //100
#define FAULTLOG_PTR_ADDR						0x68 //104
#define ODO_KM_ADDR								0x6C //108

//#define APLMS_MAXCAPACITY_ADDR					0x70 //112
//#define APLMS_CALCAPACITY_ADDR					0x72 //114
//#define APLMS_ZEROCALIBRATION_ADDR				0x74 //116
//#define APLMS_SPANCALIBRATION_ADDR				0x76 //118
//#define APLMS_REPORT_PTR_ADDR					0x78 //120
//#define APLMS_LOGNUM_ADDR						0x7A //122
#define ODO_FRAC_KM_ADDR						0x7B //123
//#define VEH_SPD_LMT_ADDR						0x7C //124
/*0x7D(125) to 0x95(149) Reserved*/
#define SCREEN_SPEEDO_ONOFF_ADDR 				0x96 //150
#define SCREEN_TRANS_ONOFF_ADDR 				0x97 //151
#define SCREEN_DIGI_IO_ONOFF_ADDR   			0x98 //152
#define SCREEN_ANALOG_IO_ONOFF_ADDR 			0x99 //153
#define SCREEN_ENG_RPM_ONOFF_ADDR 				0x9A //154

#define SCREEN_SPEEDO_HOME_ADDR 				0x9B //155
#define SCREEN_TRANS_HOME_ADDR 					0x9C //156
#define SCREEN_DIGI_IO_HOME_ADDR 				0x9D //157
#define SCREEN_ANALOG_IO_HOME_ADDR				0x9E //158
#define SCREEN_ENG_RPM_HOME_ADDR 				0x9F //159

/**0xA0//160 to 0xA5//165 bytes are used for future use**/

#define DAY_MODE_BRIGHTNESS_ADDR				0xA6 //166
#define NIGHT_MODE_BRIGHTNESS_ADDR  			0xA7 //167

/***********************28.11.2022***************************************/
#define DATA_LOG_CURRENT_PTR                	0xA8/*4 bytes i.e 0x168 to 0x171*/
#define ERROR_LOG_CURRENT_PTR               	0xAC/*4 bytes i.e 0x172 to 0x175*/

#define WINBOND_DATALOG_OVERFLOW_ADDR			0xB0/*176*/
#define WINBOND_ERRORLOG_OVERFLOW_ADDR			0xB1/*177*/

#define CHANGE_ENGINE_OIL_INTERVAL_ADDR			0xB2//178/*2 Bytes*/
#define CHANGE_AIRFILTERS_INTERVAL_ADDR			0xB4//180/*2 Bytes*/
#define CHANGE_HYDRAULIC_OIL_INTERVAL_ADDR		0xB6//182/*2 Bytes*/
#define SERVICE_ENGINE_INTERVAL_ADDR			0xB8//184/*2 Bytes*/
#define SERVICE_MACHINE_INTERVAL_ADDR			0xBA//186/*2 Bytes*/

#define ENGINE_HOUR_METER_ADDR					0xBC//188/*4 Bytes*/
#define DISPLAY_SEC_CNTR 						0xC0//192/*2 Bytes*/
#define DISPLAY_FRACTN_HRS						0xC2//194/*1 Byte*/
#define DISPLAY_ACTUAL_HRS						0xC3//195/*4 Bytes*/

#define ENGINE_SEC_CNTR        					0xC7//199/*2 Byte*/
#define ENGINE_FRACTN_HRS						0xC9//201/*1 Byte*/
#define ENGINE_ACTUAL_HRS						0xCA//202/*4 Bytes*/


#define SWWH_LOG_CURRENT_PTR               		0xCE/*4 bytes i.e 206 to 209*/
#define WINBOND_SWWHLOG_OVERFLOW_ADDR			0xD2/*1 byte 210*/

#define S1START_HH								0xD3/*1 byte 211 till 228*/
#define S1START_MM								0xD4/*1 byte 212*/
#define S1START_MER								0xD5/*1 byte 213*/
#define S1STOP_HH								0xD6/*1 byte 214*/
#define S1STOP_MM								0xD7/*1 byte 215*/
#define S1STOP_MER								0xD8/*1 byte 216*/

#define S2START_HH								0xD9/*1 byte 217*/
#define S2START_MM								0xDA/*1 byte 218*/
#define S2START_MER								0xDB/*1 byte 219*/
#define S2STOP_HH								0xDC/*1 byte 220*/
#define S2STOP_MM								0xDD/*1 byte 221*/
#define S2STOP_MER								0xDE/*1 byte 222*/

#define S3START_HH								0xDF/*1 byte 223*/
#define S3START_MM								0xE0/*1 byte 224*/
#define S3START_MER								0xE1/*1 byte 225*/
#define S3STOP_HH								0xE2/*1 byte 226*/
#define S3STOP_MM								0xE3/*1 byte 227*/
#define S3STOP_MER								0xE4/*1 byte 228*/

#define SH_WRK_HRS_IN_SEC						0xE5/*2 byte 229*/
#define WHRS_FRACTN_HRS							0xE7/*1 Byte 231*/
#define WHRS_ACTUAL_HRS							0xE8/*2 Byte 232*/
#define WHRS_SHIFT_NO							0xEA/*1 Byte 234*/

#define PREVIOUS_SHIFT1_TIME					0xEB/*3 Byte 235-DATE,MONTH,YEAR*/
#define PREVIOUS_SHIFT2_TIME					0xEE/*3 Byte 238-DATE,MONTH,YEAR*/
#define PREVIOUS_SHIFT3_TIME					0xF1/*3 Byte 241-DATE,MONTH,YEAR*/

#define ENG_FUEL_RATE							0xF4/*2 bytes 244*/
#define ADJ_ENG_HRS								0xF6/*4 bytes 246*/
#define ENGHRS_EN_DIS							0xFA/*1 bytes 250*/

/*DATA LOGGING FRAM*/
#define DATA_LOG_START_ADDRESS    		0x400 /*From 1k onwards i.e from 1024 bytes */
/*DL -->data log*/
#define DL_DATE_OFFSET                  DATA_LOG_START_ADDRESS+0/*1 bytes*/
#define DL_MONTH_OFFSET                 DATA_LOG_START_ADDRESS+1/*1 bytes*/
#define DL_YEAR_OFFSET                  DATA_LOG_START_ADDRESS+2/*1 bytes*/
#define DL_HOUR_OFFSET                  DATA_LOG_START_ADDRESS+3/*1 bytes*/
#define DL_MINUTE_OFFSET                DATA_LOG_START_ADDRESS+4/*1 bytes*/
#define DL_SECOND_OFFSET                DATA_LOG_START_ADDRESS+5/*1 bytes*/
#define DL_MERIDIAN_OFFSET              DATA_LOG_START_ADDRESS+6/*1 bytes*/

#ifdef DOZER_P_VER
	#define DL_ENGINE_RPM_OFFSET          	DATA_LOG_START_ADDRESS+7 /*2 bytes*/
	#define DL_COT_OFFSET                 	DATA_LOG_START_ADDRESS+9 /*2 bytes*/
	#define DL_TOP_OFFSET                 	DATA_LOG_START_ADDRESS+11/*2 bytes*/
	#define DL_ENGINE_HRS_OFFSET          	DATA_LOG_START_ADDRESS+13/*4 bytes*/
	#define DL_EOP_OFFSET              		DATA_LOG_START_ADDRESS+17/*2 bytes*/
	#define DL_BATTERY_OFFSET             	DATA_LOG_START_ADDRESS+19/*2 bytes*/
	#define DL_ECT_OFFSET            		DATA_LOG_START_ADDRESS+21/*2 bytes*/
	#define DL_EOT_OFFSET            		DATA_LOG_START_ADDRESS+23/*2 bytes*/
	#define DL_FUEL_PERCENTAGE_OFFSET     	DATA_LOG_START_ADDRESS+25/*2 bytes*/
#else
	#define DL_ENGINE_RPM_OFFSET            DATA_LOG_START_ADDRESS+7 /*2 bytes*/
	#define DL_EOP_OFFSET              		DATA_LOG_START_ADDRESS+9 /*2 bytes*/
	#define DL_EOT_OFFSET            		DATA_LOG_START_ADDRESS+11/*2 bytes*/
	#define DL_ECT_OFFSET            		DATA_LOG_START_ADDRESS+13/*2 bytes*/
	#define DL_ENGINE_HRS_OFFSET           	DATA_LOG_START_ADDRESS+15/*4 bytes*/
	#define DL_BATTERY_OFFSET               DATA_LOG_START_ADDRESS+19/*2 bytes*/
	#define DL_FIP_RACK_POS_OFFSET          DATA_LOG_START_ADDRESS+21/*2 bytes*/
	#define DL_FUEL_PERCENTAGE_OFFSET       DATA_LOG_START_ADDRESS+23/*2 bytes*/
	#define DL_COT_OFFSET                  	DATA_LOG_START_ADDRESS+25/*2 bytes*/
	#define DL_TOP_OFFSET                   DATA_LOG_START_ADDRESS+27/*2 bytes*/
	#define DL_HOT_OFFSET         			DATA_LOG_START_ADDRESS+29/*2 bytes*/
#endif
/*********DATA_LOG_FRMAE_LENGTH NOW 29 Bytes BUT DEFINED ERROR_LOG_FRMAE_LENGTH IS 32+32=64 BYTES
 * 64-31 = 33 Bytes are reserved for future use OR adding other parameter to frame
 */

/*ERROR LOGGING FRAM*/
#define ERROR_LOG_START_ADDRESS         	0x464  /*From 1124 Bytes i.e 1024+100 After 100 bytes*/
/*EL -->error log*/
#define EL_DATE_OFFSET                     	ERROR_LOG_START_ADDRESS+0/*1 bytes*/
#define EL_MONTH_OFFSET                    	ERROR_LOG_START_ADDRESS+1/*1 bytes*/
#define EL_YEAR_OFFSET                     	ERROR_LOG_START_ADDRESS+2/*1 bytes*/
#define EL_HOUR_OFFSET                     	ERROR_LOG_START_ADDRESS+3/*1 bytes*/
#define EL_MINUTE_OFFSET                   	ERROR_LOG_START_ADDRESS+4/*1 bytes*/
#define EL_SECOND_OFFSET                   	ERROR_LOG_START_ADDRESS+5/*1 bytes*/
#define EL_MERIDIAN_OFFSET                 	ERROR_LOG_START_ADDRESS+6/*1 bytes*/

#ifdef DOZER_P_VER
	#define EL_ENGINE_RPM_OFFSET          	ERROR_LOG_START_ADDRESS+7 /*2 bytes*/
	#define EL_COT_OFFSET                 	ERROR_LOG_START_ADDRESS+9 /*2 bytes*/
	#define EL_TOP_OFFSET                 	ERROR_LOG_START_ADDRESS+11/*2 bytes*/
	#define EL_ENGINE_HRS_OFFSET          	ERROR_LOG_START_ADDRESS+13/*4 bytes*/
	#define EL_EOP_OFFSET              		ERROR_LOG_START_ADDRESS+17/*2 bytes*/
	#define EL_BATTERY_OFFSET             	ERROR_LOG_START_ADDRESS+19/*2 bytes*/
	#define EL_ECT_OFFSET            		ERROR_LOG_START_ADDRESS+21/*2 bytes*/
	#define EL_EOT_OFFSET            		ERROR_LOG_START_ADDRESS+23/*2 bytes*/
	#define EL_FUEL_PERCENTAGE_OFFSET     	ERROR_LOG_START_ADDRESS+25/*2 bytes*/
#else
	#define EL_ENGINE_RPM_OFFSET            ERROR_LOG_START_ADDRESS+7 /*2 bytes*/
	#define EL_EOP_OFFSET              		ERROR_LOG_START_ADDRESS+9 /*2 bytes*/
	#define EL_EOT_OFFSET            		ERROR_LOG_START_ADDRESS+11/*2 bytes*/
	#define EL_ECT_OFFSET            		ERROR_LOG_START_ADDRESS+13/*2 bytes*/
	#define EL_ENGINE_HRS_OFFSET           	ERROR_LOG_START_ADDRESS+15/*4 bytes*/
	#define EL_BATTERY_OFFSET               ERROR_LOG_START_ADDRESS+19/*2 bytes*/
	#define EL_FIP_RACK_POS_OFFSET          ERROR_LOG_START_ADDRESS+21/*2 bytes*/
	#define EL_FUEL_PERCENTAGE_OFFSET       ERROR_LOG_START_ADDRESS+23/*2 bytes*/
	#define EL_COT_OFFSET                  	ERROR_LOG_START_ADDRESS+25/*2 bytes*/
	#define EL_TOP_OFFSET                   ERROR_LOG_START_ADDRESS+27/*2 bytes*/
	#define EL_HOT_OFFSET         			ERROR_LOG_START_ADDRESS+29/*2 bytes*/
#endif

#define EL_SOURCE_ADDRESS_OFFSET			ERROR_LOG_START_ADDRESS+31/*1 bytes*/
#define EL_PLUG_ID_OFFSET					ERROR_LOG_START_ADDRESS+32/*1 bytes*/
#define EL_SPN_OFFSET					    ERROR_LOG_START_ADDRESS+33/*3 bytes*/
#define EL_FMI_OFFSET					    ERROR_LOG_START_ADDRESS+36/*1 bytes*/
#define EL_OCCURANCE_COUNT_OFFSET			ERROR_LOG_START_ADDRESS+37/*1 bytes*/
#define EL_ERROR_STATUS_OFFSET				ERROR_LOG_START_ADDRESS+38/*1 bytes*/
#define EL_LAMP_STATUS_OFFSET				ERROR_LOG_START_ADDRESS+39/*1 bytes*/

/*********ERROR_LOG_FRMAE_LENGTH NOW 37 Bytes BUT DEFINED ERROR_LOG_FRMAE_LENGTH IS 32+32=64 BYTES
 * 64-40 = 24 Bytes are reserved for future use OR adding other parameters to frame
 */

/*SHIFTWISE WORKING HOURS LOGGING FRAM*/
#define SWWH_LOG_START_ADDRESS         	0x4C8  /*From 1224 Bytes i.e 1124+100 After 100 bytes*/

#define SHIFT_NO                  		SWWH_LOG_START_ADDRESS+0/*1 bytes*/
#define SHIFT_START_DD                  SWWH_LOG_START_ADDRESS+1/*1 bytes*/
#define SHIFT_START_MM                  SWWH_LOG_START_ADDRESS+2/*1 bytes*/
#define SHIFT_START_YY                  SWWH_LOG_START_ADDRESS+3/*1 bytes*/
#define SHIFT_START_HH                  SWWH_LOG_START_ADDRESS+4/*1 bytes*/
#define SHIFT_START_MIN                 SWWH_LOG_START_ADDRESS+5/*1 bytes*/
#define SHIFT_START_SS                  SWWH_LOG_START_ADDRESS+6/*1 bytes*/
#define SHIFT_START_MER                 SWWH_LOG_START_ADDRESS+7/*1 bytes*/

#define SHIFT_CLOSE_DD                  SWWH_LOG_START_ADDRESS+8/*1 bytes*/
#define SHIFT_CLOSE_MM                  SWWH_LOG_START_ADDRESS+9/*1 bytes*/
#define SHIFT_CLOSE_YY                  SWWH_LOG_START_ADDRESS+10/*1 bytes*/
#define SHIFT_CLOSE_HH                  SWWH_LOG_START_ADDRESS+11/*1 bytes*/
#define SHIFT_CLOSE_MIN                 SWWH_LOG_START_ADDRESS+12/*1 bytes*/
#define SHIFT_CLOSE_SS                  SWWH_LOG_START_ADDRESS+13/*1 bytes*/
#define SHIFT_CLOSE_MER                 SWWH_LOG_START_ADDRESS+14/*1 bytes*/

#define SHIFT_WORKING_HRS               SWWH_LOG_START_ADDRESS+15/*2 bytes*/

/*********SHIFTWISE WORKING HOURS LENGTH NOW 17 Bytes BUT DEFINED ERROR_LOG_FRMAE_LENGTH IS 32 BYTES
 * 32-17 = 15 Bytes are reserved for future use OR adding other parameters to frame
 */

/*DATA and ERROR LOGGING WINBOND*/
/*WINBOND IS 8MB*/
#define WINBOND_CHIP_ERASE_OPCODE1      0xC7
#define WINBOND_CHIP_ERASE_OPCODE2      0x60
#define WINBOND_4KB_ERASE_OPCODE        0x20
#define WINBOND_64KB_ERASE_OPCODE       0xD8

#define START_DATALOG_LOC_WINBOND       0x000000/*3MB FOR DATA_LOG*/
#define START_ERRORLOG_LOC_WINBOND      0x300000/*4MB FOR ERROR_LOG*/
#define START_SWWHLOG_LOC_WINBOND      	0x700000/*1MB FOR SWWH_LOG*/

//#define MAX_DATA_LOG                    65472 /* 65536-64=65472 LEAVE 64 FRAME
//													   * 65536 RECORDS--> 4MB/64 BYTES ->  65536 =  4194304 /64
//													   * No of Records = Total_memory_size_bytes/Max_datalog_frame_length_in_bytes**/
//#define DATA_LOG_LENGTH                 64    /*64 BYTES*/
//
//#define DL_NO_OF_64KB_BLOCK_ERASE		64

#define MAX_DATA_LOG                   49088  /* 49152-64=65472 LEAVE 64 FRAME
											   * 49152 RECORDS--> 3MB/64 BYTES ->  49152 =  31,45,728 /64
											   * No of Records = Total_memory_size_bytes/Max_datalog_frame_length_in_bytes
											   ***/
#define DATA_LOG_LENGTH                64    /*64 BYTES*/

#define DL_NO_OF_64KB_BLOCK_ERASE	   48    /*3MB/64KB = 48 i.e 31,45,728 / 64*1024 = 48 */





#define MAX_ERROR_LOG                   65472 /* 65536-64=65472 LEAVE 64 FRAME
											   * 65536 RECORDS--> 4MB/64 BYTES ->  65536 =  4194304 /64
											   * No of Records = Total_memory_size_bytes/Max_datalog_frame_length_in_bytes
											   ***/
#define ERROR_LOG_LENGTH                64    /*64 BYTES*/

#define EL_NO_OF_64KB_BLOCK_ERASE		64    /*For both data_logging and error_loggig because both are divided to 4MB.
												i.e 4MB = 4096kb = 64kb*64 = 64*1024*64 = 4194304 bytes*/






#define MAX_SWWH_LOG                   32736 /* 32768-32=32736 LEAVE 32 FRAME
											   * 32768 RECORDS--> 1MB/32 BYTES ->  32768 =  10,48,576/64
											   * No of Records = Total_memory_size_bytes/Max_datalog_frame_length_in_bytes
											   ***/
#define SWWH_LOG_LENGTH                32    /*32 BYTES*/

#define SWWH_NO_OF_64KB_BLOCK_ERASE	   16    /*1MB/64KB = 16 i.e 10,48,576 / 64*1024 = 16 */



#define DEMO_ENC_BASEADDR ENC1
#define ENCODER_THRESHOLD 2

#endif
