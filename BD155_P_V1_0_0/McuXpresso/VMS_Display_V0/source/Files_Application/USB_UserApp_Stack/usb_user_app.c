/*
 * usb_user_app.c
 *
 *  Created on: 19-Oct-2021
 *      Author: admin
 */

#ifndef FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_C_
#define FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_C_



#include <stdint.h>
#include <string.h>
#include "usb_user_app_macro.h"
#include "usb_user_app.h"
#include "usb_user_app_struct_union.h"
#include "usb_user_app_variable.h"
#include "usb_user_app_extern_variables.h"
//#include "../Files_Header/sourceExternVariable.h"

extern uint8_t ReadByteMemoryWinbond(uint32_t mem_address);
extern bool bStartRawFrameUsb;
extern void funcSdCardtest(void);
extern void funcCopySdCardRawCanDatafileToUSB(void);
//extern int write_to_usb;
uint32_t gi_FrameCount =0;
extern unsigned char file_close;
extern unsigned long filedatapt;
extern unsigned char close_file_test;

void read_rawcandata_frame_from_memory_log2_usb(uint32_t start_addr,uint16_t no_of_frame)
{
	uint32_t mem_addr = start_addr;
	uint16_t frame_num = 0;
	uint16_t byte_cntr = 0;
	uint32_t pgn = 0;
	uint8_t i = 0;
	uint8_t char_data = 0;
	uint32_t AddrAddTemp =0;
	uint8_t rawcan_data_bytes[RAWCANDATA_FRAME_SIZE] = {0};
	uint8_t raw_can_data_csv_header[] = {" PGN, D1, D2, D3, D4, D5, D6, D7, D8\n"};

//	filedatapt=0;

//	SDCardfuncBegin=1;
//	power_on_SD=1;



//	f_write(&file,raw_can_data_csv_header, sizeof(raw_can_data_csv_header),(UINT *)&resultSize);
//
//	for (frame_num = 0;frame_num<no_of_frame;frame_num++)
//	{
//		for(byte_cntr = 0;byte_cntr<RAWCANDATA_FRAME_SIZE;byte_cntr++)
//		{
//			//rawcan_data_bytes[byte_cntr] = ReadByteMemoryWinbond((AddrAddTemp+mem_addr)+byte_cntr);
//			rawcan_data_bytes[byte_cntr] = TempArray[frame_num][byte_cntr];
//		}
//
//		pgn = rawcan_data_bytes[0];
//		pgn <<=8;
//		pgn |= rawcan_data_bytes[1];
//		pgn <<=8;
//		pgn |= rawcan_data_bytes[2];
//		pgn <<=8;
//		pgn |= rawcan_data_bytes[3];
//
//		for(i =0;i<8;i++)
//		{
//			can_data[i] = rawcan_data_bytes[4+i];
//		}
//
//		hex_display(pgn);
//		f_write(&file,hex_char, sizeof(hex_char), (UINT *)&resultSize);
//		f_write(&file,",", 1, (UINT *)&resultSize);
//
//		hex_buff(can_data);
//		for(i=0;i<16;i++)
//		{
//			char_data = can_ascii_buff[i];
//			f_write(&file,&char_data, 1, (UINT *)&resultSize);
//			if(i%2!=0)
//			f_write(&file,",", 1, (UINT *)&resultSize);
//		}
//		f_write(&file,new_line_str, sizeof(new_line_str), (UINT *)&resultSize);
//		AddrAddTemp +=16;
//	}
//	//write_to_usb = 0;
//	bStartRawFrameUsb = 0;
//	gi_FrameCount = 0;
//	bStartRawFrameLog 	= 0;
//	gucRecTimeCount 	= 0;
//	guiRawLogCount		= 0;
//	gucRecordingStatus  = 0;
//	bStartRawFrameUsb 	= 0;
//	gucCopyStatus	  	= 2;
//	//guiLogFileSize		= 0;
//	gucRecTimeCount		= 30;
}


void read_failure_dmlog_frame_from_memory_log2_usb(uint32_t start_addr,uint16_t total_frame_received)
{
	uint16_t no_data_rcvd 	= 0;
	uint16_t dataframenum 	= 0;
	uint8_t	year			= 0;
	uint8_t month			= 0;
	uint8_t date			= 0;
	uint8_t hour			= 0;
	uint8_t minute			= 0;
	uint8_t second			= 0;
	uint8_t source_addr		= 0;
	uint16_t full_year 		= 0;

	uint8_t plugid 			= 0;
	uint8_t status 			= 0;
	uint32_t spn 			= 0;
	uint8_t fmi 			= 0;
	uint8_t occurence_count = 0;
	uint8_t lamp_status 	= 0;

	uint8_t i = 0;
	uint8_t file_write_buff[150] = {0};
	uint32_t temp_spn_fmi = 0;
	uint8_t buff_cntr = 0;
	uint8_t *p_sa_str;
	uint8_t status_str[10] = {0};
	uint8_t *pstatus;
	uint8_t *fault_description;
	uint16_t array_size = 0;
	uint16_t byte_cntr = 0;
	uint8_t dmlog_frame_bytes[DM_LOG_FRAME_SIZE] = {0};
	uint32_t mem_addr = start_addr;

	uint8_t csv_header[] = {" Year, Month, Day, Time, Source_Name, Plug_ID, Source_Address, Status, SPN, FMI, Occ_Count, Lamp_Status, Fault, Corrective_Action\n"};
	f_write(&file,csv_header, sizeof(csv_header), (UINT *)&resultSize); //csv_header

	while((no_data_rcvd * 2)<total_frame_received)
	{
		dataframenum = no_data_rcvd * 2;

		for(byte_cntr = 0;byte_cntr<DM_LOG_FRAME_SIZE;byte_cntr++)
		{
			//dmlog_frame_bytes[byte_cntr] = read_from_memory(mem_addr+byte_cntr);
		}

		year 			= dmlog_frame_bytes[0];
		month 			= dmlog_frame_bytes[1];
		date 			= dmlog_frame_bytes[2];
		hour 			= dmlog_frame_bytes[3];
		minute 			= dmlog_frame_bytes[4];
		second  		= dmlog_frame_bytes[5];
		source_addr 	= dmlog_frame_bytes[6];

		plugid 			= dmlog_frame_bytes[7];
		status 			= dmlog_frame_bytes[8];

		temp_spn_fmi	= dmlog_frame_bytes[9];
		temp_spn_fmi	= temp_spn_fmi << 8;
		temp_spn_fmi   |= dmlog_frame_bytes[10];
		temp_spn_fmi	= temp_spn_fmi << 16;
		temp_spn_fmi   |= dmlog_frame_bytes[11];
		spn				= temp_spn_fmi & (uint32_t )0xFFFFE0;
		fmi 			= temp_spn_fmi & (uint32_t ) 0x1F;

		occurence_count =  dmlog_frame_bytes[12];
		lamp_status 	=  dmlog_frame_bytes[13];

		write_value_to_usb(0x14,0); //year 20
		write_value_to_usb(year,",");
		write_value_to_usb(month,",");
		write_value_to_usb(date,",");
		write_value_to_usb(hour,":");
		write_value_to_usb(minute,":");
		write_value_to_usb(second,",");
		p_sa_str = source_addr_decode(source_addr);
		write_string_to_usb(p_sa_str,",");
		write_value_to_usb(plugid,",");
		write_value_to_usb(source_addr,",");

		if(status == 1)
		{
			memcpy(status_str,"Active",sizeof("Active"));
			write_string_to_usb(status_str,",");
		}
		else
		{
			memcpy(status_str,"Inactive",sizeof("Inactive"));
			write_string_to_usb(status_str,",");
		}

		write_value_to_usb(spn,",");
		write_value_to_usb(fmi,",");
		write_value_to_usb(occurence_count,",");
		write_value_to_usb(lamp_status,",");
		fault_description = spn_fmi_decode(spn,fmi);
		write_string_to_usb(fault_description,",");

		f_write(&file,new_line_str, sizeof(new_line_str), (UINT *)&resultSize);

		no_data_rcvd++;

	}
			//end of while
//	fatfsCode = f_close(&file);
}

void read_minmaxlog_frame_from_memory_log2_usb(uint32_t start_addr, uint16_t total_no_log_frame)
{

	uint8_t minmaxlog_csv_header0[] = {" Log_entry:"};
	uint8_t minmaxlog_csv_header1[] = {" Date, Time, Display_Hours_Run_Hrs, CoolantTemp_MinValue_Deg, CoolantTemp_MaxValue_Deg, CoolantTemp_CurValue_Deg, "};
	uint8_t minmaxlog_csv_header2[] = {" Engine_Oil_Pressure_MinValue_HighIdle_kPa, Engine_Oil_Pressure_MaxValue_HighIdle_kPa, Engine_Oil_Pressure_CurValue_HighIdle_kPa, "};
	uint8_t minmaxlog_csv_header3[] = {" Engine_Speed_MaxValue_RPM, Engine_Speed_AvgValue_RPM, Engine_Speed_CurValue_RPM,"};
	uint8_t minmaxlog_csv_header4[] = {" Transmission_Oil_Pressure_MaxValue_kPa,Transmission_Oil_Pressure_MinValue_kPa,Transmission_Oil_Pressure_CurValue_kPa,"};
	uint8_t minmaxlog_csv_header5[] = {" Transmission_Oil_Temp_MaxValue_kPa,Transmission_Oil_Temp_MinValue_kPa,Transmission_Oil_Temp_CurValue_kPa,"};
	uint8_t minmaxlog_csv_header6[] = {" Hydraulic_Retarder_Oil_Temp_MaxValue_kPa, Hydraulic_Retarder_Oil_Temp_MinValue_kPa,Hydraulic_Retarder_Oil_Temp_CurValue_kPa,"};
	uint8_t minmaxlog_csv_header7[] = {" Vehicle_Speed_MaxValue_RPM, Vehicle_Speed_AvgValue_RPM, Vehicle_Speed_CurValue_RPM,"};
	uint8_t minmaxlog_csv_header8[] = {" Engine_Oil_Temp_MaxValue_DEG, Engine_Oil_Temp_MinValue_DEG, Engine_Oil_Temp_CurValue_DEG,"};
	uint8_t minmaxlog_csv_header9[] = {" Air_Pressure_MaxValue_kPa, Air_Pressure_MinValue_kPa, Air_Pressure_CurValue_kPa,"};
	uint8_t minmaxlog_csv_header10[]= {" Steering_Oil_Temp_MaxValue_DEG, Steering_Oil_Temp_MinValue_DEG, Steering_Oil_Temp_CurValue_DEG,\n"};
	uint8_t	year			= 0;
	uint8_t month			= 0;
	uint8_t date			= 0;
	uint8_t hour			= 0;
	uint8_t minute			= 0;
	uint8_t second			= 0;
	uint32_t disp_hour_run	= 0;
	uint32_t coolant_minvalue_deg = 0;
	uint32_t coolant_maxvalue_deg = 0;
	uint32_t coolant_current_value_deg = 0;
	uint32_t engine_oil_press_minvalhighidle_kpa = 0;
	uint32_t engine_oil_press_maxvalhighidle_kpa = 0;
	uint32_t engine_oil_press_currentval_kpa = 0;
	uint32_t engine_speed_maxval_rpm = 0;
	uint32_t engine_speed_avgval_rpm = 0;
	uint32_t engine_speed_currentval_rpm = 0;
	uint32_t transmission_oil_press_maxval_kpa = 0;
	uint32_t transmission_oil_press_minval_kpa = 0;
	uint32_t transmission_oil_press_currentval_kpa = 0;
	uint32_t transmission_oil_temp_maxval_deg = 0;
	uint32_t transmission_oil_temp_minval_deg = 0;
	uint32_t transmission_oil_temp_current_val_deg = 0;
	uint32_t hydraulic_ret_oil_temp_maxval_deg = 0;
	uint32_t hydraulic_ret_oil_temp_minval_deg = 0;
	uint32_t hydraulic_ret_oil_temp_current_val_deg = 0;
	uint32_t vehicle_speed_maxval_kmph = 0;
	uint32_t vehicle_speed_currentval_kmph = 0;
	uint32_t engine_oil_temp_maxval_deg = 0;
	uint32_t engine_oil_temp_minval_deg = 0;
	uint32_t engine_oil_temp_curval_deg = 0;
	uint32_t air_press_min_val_kpa = 0;
	uint32_t air_press_max_val_kpa = 0;
	uint32_t air_press_current_val_kpa = 0;
	uint32_t steering_oil_temp_minval_deg = 0;
	uint32_t steering_oil_temp_maxval_deg = 0;
	uint32_t steering_oil_temp_currentval_deg = 0;
	uint32_t log_no = 0;
	uint32_t error = 0;
	uint8_t vehicle_model[10] ={0};
	uint8_t display_date_code_no[13] = {0};
	uint8_t io_mod_firm_ver[30] = {0};
	uint8_t sw_downloaded[10] = {0};
	uint8_t minmax_log_frame_bytes[MINMAX_LOG_FRAME_SIZE] = {0};
	uint16_t no_data_rcvd 	= 0;
	uint16_t dataframenum 	= 0;
	uint32_t temp_uint32 = 0;
	uint16_t fraction = 0;
	uint16_t mem_addr = start_addr;
	float temp_float = 0;
	uint16_t byte_cntr = 0;

	memcpy(vehicle_model,"BH100",sizeof("BH100"));
	memcpy(display_date_code_no,"181020210210",sizeof("181020210210"));
	memcpy(io_mod_firm_ver,"V1.0.0 A - BH100",sizeof("V1.0.0 A - BH100"));
	memcpy(sw_downloaded,"18/10/21",sizeof("18/10/21"));
//----- csv_info_header--------------------------------------
	write_string_to_usb("VIN:",",");
	USB_NEW_LINE;
	write_string_to_usb("MAKE:",",");
	USB_NEW_LINE;
	write_string_to_usb("MODEL:",0);
	write_string_to_usb(vehicle_model,",");
	USB_NEW_LINE;
	write_string_to_usb("SERIAL NUMBER:",0);
	USB_NEW_LINE;
	write_string_to_usb("UNIT NUMBER:",",");
	USB_NEW_LINE;
	write_string_to_usb("DISPLAY DATE CODE:",0);
	write_string_to_usb(display_date_code_no,",");
	USB_NEW_LINE;
	write_string_to_usb("IO MODULE FIRMWARE:",0);
	write_string_to_usb(io_mod_firm_ver,",");
	USB_NEW_LINE;
	write_string_to_usb("DATE DOWNLOADED(DD/MM/YYYY):",0);
	write_string_to_usb(sw_downloaded,",");
	USB_NEW_LINE;
//	write_string_to_usb(minmaxlog_csv_header0,0);
	write_string_to_usb(minmaxlog_csv_header1,0);
	write_string_to_usb(minmaxlog_csv_header2,0);
	write_string_to_usb(minmaxlog_csv_header3,0);
	write_string_to_usb(minmaxlog_csv_header4,0);
	write_string_to_usb(minmaxlog_csv_header5,0);
	write_string_to_usb(minmaxlog_csv_header6,0);
	write_string_to_usb(minmaxlog_csv_header7,0);
	write_string_to_usb(minmaxlog_csv_header8,0);
	write_string_to_usb(minmaxlog_csv_header9,0);
	write_string_to_usb(minmaxlog_csv_header10,0);
	write_string_to_usb("Log Entry:",0);
	write_value_to_usb(log_no,",");
	//write_value_to_usb(log_val,",");
	write_string_to_usb(new_line_str,0);
//------------------------------------------------------

	while((no_data_rcvd * 2)<total_no_log_frame)
	{
		dataframenum = no_data_rcvd * 2;

		for(byte_cntr = 0;byte_cntr<MINMAX_LOG_FRAME_SIZE;byte_cntr++)
		{
			//minmax_log_frame_bytes[byte_cntr] = read_from_memory(mem_addr+byte_cntr);
		}

		minmax_byte_cntr = 0;
		year = minmax_log_frame_bytes[minmax_byte_cntr++];
		month = minmax_log_frame_bytes[minmax_byte_cntr++];
		year = minmax_log_frame_bytes[minmax_byte_cntr++];

		hour = minmax_log_frame_bytes[minmax_byte_cntr++];
		minute = minmax_log_frame_bytes[minmax_byte_cntr++];
		second = minmax_log_frame_bytes[minmax_byte_cntr++];

		write_value_to_usb(year,"/");
		write_value_to_usb(month,"/");
		write_value_to_usb(year,",");

		write_value_to_usb(hour,":");
		write_value_to_usb(minute,":");
		write_value_to_usb(second,",");
		b_display_hour_flag = 1;
		decode_data(minmax_log_frame_bytes,4);	// display hour
		b_display_hour_flag = 0;
		decode_data(minmax_log_frame_bytes,3);	// coolant_minvalue_deg
		decode_data(minmax_log_frame_bytes,3);	// coolant_maxvalue_deg
		decode_data(minmax_log_frame_bytes,3);	// coolant_current_value_deg
		decode_data(minmax_log_frame_bytes,3);	// engine_oil_press_minvalhighidle_kpa
		decode_data(minmax_log_frame_bytes,3);	// engine_oil_press_maxvalhighidle_kpa
		decode_data(minmax_log_frame_bytes,3);	// engine_oil_press_currentval_kpa
		decode_data(minmax_log_frame_bytes,3);	// engine_speed_maxval_rpm
		decode_data(minmax_log_frame_bytes,3);	// engine_speed_avgval_rpm
		decode_data(minmax_log_frame_bytes,3);	// engine_speed_currentval_rpm
		decode_data(minmax_log_frame_bytes,3);	// transmission_oil_press_maxval_kpa
		decode_data(minmax_log_frame_bytes,3);	// transmission_oil_press_minval_kpa
		decode_data(minmax_log_frame_bytes,3);	// transmission_oil_press_currentval_kpa
		decode_data(minmax_log_frame_bytes,3);	// transmission_oil_temp_maxval_deg
		decode_data(minmax_log_frame_bytes,3);	// transmission_oil_temp_minval_deg
		decode_data(minmax_log_frame_bytes,3);	// transmission_oil_temp_current_val_deg
		decode_data(minmax_log_frame_bytes,3);	// hydraulic_ret_oil_temp_maxval_deg
		decode_data(minmax_log_frame_bytes,3);	// hydraulic_ret_oil_temp_minval_deg
		decode_data(minmax_log_frame_bytes,3);	// hydraulic_ret_oil_temp_current_val_deg
		decode_data(minmax_log_frame_bytes,3);	// vehicle_speed_maxval_kmph
		decode_data(minmax_log_frame_bytes,3);	// vehicle_speed_currentval_kmph
		decode_data(minmax_log_frame_bytes,3);	// engine_oil_temp_maxval_deg
		decode_data(minmax_log_frame_bytes,3);	// engine_oil_temp_minval_deg
		decode_data(minmax_log_frame_bytes,3);	// engine_oil_temp_curval_deg
		decode_data(minmax_log_frame_bytes,3);	// air_press_min_val_kpa
		decode_data(minmax_log_frame_bytes,3);	// air_press_max_val_kpa
		decode_data(minmax_log_frame_bytes,3);	// air_press_current_val_kpa
		decode_data(minmax_log_frame_bytes,3);	// steering_oil_temp_minval_deg
		decode_data(minmax_log_frame_bytes,3);	// steering_oil_temp_maxval_deg
		decode_data(minmax_log_frame_bytes,3);	// steering_oil_temp_currentval_deg

		f_write(&file,new_line_str, sizeof(new_line_str), (UINT *)&resultSize);
		no_data_rcvd++;

	}
}



void scale_parameter_send_usb(uint32_t value,uint16_t divisor)
{
	#define N_DECIMAL_POINTS_PRECISION (1000) // n = 3 Three decimal points.

	float temp_float = 0;
	uint32_t fraction  = 0;
	uint32_t ui32_temp = value;
	uint32_t integer_part = 0;

	temp_float = (float )ui32_temp/divisor;
	integer_part= (uint32_t)temp_float;
	fraction = ((uint32_t)(temp_float * N_DECIMAL_POINTS_PRECISION)% N_DECIMAL_POINTS_PRECISION);

	write_value_to_usb(integer_part,".");
	write_value_to_usb(fraction,",");
}

void decode_data(uint8_t *data,uint8_t no_of_bytes)
{

	uint32_t temp_uint32 = 0;

	switch(no_of_bytes)
	{
		case 1:
				temp_uint32 = data[minmax_byte_cntr++];
				scale_parameter_send_usb(temp_uint32,1);
				break;
		case 2:
				temp_uint32 = data[minmax_byte_cntr++];
				temp_uint32 = temp_uint32 <<8;
				temp_uint32 |= data[minmax_byte_cntr++];
				scale_parameter_send_usb(temp_uint32,10);
				break;
		case 3:
				temp_uint32 = data[minmax_byte_cntr++];
				temp_uint32 = temp_uint32 <<8;
				temp_uint32 |= data[minmax_byte_cntr++];
				temp_uint32 = temp_uint32 <<16;
				temp_uint32 |= data[minmax_byte_cntr++];
				scale_parameter_send_usb(temp_uint32,100);
				break;
		case 4:
				temp_uint32 = data[minmax_byte_cntr++];
				temp_uint32 = temp_uint32 <<8;
				temp_uint32 |= data[minmax_byte_cntr++];
				temp_uint32 = temp_uint32 <<16;
				temp_uint32 |= data[minmax_byte_cntr++];
				temp_uint32 = temp_uint32 <<24;
				temp_uint32 |= data[minmax_byte_cntr++];
				if(b_display_hour_flag!=0)
					scale_parameter_send_usb(temp_uint32,100);
				else
					scale_parameter_send_usb(temp_uint32,10);
				break;

		default: break;
	}
}

void load_date(void)
{
	date  =  strDateTime.Date;
	month =  strDateTime.Month;
	year  =  strDateTime.Year-2000;	//to get 1 byte year format
	hour  =  strDateTime.Hour;
	minute = strDateTime.Minute;
	sec =    strDateTime.Second;

	hex2ascii(date);
	date_time_str[0] = conv_array[1];
	date_time_str[1] = conv_array[0];
	hex2ascii(month);
	date_time_str[2] = conv_array[1];
	date_time_str[3] = conv_array[0];
	hex2ascii(year);
	date_time_str[4] = conv_array[1];
	date_time_str[5] = conv_array[0];
	hex2ascii(hour);
	date_time_str[6] = conv_array[1];
	date_time_str[7] = conv_array[0];
	hex2ascii(minute);
	date_time_str[8] = conv_array[1];
	date_time_str[9] = conv_array[0];
	hex2ascii(sec);
	date_time_str[10] = conv_array[1];
	date_time_str[11] = conv_array[0];
	date_time_str[12] = '\0';
}

void filename_creation(uint8_t *filename)
{
	memset(usb_filename,'\0',sizeof(usb_filename));
	load_date();
	strcpy(usb_filename,"1:/EM/");
	strcat(usb_filename,filename);
//	memcpy(temp_array,date_time_str,sizeof(date_time_str));
	strcat(usb_filename,date_time_str);
	strcat(usb_filename,csv);
}

uint8_t *pendrive_filename_creation(uint8_t *filename)
{
	memset(usb_filename,'\0',sizeof(usb_filename));
	load_date();
	strcpy(usb_filename,"1:/EM/");
	strcat(usb_filename,filename);
	strcat(usb_filename,date_time_str);
	strcat(usb_filename,csv);

	return (usb_filename);
}

void log_data_to_usb(void)
{
	gLOG_DATA_TYPE_APP = 1;

	if(bStartRawFrameUsb==1)
	{
//		close_file_test=1;
//		while(close_file_test==1)
//		{
			//funcSdCardtest();

//		}
	}

	switch(gLOG_DATA_TYPE_APP)
    {
    	case 1:
    			read_rawcandata_frame_from_memory_log2_usb(0x00000,guiLogFileSize);
    			break;
    	case 2:
    			load_test_data_dmlog();
    			read_failure_dmlog_frame_from_memory_log2_usb(0x10000,10);
    			break;
    	case 3 :
    			read_minmaxlog_frame_from_memory_log2_usb(0x10000,10);
    			break;

		default:
				break;
    }
}

void log_raw_can_data(void)
{
	uint8_t raw_can_data_csv_header[] = {" PGN, D1, D2, D3, D4, D5, D6, D7, D8\n"};
	uint8_t char_data = 0;
	uint8_t i=0,j=0;
	f_write(&file,raw_can_data_csv_header, sizeof(raw_can_data_csv_header), (UINT *)&resultSize);
//	for(j = 0;j<50;j++)
//	{
		hex_display(0x1CEFC402);
		f_write(&file,hex_char, sizeof(hex_char), (UINT *)&resultSize);
		f_write(&file,",", 1, (UINT *)&resultSize);
		hex_buff(can_data);
		for(i=0;i<16;i++)
		{
			char_data = can_ascii_buff[i];
			f_write(&file,&char_data, 1, (UINT *)&resultSize);
			if(i%2!=0)
			f_write(&file,",", 1, (UINT *)&resultSize);
		}
		f_write(&file,new_line_str, sizeof(new_line_str), (UINT *)&resultSize);
//	}

}


void load_test_data_dmlog(void)
{
	uint8_t dmlog[] = {"190601101101000200175354"};
	//memcpy(dmlog_frame_u.all,dmlog,sizeof(dmlog));
	test_frame1.year  		= 0x15;	//21
	test_frame1.month 		= 0x0A;	//10
	test_frame1.date   		= 0x0B;	//11
	test_frame1.hour  		= 0x0c;	//12
	test_frame1.minute		= 0x22;	//34
	test_frame1.second		= 0x38;	//56
	test_frame1.source_addr	= 0x01;


	test_frame2.plug_id 	= 0x59;
	test_frame2.status  	= 0x00;
	test_frame2.spn 		= 0x7F33B;//0x7FFFF;//0xAF;
	test_frame2.fmi 		= 0xd;//0x1f;
	test_frame2.occur_count = 0x2;
	test_frame2.lamp_status = 0x6;

//	dmlog_frame_u.frame1.year  = 0x13;
//	dmlog_frame_u.frame1.month = 0x06;
//	dmlog_frame_u.frame1.day   = 0x01;
//	dmlog_frame_u.frame1.hour  = 0x10;
//	dmlog_frame_u.frame1.minute= 0x11;
//	dmlog_frame_u.frame1.second= 0x01;
//
//	dmlog_frame_u.frame2.plug_id = 0x0a;
//	dmlog_frame_u.frame2.status  = 0x00;
//	dmlog_frame_u.frame2.spn = 175;
//	dmlog_frame_u.frame2.fmi = 4;
//	dmlog_frame_u.frame2.occur_count = 2;
//	dmlog_frame_u.frame2.lamp_status = 6;



}

uint8_t *spn_fmi_decode(uint32_t llspn,uint8_t lcfmi)
{
	static uint8_t fault[100] = {0};

//	memset(fault,'\0',sizeof(fault));
#ifdef DOZER_P_VER
	/**1)SPN:177 FMI:16**
	 * Transmission Oil Temperature is above noraml
	 */
	if(llspn==177 && lcfmi==16)
	{
		memcpy(fault,Transmission_oil_temperature_is_above_normal,sizeof(Transmission_oil_temperature_is_above_normal));
	}
	/**2)SPN:127 FMI:16**
	 * Transmission Oil Pressure is above noraml
	 */
	else if(llspn==127 && lcfmi==16)
	{
		memcpy(fault,Transmission_Oil_Pressure_is_Above_Normal,sizeof(Transmission_Oil_Pressure_is_Above_Normal));
	}
	/**3)SPN:127 FMI:18**
	 * Transmission Oil Pressure is below noraml
	 */
	else if(llspn==127 && lcfmi==18)
	{
		memcpy(fault,Transmission_Oil_Pressure_is_below_Normal,sizeof(Transmission_Oil_Pressure_is_below_Normal));
	}
	/**4)SPN:100 FMI:18**
	 * Engine Oil Pressure is below noraml
	 */
	else if(llspn==100 && lcfmi==18)
	{
		memcpy(fault,Engine_oil_pressure_below_normal,sizeof(Engine_oil_pressure_below_normal));
	}
	/**5)SPN:190 FMI:16**
	 * Engine is Overspeed
	 */
	else if(llspn==190 && lcfmi==16)
	{
		memcpy(fault,Engine_is_over_speed,sizeof(Engine_is_over_speed));
	}
	/**6)SPN:3359 FMI:16**
	 * Transmission oil filter clogged
	 */
	else if(llspn==3359 && lcfmi==16)
	{
		memcpy(fault,Transmission_Oil_Filter_Clogged,sizeof(Transmission_Oil_Filter_Clogged));
	}
	/**7)SPN:111 FMI:18**
	 *Low Engine Coolant level
	 */
	else if(llspn==111 && lcfmi==18)
	{
		memcpy(fault,Low_engine_coolant_level,sizeof(Low_engine_coolant_level));
	}
	/**8)SPN:168 FMI:18**
	 * Electrical Battery Potential out of Range
	 */
	else if(llspn==168 && lcfmi==18)
	{
		memcpy(fault,Electrical_Battery_Potential_out_of_Range,sizeof(Electrical_Battery_Potential_out_of_Range));
	}
	/**9)SPN:110 FMI:16**
	 * Engine Water Temperature above noraml
	 */
	else if(llspn==110 && lcfmi==16)
	{
		memcpy(fault,Engine_water_temperature_above_normal,sizeof(Engine_water_temperature_above_normal));
	}
	/**10)SPN:175 FMI:16**
	 * Engine Oil Temperature above noraml
	 */
	else if(llspn==175 && lcfmi==16)
	{
		memcpy(fault,Oil_temperature_above_normal,sizeof(Oil_temperature_above_normal));
	}
	/**11)SPN:96 FMI:18**
	 * Fuel Level is Low
	 */
	else if(llspn==96 && lcfmi==18)
	{
		memcpy(fault,Fuel_level_is_low,sizeof(Fuel_level_is_low));
	}
	/**12)SPN:99 FMI:16**
	 * Engine oil filter clogged
	 */
	else if(llspn == 99 && lcfmi == 16)
	{
		memcpy(fault,Eng_oil_filter_clgd,sizeof(Eng_oil_filter_clgd));
	}
	/**13)SPN:96 FMI:3**
	 * Fuel Level sensor open circuit
	 */
	else if(llspn == 96 && lcfmi == 3)
	{
		memcpy(fault,Fuel_lvl_sensr_opn_circuit,sizeof(Fuel_lvl_sensr_opn_circuit));
	}
	/**14)SPN:100 FMI:2**
	 * Engine oil pressure sensor malfunction
	 */
	else if(llspn == 100 && lcfmi == 2)
	{
		memcpy(fault,Eop_sensr_malfun,sizeof(Eop_sensr_malfun));
	}
	/**15)SPN:100 FMI:3**
	 * Engine oil pressure voltage is above normal, or shorted to high
	 */
	else if(llspn == 100 && lcfmi == 3)
	{
		memcpy(fault,Eop_vltg_abv_nrml_or_shrtd_high,sizeof(Eop_vltg_abv_nrml_or_shrtd_high));
	}
	/**16)SPN:100 FMI:4**
	 * Engine oil pressure voltage is below normal, or shorted to low
	 */
	else if(llspn == 100 && lcfmi == 4)
	{
		memcpy(fault,Eop_vltg_blw_nrml_or_shrtd_low,sizeof(Eop_vltg_blw_nrml_or_shrtd_low));
	}
	/**17)SPN:110 FMI:3**
	 * Engine coolant temperature voltage is above normal, or shorted to high
	 */
	else if(llspn == 110 && lcfmi == 3)
	{
		memcpy(fault,Ect_vltg_abv_nrml_or_shrtd_high,sizeof(Ect_vltg_abv_nrml_or_shrtd_high));
	}
	/**18)SPN:110 FMI:4**
	 * Engine coolant temperature voltage is below normal, or shorted to low
	 */
	else if(llspn == 110 && lcfmi == 4)
	{
		memcpy(fault,Ect_vltg_blw_nrml_or_shrtd_low,sizeof(Ect_vltg_blw_nrml_or_shrtd_low));
	}
	/**19)SPN:175 FMI:3**
	 * Engine coolant temperature is open circuit
	 */
	else if(llspn == 175 && lcfmi == 3)
	{
		memcpy(fault,Eot_is_opn_circuit,sizeof(Eot_is_opn_circuit));
	}
	/**20)SPN:175 FMI:4**
	 * Engine coolant temperature is short circuit
	 */
	else if(llspn == 175 && lcfmi == 4)
	{
		memcpy(fault,Eot_is_shrt_circuit,sizeof(Eot_is_shrt_circuit));
	}
	/**21)SPN:177 FMI:3**
	 * Converter oil temperature is open circuit
	 */
	else if(llspn == 177 && lcfmi == 3)
	{
		memcpy(fault,Cot_is_opn_circuit,sizeof(Cot_is_opn_circuit));
	}
	/**22)SPN:177 FMI:4**
	 * Converter oil temperature is short circuit
	 */
	else if(llspn == 177 && lcfmi == 4)
	{
		memcpy(fault,Cot_is_shrt_circuit,sizeof(Cot_is_shrt_circuit));
	}
	/**23)SPN:127 FMI:2**
	 * Transmission oil pressure sensor malfunction
	 */
	else if(llspn == 127 && lcfmi == 2)
	{
		memcpy(fault,Top_sensr_malfun,sizeof(Top_sensr_malfun));
	}
	/**24)SPN:127 FMI:3**
	 * Transmission oil pressure voltage is above normal, or shorted to high
	 */
	else if(llspn == 127 && lcfmi == 3)
	{
		memcpy(fault,Top_vltg_abv_nrml_or_shrtd_high,sizeof(Top_vltg_abv_nrml_or_shrtd_high));
	}
	/**25)SPN:127 FMI:4**
	 * Transmission oil pressure voltage is below normal, or shorted to low
	 */
	else if(llspn == 127 && lcfmi == 4)
	{
		memcpy(fault,Top_vltg_blw_nrml_or_shrtd_low,sizeof(Top_vltg_blw_nrml_or_shrtd_low));
	}
	/**26)SPN:521001 FMI:3**
	 * SenderCAN Disconnected.
	 */
	else if(llspn == 521001 && lcfmi == 3)
	{
		memcpy(fault,SenderCAN_is_disconnected,sizeof(SenderCAN_is_disconnected));
	}
#else
	/**1)SPN:810 FMI:2**
	 * ErrPickUp1
	 */
	if(llspn==810 && lcfmi==2)
	{
		memcpy(fault,ErrPickUp1,sizeof(ErrPickUp1));
	}
	/**2)SPN:723 FMI:2**
	 * ErrPickUp2
	 */
	else if(llspn==723 && lcfmi==2)
	{
		memcpy(fault,ErrPickUp2,sizeof(ErrPickUp2));
	}
	/**3)SPN:190 FMI:31**
	 * ErrOverSpeed
	 */
	else if(llspn==190 && lcfmi==31)
	{
		memcpy(fault,ErrOverSpeed,sizeof(ErrOverSpeed));
	}
	/**4)SPN:91 FMI:31**
	 * ErrSetp1Ext
	 */
	else if(llspn==91 && lcfmi==31)
	{
		memcpy(fault,ErrSetp1Ext,sizeof(ErrSetp1Ext));
	}
	/**5)SPN:974 FMI:31**
	 * ErrSetp2Ext
	 */
	else if(llspn==974 && lcfmi==31)
	{
		memcpy(fault,ErrSetp2Ext,sizeof(ErrSetp2Ext));
	}
	/**6)SPN:102 FMI:2**
	 * ErrBoostPressure
	 */
	else if(llspn==102 && lcfmi==2)
	{
		memcpy(fault,ErrBoostPressure,sizeof(ErrBoostPressure));
	}
	/**7)SPN:100 FMI:2**
	 *ErrOilPressure
	 */
	else if(llspn==100 && lcfmi==2)
	{
		memcpy(fault,ErrOilPressure,sizeof(ErrOilPressure));
	}
	/**8)SPN:108 FMI:31**
	 * ErrAmbientPressure
	 */
	else if(llspn==108 && lcfmi==31)
	{
		memcpy(fault,ErrAmbientPressure,sizeof(ErrAmbientPressure));
	}
	/**9)SPN:110 FMI:2**
	 * ErrCoolantTemp
	 */
	else if(llspn==110 && lcfmi==2)
	{
		memcpy(fault,ErrCoolantTemp,sizeof(ErrCoolantTemp));
	}
	/**10)SPN:175 FMI:2**
	 * ErrOilTemp
	 */
	else if(llspn==175 && lcfmi==2)
	{
		memcpy(fault,ErrOilTemp,sizeof(ErrOilTemp));
	}
	/**11)SPN:167 FMI:31**
	 * ErrAlternator
	 */
	else if(llspn==167 && lcfmi==31)
	{
		memcpy(fault,ErrAlternator,sizeof(ErrAlternator));
	}
	/**12)SPN:100 FMI:17**
	 * ErrOilPressWarn
	 */
	else if(llspn == 100 && lcfmi == 17)
	{
		memcpy(fault,ErrOilPressWarn,sizeof(ErrOilPressWarn));
	}
	/**13)SPN:100 FMI:1**
	 * ErrOilPressEcy
	 */
	else if(llspn == 100 && lcfmi == 1)
	{
		memcpy(fault,ErrOilPressEcy,sizeof(ErrOilPressEcy));
	}
	/**14)SPN:110 FMI:15**
	 * ErrCoolantTempWarn
	 */
	else if(llspn == 110 && lcfmi == 15)
	{
		memcpy(fault,ErrCoolantTempWarn,sizeof(ErrCoolantTempWarn));
	}
	/**15)SPN:175 FMI:15**
	 * ErrOilTempWarn
	 */
	else if(llspn == 175 && lcfmi == 15)
	{
		memcpy(fault,ErrOilTempWarn,sizeof(ErrOilTempWarn));
	}
	/**16)SPN:110 FMI:0**
	 * ErrCoolantTempEcy
	 */
	else if(llspn == 110 && lcfmi == 0)
	{
		memcpy(fault,ErrCoolantTempEcy,sizeof(ErrCoolantTempEcy));
	}
	/**17)SPN:167 FMI:31**
	 * ErrAlternatorWarn
	 */
	else if(llspn == 167 && lcfmi == 31)
	{
		memcpy(fault,ErrAlternatorWarn,sizeof(ErrAlternatorWarn));
	}
	/**18)SPN:4002 FMI:31**
	 * ErrFailedToStart
	 */
	else if(llspn == 4002 && lcfmi == 31)
	{
		memcpy(fault,ErrFailedToStart,sizeof(ErrFailedToStart));
	}
	/**19)SPN:3058 FMI:31**
	 * ErrPECommonAlarm
	 */
	else if(llspn == 3058 && lcfmi == 31)
	{
		memcpy(fault,ErrPECommonAlarm,sizeof(ErrPECommonAlarm));
	}
	/**20)SPN:1210 FMI:31**
	 * ErrFeedback
	 */
	else if(llspn == 1210 && lcfmi == 31)
	{
		memcpy(fault,ErrFeedback,sizeof(ErrFeedback));
	}
	/**21)SPN:638 FMI:31**
	 * ErrActuatorDiff
	 */
	else if(llspn == 638 && lcfmi == 31)
	{
		memcpy(fault,ErrActuatorDiff,sizeof(ErrActuatorDiff));
	}
	/**22)SPN:1210 FMI:31**
	 * ErrFeedbackRef
	 */
	else if(llspn == 1210 && lcfmi == 31)
	{
		memcpy(fault,ErrFeedbackRef,sizeof(ErrFeedbackRef));
	}
	/**23)SPN:1210 FMI:31**
	 * ErrFeedbackAdjust
	 */
	else if(llspn == 1210 && lcfmi == 31)
	{
		memcpy(fault,ErrFeedbackAdjust,sizeof(ErrFeedbackAdjust));
	}
	/**24)SPN:638 FMI:31**
	 * ErrAmplifier
	 */
	else if(llspn == 638 && lcfmi == 31)
	{
		memcpy(fault,ErrAmplifier,sizeof(ErrAmplifier));
	}
	/**25)SPN:639 FMI:31**
	 * ErrSAEJ1939CanBus
	 */
	else if(llspn == 639 && lcfmi == 31)
	{
		memcpy(fault,ErrSAEJ1939CanBus,sizeof(ErrSAEJ1939CanBus));
	}
	/**26)SPN:639 FMI:31**
	 * ErrSAEJ1939Comm
	 */
	else if(llspn == 639 && lcfmi == 31)
	{
		memcpy(fault,ErrSAEJ1939Comm,sizeof(ErrSAEJ1939Comm));
	}
	/**27)SPN:3058 FMI:31**
	 * ErrHZMCanBus
	 */
	else if(llspn == 3058 && lcfmi == 31)
	{
		memcpy(fault,ErrHZMCanBus,sizeof(ErrHZMCanBus));
	}
	/**28)SPN:3058 FMI:31**
	 * ErrHZMCanComm
	 */
	else if(llspn == 3058 && lcfmi == 31)
	{
		memcpy(fault,ErrHZMCanComm,sizeof(ErrHZMCanComm));
	}
	/**29)SPN:3058 FMI:31**
	 * ErrPEFatalError
	 */
	else if(llspn == 3058 && lcfmi == 31)
	{
		memcpy(fault,ErrPEFatalError,sizeof(ErrPEFatalError));
	}
	/**30)SPN:630 FMI:31**
	 * ErrParamStore
	 */
	else if(llspn == 630 && lcfmi == 31)
	{
		memcpy(fault,ErrParamStore,sizeof(ErrParamStore));
	}
	/**31)SPN:628 FMI:31**
	 * ErrProgramTest
	 */
	else if(llspn == 628 && lcfmi == 31)
	{
		memcpy(fault,ErrProgramTest,sizeof(ErrProgramTest));
	}
	/**32)SPN:629 FMI:31**
	 * ErrRAMTest
	 */
	else if(llspn == 629 && lcfmi == 31)
	{
		memcpy(fault,ErrRAMTest,sizeof(ErrRAMTest));
	}
	/**33)SPN:924 FMI:31**
	 * ErrDigitalOut
	 */
	else if(llspn == 924 && lcfmi == 31)
	{
		memcpy(fault,ErrDigitalOut,sizeof(ErrDigitalOut));
	}
	/**34)SPN:3597 FMI:31**
	 * ErrPowerSupply
	 */
	else if(llspn == 3597 && lcfmi == 31)
	{
		memcpy(fault,ErrPowerSupply,sizeof(ErrPowerSupply));
	}
	/**35)SPN:3599 FMI:31**
	 * ErrSupply7.5V
	 */
	else if(llspn == 3599 && lcfmi == 31)
	{
		memcpy(fault,ErrSupply_7_5V,sizeof(ErrSupply_7_5V));
	}
	/**36)SPN:3598 FMI:31**
	 * ErrPowerSupplyEDCFb
	 */
	else if(llspn == 3598 && lcfmi == 31)
	{
		memcpy(fault,ErrPowerSupplyEDCFb,sizeof(ErrPowerSupplyEDCFb));
	}
	/**37)SPN:3509 FMI:31**
	 * Err5VSensorSupply1
	 */
	else if(llspn == 3509 && lcfmi == 31)
	{
		memcpy(fault,Err5VSensorSupply1,sizeof(Err5VSensorSupply1));
	}
	/**38)SPN:3510 FMI:31**
	 * Err5VSensorSupply2
	 */
	else if(llspn == 3510 && lcfmi == 31)
	{
		memcpy(fault,Err5VSensorSupply2,sizeof(Err5VSensorSupply2));
	}
	/**39)SPN:3511 FMI:31**
	 * Err5VSensorSupply3
	 */
	else if(llspn == 3511 && lcfmi == 31)
	{
		memcpy(fault,Err5VSensorSupply3,sizeof(Err5VSensorSupply3));
	}
	/**40)SPN:3512 FMI:31**
	 * Err5VSensorSupply4
	 */
	else if(llspn == 3512 && lcfmi == 31)
	{
		memcpy(fault,Err5VSensorSupply4,sizeof(Err5VSensorSupply4));
	}
	/**41)SPN:1136 FMI:31**
	 * ErrInternTemp1
	 */
	else if(llspn == 1136 && lcfmi == 31)
	{
		memcpy(fault,ErrInternTemp1,sizeof(ErrInternTemp1));
	}
	/**42)SPN:1136 FMI:31**
	 * ErrInternTemp2
	 */
	else if(llspn == 1136 && lcfmi == 31)
	{
		memcpy(fault,ErrInternTemp2,sizeof(ErrInternTemp2));
	}
	/**43)SPN:628 FMI:31**
	 * ErrData
	 */
	else if(llspn == 628 && lcfmi == 31)
	{
		memcpy(fault,ErrData,sizeof(ErrData));
	}
	/**44)SPN:501 FMI:31**
	 * ErrConfiguration
	 */
	else if(llspn == 501 && lcfmi == 31)
	{
		memcpy(fault,ErrConfiguration,sizeof(ErrConfiguration));
	}
	/**45)SPN:628 FMI:31**
	 * ErrStack
	 */
	else if(llspn == 628 && lcfmi == 31)
	{
		memcpy(fault,ErrStack,sizeof(ErrStack));
	}
	/**46)SPN:629 FMI:31**
	 * ErrIntern
	 */
	else if(llspn == 629 && lcfmi == 31)
	{
		memcpy(fault,ErrIntern,sizeof(ErrIntern));
	}
	/**47)SPN:96 FMI:18**
	 * Fuel level is Low
	 */
	else if(llspn == 96 && lcfmi == 18)
	{
		memcpy(fault,Fuel_level_is_low,sizeof(Fuel_level_is_low));
	}
	/**48)SPN:96 FMI:3**
	 * Fuel level sensor is Open
	 */
	else if(llspn == 96 && lcfmi == 3)
	{
		memcpy(fault,Fuel_lvl_sensr_opn,sizeof(Fuel_lvl_sensr_opn));
	}
	/**49)SPN:127 FMI:18**
	 * Transmission oil pressure is low
	 */
	else if(llspn == 127 && lcfmi == 18)
	{
		memcpy(fault,top_low,sizeof(top_low));
	}
	/**50)SPN:127 FMI:16**
	 * Transmission oil pressure is high
	 */
	else if(llspn == 127 && lcfmi == 16)
	{
		memcpy(fault,top_high,sizeof(top_high));
	}
	/**51)SPN:127 FMI:4**
	 * Transmission oil pressure sensor Input is below normal, or shorted to low
	 */
	else if(llspn == 127 && lcfmi == 4)
	{
		memcpy(fault,top_shorted_low,sizeof(top_shorted_low));
	}
	/**52)SPN:127 FMI:3**
	 * Transmission oil pressure sensor Input  is above normal, or shorted to high
	 */
	else if(llspn == 127 && lcfmi == 3)
	{
		memcpy(fault,top_shorted_high,sizeof(top_shorted_high));
	}
	/**53)SPN:3823 FMI:16**
	 * Converter oil temperature is high
	 */
	else if(llspn == 3823 && lcfmi == 16)
	{
		memcpy(fault,cot_high,sizeof(cot_high));
	}
	/**54)SPN:3823 FMI:3**
	 * Converter Oil Temperature Sensor Open Circuit
	 */
	else if(llspn == 3823 && lcfmi == 3)
	{
		memcpy(fault,cot_opn_cir,sizeof(cot_opn_cir));
	}
	/**55)SPN:3823 FMI:4**
	 * Converter Oil Temperature Sensor Short Circuit
	 */
	else if(llspn == 3823 && lcfmi == 4)
	{
		memcpy(fault,cot_shrt_cir,sizeof(cot_shrt_cir));
	}
	/**56)SPN:111 FMI:18**
	 * Radiator water level is low
	 */
	else if(llspn == 111 && lcfmi == 18)
	{
		memcpy(fault,rad_wtr_lvl_low,sizeof(rad_wtr_lvl_low));
	}
	/**57)SPN:70 FMI:16**
	 * Parking brake is ON
	 */
	else if(llspn == 70 && lcfmi == 16)
	{
		memcpy(fault,Prk_brk_on,sizeof(Prk_brk_on));
	}
	/**58)SPN:99 FMI:18**
	 * Engine oil filter is clogged
	 */
	else if(llspn == 99 && lcfmi == 18)
	{
		memcpy(fault,eng_oil_fil_clog,sizeof(eng_oil_fil_clog));
	}
	/**59)SPN:5086 FMI:18**
	 * Air Filter Clogged
	 */
	else if(llspn == 5086 && lcfmi == 18)
	{
		memcpy(fault,air_fil_clog,sizeof(air_fil_clog));
	}
	/**60)SPN:1638 FMI:3**
	 * Hydraulic  Oil Temperature Sensor Open Circuit
	 */
	else if(llspn == 1638 && lcfmi == 3)
	{
		memcpy(fault,hot_opn_cir,sizeof(hot_opn_cir));
	}
	/**61)SPN:1638 FMI:4**
	 * Hydraulic Oil Temperature Sensor Short Circuit
	 */
	else if(llspn == 1638 && lcfmi == 4)
	{
		memcpy(fault,hot_shrt_cir,sizeof(hot_shrt_cir));
	}
	/**62)SPN:2602 FMI:18**
	 * Hydraulic Oil Level Low
	 */
	else if(llspn == 2602 && lcfmi == 18)
	{
		memcpy(fault,hot_low,sizeof(hot_low));
	}

	/**63)SPN:521001 FMI:3**
	 * SenderCAN Disconnected.
	 */
	else if(llspn == 521001 && lcfmi == 3)
	{
		memcpy(fault,SenderCAN_is_disconnected,sizeof(SenderCAN_is_disconnected));
	}

#endif
/*
	switch(llspn)
	{
		case 96:
				switch(lcfmi)
				{
				case 3 : memcpy(fault,fuel_level_sensor_open_str,sizeof(fuel_level_sensor_open_str));
							break;
				case 18 : memcpy(fault,fuel_level_level_str,sizeof(fuel_level_level_str));
							break;
				}
				break;
		case 100:
					   switch(lcfmi)
						{
							case 3 : memcpy(fault,engine_oil_press_sensor_openshort_str,sizeof(engine_oil_press_sensor_openshort_str));
									 break;
							case 18 : memcpy(fault,engine_oil_press_low_str,sizeof(engine_oil_press_low_str));
									break;
							case 4 : memcpy(fault,Eng_oil_vol_shorted_to_low,sizeof(Eng_oil_vol_shorted_to_low));
									break;
						}
						break;
		case 107:
					   switch(lcfmi)
						{

						case 18 : memcpy(fault,air_filter_blocked_str,sizeof(air_filter_blocked_str));
									break;
						}
						break;
		case 110:
					   switch(lcfmi)
						{
						case 3 : memcpy(fault,engine_coolant_temp_sen_open_str,sizeof(engine_coolant_temp_sen_open_str));
									break;
						case 4 : memcpy(fault,engine_coolant_temp_sen_short_str,sizeof(engine_coolant_temp_sen_short_str));
									break;
						case 16 : memcpy(fault,engine_coolant_temp_high_str,sizeof(engine_coolant_temp_high_str));
									break;
						}
						break;
		case 120:
					   switch(lcfmi)
						{
						case 3 : memcpy(fault,hydraulic_ret_bot_sen_opn_str,sizeof(hydraulic_ret_bot_sen_opn_str));
									break;
						case 4 : memcpy(fault,hydraulic_ret_oil_temp_sen_short_str,sizeof(hydraulic_ret_oil_temp_sen_short_str));
									break;
						case 16 : memcpy(fault,hydraulic_ret_brake_oil_temp_high_str,sizeof(hydraulic_ret_brake_oil_temp_high_str));
									break;
						}
						break;
	   case 127:
						   switch(lcfmi)
							{
							case 3 : memcpy(fault,transmission_oil_pres_sen_openshort_str,sizeof(transmission_oil_pres_sen_openshort_str));
										break;
							case 18 : memcpy(fault,transmission_oil_pressure_low_str,sizeof(transmission_oil_pressure_low_str));
										break;
							}
							break;
		case 175:
					   switch(lcfmi)
						{
						case 3 : memcpy(fault,engine_oil_Temp_sensor_open_str,sizeof(engine_oil_Temp_sensor_open_str));
									break;
						case 4 : memcpy(fault,engine_oil_Temp_sensor_short_str,sizeof(engine_oil_Temp_sensor_short_str));
									break;
						case 16 : memcpy(fault,engine_oil_temp_high_str,sizeof(engine_oil_temp_high_str));
									break;
						}
						break;
		case 702:
					   switch(lcfmi)
						{
						case 16 : memcpy(fault,transmission_oil_cooler_filter_clog_str,sizeof(transmission_oil_cooler_filter_clog_str));
									break;
						}
						break;
		case 2584:
					   switch(lcfmi)
						{
						case 18 : memcpy(fault,accumulator_pressure_low_str,sizeof(accumulator_pressure_low_str));
									break;
						}
						break;
		case 2585:
					   switch(lcfmi)
						{
						case 18 : memcpy(fault,Hydraulic_brake_pressure_low,sizeof(Hydraulic_brake_pressure_low));
									break;
						}
						break;
	   case 2614:
				   switch(lcfmi)
					{
					case 16 : memcpy(fault,Low_steering_lube_oil_pres,sizeof(Low_steering_lube_oil_pres));
								break;
					}
					break;
	   case 3353:
				   switch(lcfmi)
					{
					case 18 : memcpy(fault,charge_fail_str,sizeof(charge_fail_str));
								break;
					}
					break;
	   case 521019:
				   switch(lcfmi)
					{
						case 3 : memcpy(fault,Either_io_module_disconnected_older_io_module_str,sizeof(Either_io_module_disconnected_older_io_module_str));
									break;
						case 13 : memcpy(fault,wrong_firmware_loaded_in_io_module,sizeof(wrong_firmware_loaded_in_io_module));
									break;
					}
					break;
		default:
				break;
	}
*/

	return fault;
}
uint8_t hex2ascii(uint32_t hex_value)
{
	uint8_t sdigit = 0;
	uint8_t rem=0,cntr=0;
	uint32_t temp_hexval = hex_value;
	memset(conv_array,0,sizeof(conv_array));
	while(temp_hexval>=10)
	{
		rem = temp_hexval % 10;
		conv_array[cntr++] = rem + 0x30;
		temp_hexval = temp_hexval /10;
		sdigit = 1;
	}
	conv_array[cntr++] = temp_hexval +0x30;
	if(hex_value<10)
	  {
	    conv_array[1] = 0+0x30;
	  }
//	if(sdigit == 1)
//		cntr= cntr-1;

	return cntr;
}


/* Function to convert Hexdecimal values to ASCII format */
unsigned char hex_to_ascii(unsigned char temp_dat)
{
         if(temp_dat >=0x0A)
         {
            temp_dat = temp_dat +0x37;
         }
         else
         {
            temp_dat = temp_dat +0x30;
         }
        return temp_dat;
}

uint8_t hexa_ascii_hex(uint8_t hexbyte)
{
    unsigned char temp_char = 0;
	unsigned char nib1 = 0,nib2=0;
	unsigned char ascii_hex = 0;

  	temp_char = hexbyte;

	nib1 = temp_char & 0x0f;
	nib2 = temp_char & 0xf0;
	nib2 = nib2 >>4;
	ax_byte1 = hex_to_ascii(nib2);
	ax_byte2 = hex_to_ascii(nib1);
//	ascii_hex = ax_byte2;
//	ascii_hex = ascii_hex <<4;
//	ascii_hex = ascii_hex | ax_byte1;
//
//    return ascii_hex;
}

void hex_buff(unsigned char *a)
{
   unsigned char i =0;
   unsigned char k = 0;

   for(i=0;i<8;i++)
   {
	   k = i*2;
	   hexa_ascii_hex(a[i]);
       can_ascii_buff[k] = ax_byte1;
       can_ascii_buff[k+1] = ax_byte2;
   }
}

void hex_display(unsigned long hex_data)
{
	unsigned long hex_val = hex_data;
	unsigned char nibble[8] = {0};
	unsigned char temp_char = 0;
	unsigned char nib1 = 0,nib2=0;
	unsigned int temp_int = 0;
	unsigned  char i = 0;

	temp_char = (unsigned char )hex_val;
	nib1 = temp_char & 0x0f;
	nib2 = temp_char & 0xf0;
	nib2 = nib2 >>4;
	nibble[7] = nib1;
	nibble[6] = nib2;
	hex_val = hex_val >>8;
	temp_char = (unsigned char )hex_val;
	nib1 = temp_char & 0x0f;
	nib2 = temp_char & 0xf0;
	nib2 = nib2 >>4;
	nibble[5] = nib1;
	nibble[4] = nib2;
	hex_val = hex_val >>8;
	temp_char = (unsigned char )hex_val;
	nib1 = temp_char & 0x0f;
	nib2 = temp_char & 0xf0;
	nib2 = nib2 >>4;
	nibble[3] = nib1;
	nibble[2] = nib2;
	hex_val = hex_val >>8;
	temp_char = (unsigned char )hex_val;
	nib1 = temp_char & 0x0f;
	nib2 = temp_char & 0xf0;
	nib2 = nib2 >>4;
	nibble[1] = nib1;
	nibble[0] = nib2;

	for (i = 0; i<8;i++)
	{
		if(nibble[i]>=0x0A)
		{
			hex_char[i]= nibble[i] + 0x37;
		}
		else
		{
			hex_char[i]= nibble[i] + 0x30;
		}
		//printf("%X,",hex_char[i]);
	}
}




uint8_t *source_addr_decode(uint8_t sa)
{
	static uint8_t source_origin[20] = {0};

	if(sa == ENGINE_ECU)
	{
		memcpy(source_origin,"ECU",sizeof("ECU"));
	}
	else if(sa == TRANSMISSION_ECU)
	{
		memcpy(source_origin,"TCM",sizeof("TCM"));
	}
	else if(sa == IOMODULE_ECU)
	{
		memcpy(source_origin,"IO MODULE",sizeof("IO MODULE"));
	}
	else if(sa == VMS)
	{
		memcpy(source_origin,"VMS",sizeof("VMS"));
	}
	else if(sa == SENDER_CAN)
	{
		memcpy(source_origin,"SENDER CAN",sizeof("SENDER CAN"));
	}
	else{}
/*commented on 20240131
	switch(sa)
	{
		case 0x00:	memcpy(source_origin,"ECU",sizeof("ECU"));//*source_origin  = {"Engine_1_ECU"};
					break;
		case 0x01:	memcpy(source_origin,"VMS",sizeof("VMS"));
					break;
		case 0x02:	memcpy(source_origin,"TCM",sizeof("TCM"));//source_origin[] = {"TURBO_CHARGER_ECU"};
					break;
		case 0x03:	memcpy(source_origin,"IO MODULE",sizeof("IO MODULE"));
					break;
		case 0x04:	memcpy(source_origin,"SENDER CAN",sizeof("SENDER CAN"));
					break;
//		case 0x04:	memcpy(source_origin,"TRANSMISSION_2_ECU",sizeof("TRANSMISSION_2_ECU"));
//					break;
//		case 0x05:	memcpy(source_origin,"SHIFT_CONSOLE_1_ECU",sizeof("SHIFT_CONSOLE_1_ECU"));
//					break;
//		case 0x06:	memcpy(source_origin,"SHIFT_CONSOLE_2_ECU",sizeof("SHIFT_CONSOLE_2_ECU"));
//					break;
		default :
					break;
	}
*/
	return source_origin;
}

void write_value_to_usb(uint32_t hex_value,uint8_t *seperator)
{
	uint8_t i = 0,j=0,no_of_byte = 0;
	uint8_t temp_buff[10] = {0};
	num_val = hex2ascii(hex_value);
//	for(i=num_val;i>0;i=i-2)
//	{
//		pbuf[buff_cnt++] = conv_array[i-1];
//		pbuf[buff_cnt++] = conv_array[i-2];
//	}

	for(i=num_val;i>0;i=i-2)
	{
		temp_buff[j++] = conv_array[i-1];
		if(num_val==1)
		{
			break;
		}
		else

		temp_buff[j++] = conv_array[i-2];
	}

//	f_write(&g_fileObject,temp_buff, num_val,&bytesWritten);
//	if(seperator!=0)
//		f_write(&g_fileObject,seperator, 1,&bytesWritten);
}

void write_string_to_usb(uint8_t *pstr,uint8_t *seperator)
{
//
//	f_write(&g_fileObject,pstr, strlen(pstr),&bytesWritten);
//	if(seperator!=0)
//		f_write(&g_fileObject,seperator, 1,&bytesWritten);
}



#endif /* FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_C_ */
