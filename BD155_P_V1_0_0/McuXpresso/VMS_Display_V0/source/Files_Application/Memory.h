/*
 * Memory.h
 *
 *  Created on: 28-Nov-2022
 *      Author: Dell
 */

#ifndef FILES_APPLICATION_MEMORY_H_
#define FILES_APPLICATION_MEMORY_H_

#include "../Files_Header/sourceMacro.h"
#include "../Files_Header/sourceExternVariable.h"
#include "../Files_Header/sourceInclude.h"

unsigned char Datalog_array[100]                 = {0};
unsigned char Errorlog_array[100]                 = {0};
uint8_t Swwhlog_array[50] = {0};

void Poweron_memory_read_write(void);
void check_winbond_overflowed(void);

Uint32 Get_record_pointer_from_memory(Uint32 addrs_ptr);
Uint32 Find_memroy_location_to_store_data(Uint32 data_ptr);
Uint32 Find_memroy_location_to_store_error(Uint32 data_ptr);
Uint32 Find_memroy_location_to_store_swwh(Uint32 data_ptr);

Uint32 Extract_one_datalog_frame_from_winbond_table(Uint32 report_start_address);
Uint32 Extract_one_errorlog_frame_from_winbond_table(Uint32 report_start_address);
Uint32 Extract_one_swwhlog_frame_from_winbond_table(Uint32 report_start_address);

void Store_one_datalog_frame_to_winbond_table(void);
void Store_one_errorlog_frame_to_winbond_table(void);
void Store_one_swwhlog_frame_to_winbond_table(void);

void Read_all_datalog_frames_from_winbond_table(void);
void Read_all_errorlog_frames_from_winbond_table(void);
void Read_all_swwhlog_frames_from_winbond_table(void);

Uint32 Read_no_of_logs(Uint32 report_start_addr,Uint32 currnt_ptr,uint16_t log_frame_length);

Uint32 MemoryReadVariable(uint8_t MemorySelect, Uint32 MemoryAdd, uint16_t NumberofBytes);
void   MemoryWriteVariable(uint8_t MemorySelect, Uint32 MemoryAdd, Uint32 MemoryData, uint16_t NumberofBytes);
void erase_winbond_memory(Uint32 memory_erase_addr,uint8_t erase_type);
void erase_fram_memory(uint16_t start_addr,uint16_t end_addr);
void    fram_write(Uint32 MemoryPriWrAddress,uint8_t MemoryPriWrData);
uint8_t fram_read(Uint32 MemoryPriRdAddress);
void    winbond_write(Uint32 MemoryPriWrAddress,uint8_t MemoryPriWrData);
uint8_t winbond_read(Uint32 MemoryPriRdAddress);

void FramMemoryTest(void);
void WinbondMemoryTest(void);

extern void ClockDataOut(uint8_t lcSpiTxData);
extern uint8_t ClockDataIn(void);
extern void DelayUs1(unsigned long llTick);

extern void Decode_datalog_array(void);
extern void Decode_errorlog_array(void);
extern void Decode_swwhlog_array(void);
extern void Service_remainder_hrs_calculation(Uint32 diff_eng_hrs);

#endif /* FILES_APPLICATION_MEMORY_H_ */
