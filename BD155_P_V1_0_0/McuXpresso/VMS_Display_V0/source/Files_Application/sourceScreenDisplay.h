/*
 * sourceScreenDisplay.h
 *
 *  Created on: 22-Oct-2021
 *      Author: EME01-L-02D19
 */

#ifndef FILES_APPLICATION_SOURCESCREENDISPLAY_H_
#define FILES_APPLICATION_SOURCESCREENDISPLAY_H_

#include "../Files_Header/sourceMacro.h"
#include "../Files_Header/sourceExternVariable.h"
#include "../Files_Header/sourceInclude.h"

extern unsigned char acAPPW_Language_0[];

void ProcessDisplayData(void);
void ProcessScreen00(void);
void ProcessScreen01(void);
void ProcessScreen02(void);
void ProcessScreen03(void);
void ProcessScreen04(void);
void ProcessScreen05(void);
void ProcessScreen06(void);
void ProcessScreen07(void);
void ProcessScreen08(void);
void ProcessScreen09(void);
void ProcessScreen10(void);
void ProcessScreen11(void);
void ProcessScreen12(void);
void ProcessScreen13(void);
void ProcessScreen14(void);
void ProcessScreen15(void);
void ProcessScreen16(void);
void ProcessScreen17(void);
void ProcessScreen18(void);
void ProcessScreen19(void);
void ProcessScreen20(void);
void ProcessScreen21(void);
void ProcessScreen22(void);
void ProcessScreen23(void);
void ProcessScreen24(void);
void ProcessScreen25(void);
void ProcessScreen26(void);
void ProcessScreen27(void);
void ProcessScreen28(void);
void ProcessScreen29(void);
void ProcessScreen30(void);
void ProcessScreen31(void);
void ProcessScreen32(void);
void ProcessScreen100(void);
void ProcessScreen101(void);
void ProcessScreen102(void);
void ProcessScreen103(void);
void ProcessScreen104(void);
void ProcessScreen105(void);

extern void Writedataintofram(unsigned char store_parameter);
extern void WriteRTC(void);

void store_home_screen_sel_data(void);
void store_onoff_screen_sel_data(void);
void read_screen_setting_data(void);
void read_onoff_home_setting_status(void);
void Homescreen_select_day(void);
void Homescreen_select_night(void);
extern Uint32 MemoryReadVariable(uint8_t MemorySelect, Uint32 MemoryAdd, uint16_t NumberofBytes);
extern void   MemoryWriteVariable(uint8_t MemorySelect, Uint32 MemoryAdd, Uint32 MemoryData, uint16_t NumberofBytes);
//extern void write_fram(Uint32 fram_wr_mem_address,Uint32 data,uint8_t no_of_bytes);
//extern unsigned long read_fram(Uint32 fram_wr_mem_address,uint8_t no_of_bytes);

//uint16_t Character_concatination(uint8_t no_of_char,uint8_t start_index);
uint16_t Character_concatination(uint8_t no_of_char, uint8_t array[], uint8_t start_index, bool inbetween);
unsigned concatenate(unsigned x, unsigned y);
uint8_t ascii_bcd(uint8_t character);

extern void set_brightness(uint8_t brightness_perc);
void Read_brightness_from_FRAM(void);
void write_default_scr_sel_setting(void);
void Write_brightness_to_FRAM(void);

extern Uint32 Read_no_of_logs(Uint32 report_start_addr,Uint32 currnt_ptr,uint16_t log_frame_length);
void Service_remainder_hrs_calculation(Uint32 diff_eng_hrs);

extern uint16_t DiagnosticNextError(uint8_t sa, uint16_t indx, uint16_t totl_errs);
extern uint16_t DiagnosticsPreviousError(uint8_t sa, uint16_t indx, uint16_t totl_err);

extern void Read_identification_details(void);

void store_swcs_data(void);
void read_swcs_data(void);

/******************encoder************************/

//const int maxScroll = 11;
int32_t prevPosValue = 0;
extern volatile uint32_t gMilliseconds;
void debounce_encoder();
extern uint32_t millis(void);
#endif /* FILES_APPLICATION_SOURCESCREENDISPLAY_H_ */
