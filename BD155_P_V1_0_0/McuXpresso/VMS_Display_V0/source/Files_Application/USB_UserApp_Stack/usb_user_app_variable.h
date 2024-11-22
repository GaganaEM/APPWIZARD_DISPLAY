/*
 * usb_user_app_var.h
 *
 *  Created on: 19-Oct-2021
 *      Author: admin
 */

#ifndef FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_VAR_H_
#define FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_VAR_H_

#include <stdint.h>
#include <stdbool.h>
#include "usb_user_app_struct_union.h"

typedef unsigned int	UINT;	/* int must be 16-bit or 32-bit */
typedef unsigned char	BYTE;	/* char must be 8-bit */

/*
uint8_t fuel_level_sensor_open_str[] 				= {"Fuel Level Sensor Open Circuit"};
uint8_t fuel_level_level_str[]		 				= {"Fuel Level is low"};
uint8_t engine_oil_press_sensor_openshort_str[] 	= {"Engine Oil Pressure Sensor is Open/short Circuit"};
uint8_t engine_oil_press_low_str[]					= {"Engine Oil pressure is low"};
uint8_t air_filter_blocked_str[]					= {"Air Filter Blocked"};
uint8_t engine_coolant_temp_sen_open_str[] 			= {"Engine coolant temperature sensor open circuit"};
uint8_t engine_coolant_temp_sen_short_str[] 		= {"Engine coolant temperature sensor short circuit"};
uint8_t engine_coolant_temp_high_str[]				= {"Engine coolant temperature is high"};
uint8_t hydraulic_ret_bot_sen_opn_str[]				= {"Hydraulic Retarder Brake Oil Temperature sensor open circuit"};
uint8_t hydraulic_ret_oil_temp_sen_short_str[]		= {"Hydraulic Retarder Oil Temperature Sensor short circuit"};
uint8_t hydraulic_ret_brake_oil_temp_high_str[]		= {"Hydraulic Retarder Oil Temperature High"};
uint8_t transmission_oil_pres_sen_openshort_str[] 	= {"Transmission Oil Pressure Sensor open/Short Circuit"};
uint8_t transmission_oil_pressure_low_str[]		 	= {"Transmission Oil Pressure Low"};
uint8_t engine_oil_Temp_sensor_open_str[]		 	= {"Engine Oil Temperature Sensor Open circuit"};
uint8_t engine_oil_Temp_sensor_short_str[]		 	= {"Engine Oil Temperature Sensor short circuit"};
uint8_t engine_oil_temp_high_str[]				 	= {"Engine Oil Temperature High"};
uint8_t engine_over_speed_str[]					 	= {"Engine Overspeed"};
uint8_t engine_speed_sensor_openshort_str[]		 	= {"Engine Speed Sensor Open/Short Circuit"};
uint8_t transmission_oil_cooler_filter_clog_str[]	= {"Transmission Oil Cooler Filter Clog"};
uint8_t accumulator_pressure_low_str[]			 	= {"Accumulator Pressure Low"};
uint8_t Hydraulic_brake_pressure_low[]			 	= {"Hydraulic Brake Pressure Low"};
uint8_t Low_steering_lube_oil_pres[]			 	= {"Low Steering Lube Oil Pressure"};
uint8_t charge_fail_str[]						 	= {"Charge Fail"};
uint8_t Either_io_module_disconnected_older_io_module_str[] = {"Either IO Module Disconnected OR OLDER IO Module Hardware being used!!"};
uint8_t wrong_firmware_loaded_in_io_module[]		= {"Wrong Firmware Loaded IO Module"};
uint8_t Eng_oil_vol_shorted_to_low[] 				={"Engine oil pressure volatge is below normal or shorted to low"};
*/

#ifdef DOZER_P_VER
uint8_t Transmission_oil_temperature_is_above_normal[]= {"Transmission oil temperature is above normal."};
uint8_t Transmission_Oil_Pressure_is_Above_Normal	[]=	{"Transmission Oil Pressure is Above Normal."}   ;
uint8_t Transmission_Oil_Pressure_is_below_Normal	[]=	{"Transmission Oil Pressure is below Normal."}   ;
uint8_t Engine_oil_pressure_below_normal			[]=	{"Engine oil pressure below normal."}            ;
uint8_t Engine_is_over_speed						[]=	{"Engine is over speed."}                        ;
uint8_t Transmission_Oil_Filter_Clogged				[]=	{"Transmission Oil Filter Clogged."}             ;
uint8_t Low_engine_coolant_level					[]=	{"Low engine coolant level."}                    ;
uint8_t Electrical_Battery_Potential_out_of_Range	[]=	{"Electrical Battery Potential out of Range."}   ;
uint8_t Engine_water_temperature_above_normal		[]=	{"Engine water temperature above normal."}       ;
uint8_t Oil_temperature_above_normal				[]=	{"Oil temperature above normal."}                ;
uint8_t Fuel_level_is_low							[]=	{"Fuel level is low."}                           ;

uint8_t Eng_oil_filter_clgd							[]= {"Engine oil filter clogged."};
uint8_t Fuel_lvl_sensr_opn_circuit					[]= {"Fuel level sensor open circuit."};
uint8_t Eop_sensr_malfun							[]= {"Engine oil pressure sensor malfunction."};
uint8_t Eop_vltg_abv_nrml_or_shrtd_high				[]= {"Engine oil pressure voltage above normal or shoted to high."};
uint8_t Eop_vltg_blw_nrml_or_shrtd_low				[]= {"Engine oil pressure voltage below normal or shoted to low."};
uint8_t Ect_vltg_abv_nrml_or_shrtd_high				[]= {"Engine coolant temperature voltage above normal or shoted to high."};
uint8_t Ect_vltg_blw_nrml_or_shrtd_low				[]= {"Engine coolant temperature voltage below normal or shoted to low."};
uint8_t Eot_is_opn_circuit							[]= {"Engine oil temperature is open circuit."};
uint8_t Eot_is_shrt_circuit							[]= {"Engine oil temperature is short circuit."};
uint8_t Cot_is_opn_circuit							[]= {"Converter oil temperature is open circuit."};
uint8_t Cot_is_shrt_circuit							[]= {"Converter oil temperature is short circuit."};
uint8_t Top_sensr_malfun							[]= {"Transmission oil pressure sensor malfunction."};
uint8_t Top_vltg_abv_nrml_or_shrtd_high				[]= {"Transmission oil pressure voltage above normal or shorted to high."};
uint8_t Top_vltg_blw_nrml_or_shrtd_low				[]= {"Transmission oil pressure voltage below normal or shorted to low."};
uint8_t SenderCAN_is_disconnected					[]= {"SenderCAN is disconnected."};
#else
uint8_t ErrPickUp1			[]= {"ErrPickUp1"};
uint8_t ErrPickUp2			[]= {"ErrPickUp2"};
uint8_t ErrOverSpeed		[]= {"ErrOverSpeed"};
uint8_t ErrSetp1Ext			[]=	{"ErrSetp1Ext"};
uint8_t ErrSetp2Ext			[]=	{"ErrSetp2Ext"};
uint8_t ErrBoostPressure	[]=	{"ErrBoostPressure"};
uint8_t ErrOilPressure		[]=	{"ErrOilPressure"};
uint8_t ErrAmbientPressure	[]=	{"ErrAmbientPressure"};
uint8_t ErrCoolantTemp		[]=	{"ErrCoolantTemp"};
uint8_t ErrOilTemp			[]=	{"ErrOilTemp"};
uint8_t ErrAlternator		[]=	{"ErrAlternator"};
uint8_t ErrOilPressWarn		[]= {"ErrOilPressWarn"};
uint8_t ErrOilPressEcy		[]= {"ErrOilPressEcy"};
uint8_t ErrCoolantTempWarn	[]= {"ErrCoolantTempWarn"};
uint8_t ErrOilTempWarn		[]= {"ErrOilTempWarn"};
uint8_t ErrCoolantTempEcy	[]= {"ErrCoolantTempEcy"};
uint8_t ErrAlternatorWarn	[]= {"ErrAlternatorWarn"};
uint8_t ErrFailedToStart	[]= {"ErrFailedToStart"};
uint8_t ErrPECommonAlarm	[]= {"ErrPECommonAlarm"};
uint8_t ErrFeedback			[]= {"ErrFeedback"};
uint8_t ErrActuatorDiff		[]= {"ErrActuatorDiff"};
uint8_t ErrFeedbackRef		[]= {"ErrFeedbackRef"};
uint8_t ErrFeedbackAdjust	[]= {"ErrFeedbackAdjust"};
uint8_t ErrAmplifier		[]= {"ErrAmplifier"};
uint8_t ErrSAEJ1939CanBus	[]= {"ErrSAEJ1939CanBus"};
uint8_t ErrSAEJ1939Comm 	[]= {"ErrSAEJ1939Comm"};
uint8_t ErrHZMCanBus		[]= {"ErrHZMCanBus"};
uint8_t ErrHZMCanComm		[]= {"ErrHZMCanComm"};
uint8_t ErrPEFatalError		[]= {"ErrPEFatalError"};
uint8_t ErrParamStore		[]= {"ErrParamStore"};
uint8_t ErrProgramTest		[]= {"ErrProgramTest"};
uint8_t ErrRAMTest			[]= {"ErrRAMTest"};
uint8_t ErrDigitalOut		[]= {"ErrDigitalOut"};
uint8_t ErrPowerSupply		[]= {"ErrPowerSupply"};
uint8_t ErrSupply_7_5V		[]= {"ErrSupply7.5V"};
uint8_t ErrPowerSupplyEDCFb	[]= {"ErrPowerSupplyEDCFb"};
uint8_t Err5VSensorSupply1	[]= {"Err5VSensorSupply1"};
uint8_t Err5VSensorSupply2	[]= {"Err5VSensorSupply2"};
uint8_t Err5VSensorSupply3	[]= {"Err5VSensorSupply3"};
uint8_t Err5VSensorSupply4	[]= {"Err5VSensorSupply4"};
uint8_t ErrInternTemp1 		[]= {"ErrInternTemp1"};
uint8_t ErrInternTemp2		[]= {"ErrInternTemp2"};
uint8_t ErrData				[]= {"ErrData"};
uint8_t ErrConfiguration	[]= {"ErrConfiguration"};
uint8_t ErrStack 			[]= {"ErrStack"};
uint8_t ErrIntern 			[]= {"ErrIntern"};


uint8_t Fuel_level_is_low	[]= {"Fuel level is Low"};
uint8_t Fuel_lvl_sensr_opn	[]= {"Fuel level sensor is Open"};
uint8_t top_low				[]= {"Transmission oil pressure is low"};
uint8_t top_high			[]=	{"Transmission oil pressure is high"};
uint8_t top_shorted_low		[]=	{"Transmission oil pressure sensor Input is below normal or shorted to low"};
uint8_t top_shorted_high	[]=	{"Transmission oil pressure sensor Input  is above normal or shorted to high"};
uint8_t cot_high			[]=	{"Converter oil temperature is high"};
uint8_t cot_opn_cir			[]=	{"Converter Oil Temperature Sensor Open Circuit"};
uint8_t cot_shrt_cir		[]=	{"Converter Oil Temperature Sensor Short Circuit"};
uint8_t rad_wtr_lvl_low		[]=	{"Radiator water level is low"};
uint8_t Prk_brk_on			[]=	{"Parking brake is ON"};
uint8_t eng_oil_fil_clog	[]= {"Engine oil filter is clogged"};
uint8_t air_fil_clog		[]= {"Air Filter Clogged"};
uint8_t hot_opn_cir			[]= {"Hydraulic  Oil Temperature Sensor Open Circuit"};
uint8_t hot_shrt_cir		[]= {"Hydraulic Oil Temperature Sensor Short Circuit"};
uint8_t hot_low				[]= {"Hydraulic Oil Level Low"};

uint8_t SenderCAN_is_disconnected	[]= {"SenderCAN is disconnected."};
#endif



uint8_t raw_candata[] = {"RawCANdata_"};
uint8_t minmax_datalog[] = {"MinMax_log_"};
uint8_t fault_log[] = {"Fault_dmlog_"};
uint8_t csv[] = {".csv"};
uint8_t new_line_str[]	= {"\n"};
uint8_t can_data[8] = {0x12,0x34,0xa0,0x0b,0xc,0xd,0xe,0xf};

uint8_t filepath[7] = {0};
uint8_t usb_filename[33] = {0};
uint8_t date_time_str[13] = {0};

uint8_t date   = 0x13;
uint8_t month  = 0x0a;
uint8_t year   = 0x15;
uint8_t hour   = 0x0b;
uint8_t minute = 0x0a;
uint8_t sec    = 0x1e;

uint8_t num_val = 0;

uint8_t can_ascii_buff[16] = {0};
uint8_t conv_array[16] = {0};
uint8_t hex_char[8] = {0};
uint8_t ax_byte1=0,ax_byte2=0;

uint8_t gLOG_DATA_TYPE_APP = 0;

struct dmlog_frame1 test_frame1;
struct dmlog_frame2 test_frame2;

union _dmlog_frame dmlog_frame_u;

union tpbuffer_u CanaTransmitMsgBuffer1[256];
union tpbuffer_u CanaReceiveMsgBuffer1[256];

bool b_display_hour_flag = 0;

uint16_t minmax_byte_cntr = 0;


#endif /* FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_VAR_H_ */
