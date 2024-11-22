/*
 * Memory.c
 *
 *  Created on: 28-Nov-2022
 *      Author: Dell
 */

#include "Memory.h"

void Poweron_memory_read_write(void)
{
    /**dummy write and read for both FRAM and Winbond memory*/
	fram_write(0x7FFF,0x00);
	winbond_write(0x800000,0xFF);
    fram_write(0x7FFF,0x00);
    winbond_write(0x800000,0xFF);

    fram_read(0x7FFF);
    winbond_read(0x800000);
    fram_read(0x7FFF);
    winbond_read(0x800000);
    /********************************/
    check_winbond_overflowed();

    /*SERVICE REMAINDER SCREEN*/
    //Service_remainder_hrs_calculation(giHourMeter);
}
/******************added by Rajashekhar on 08.04.2022*********************/
/*This function write only 1 byte at a time*/
void fram_write(Uint32 fram_write_address,uint8_t fram_write_data)
{
	/*0x06:before writing to FM25W256(fram) programmer needs to send 06 i.e "write_enable" op_code
	 *0x04:after writing data to FM25W256(fram) programmer needs to send 04 i.e "write_disable" op_code
	 *all the above op_codes are mentioned in the FM25W256(fram) datasheet*/

    SPI_CS_HIGH;     /*gpio expander disable*/
	WINBOND_CS_HIGH; /*WINBOND DISABLE*/

	SPI_CS_LOW_MEM;
	DelayUs1(1);
	ClockDataOut(0x06);  //write_enable
	DelayUs1(1);
	SPI_CS_HIGH_MEM;

	SPI_CS_LOW_MEM;
	DelayUs1(1);
	ClockDataOut(0x02);  //write_memory_data
	ClockDataOut(fram_write_address >> 8);//shift is because, In FM25W256(fram) address is 2 byte
	ClockDataOut(fram_write_address);
	ClockDataOut(fram_write_data);
	DelayUs1(1);
	SPI_CS_HIGH_MEM;

	SPI_CS_LOW_MEM;
	DelayUs1(1);
	ClockDataOut(0x04);  //write_disable
	DelayUs1(1);
	SPI_CS_HIGH_MEM;
}

/*This function read only 1 byte at a time*/
uint8_t fram_read(Uint32 fram_read_address)
{
	uint8_t temp1=0;
	uint8_t temp2=0;

    uint8_t readed_data=0;

    SPI_CS_HIGH;     /*gpio expander disable*/
	WINBOND_CS_HIGH; /*WINBOND DISABLE*/

    SPI_CS_LOW_MEM;
    DelayUs1(1);

    ClockDataOut(0x03);						//"Read_memory_data" op_code
    ClockDataOut(fram_read_address >> 8);
    ClockDataOut(fram_read_address);

    temp2=ClockDataIn();					//here data is read from f-ram through spi

    readed_data=(temp1<<8 | temp2);

    DelayUs1(1);

    SPI_CS_HIGH_MEM;

    return readed_data;
}
uint8_t winbond_read(Uint32 win_rd_mem_address)
{
	uint8_t temp1=0;
	uint8_t temp2=0;
	uint8_t readed_data=0;

    SPI_CS_HIGH;     /*gpio expander disable*/
    SPI_CS_HIGH_MEM; /*FRAM DISABLE*/

    WINBOND_CS_LOW; /*WINBOND ENABLE*/
    DelayUs1(1);

    ClockDataOut(0x03);						//"Read_memory_data" op_code
    ClockDataOut(win_rd_mem_address >> 16);
    ClockDataOut(win_rd_mem_address >> 8);
    ClockDataOut(win_rd_mem_address);

    temp2=ClockDataIn();					//here data is read from f-ram through spi

    readed_data=(temp1<<8 | temp2);

    DelayUs1(1);

    WINBOND_CS_HIGH;/*WINBOND DISABLE*/

    return readed_data;
}

/*This function used to write the data to WINBOND memory with specific address*/
void winbond_write(Uint32 win_wr_mem_address,uint8_t winbond_write_data)
{
	/*0x06:before writing to FM25W256(fram) programmer needs to send 06 i.e "write_enable" op_code
	 *0x04:after writing data to FM25W256(fram) programmer needs to send 04 i.e "write_disable" op_code
	 *all the above op_codes are mentioned in the FM25W256(fram) datasheet*/

    SPI_CS_HIGH;     /*gpio expander disable*/
    SPI_CS_HIGH_MEM; /*FRAM DISABLE*/

    WINBOND_CS_LOW; /*WINBOND ENABLE*/
	DelayUs1(1);
	ClockDataOut(0x06);//write_enable
	DelayUs1(1);
	WINBOND_CS_HIGH;/*WINBOND DISABLE*/

	WINBOND_CS_LOW; /*WINBOND ENABLE*/
	DelayUs1(1);
	ClockDataOut(0x02);//write_memory_data
	ClockDataOut(win_wr_mem_address >> 16);//shift is because, In FM25W256(fram) address is 2 byte
	ClockDataOut(win_wr_mem_address >> 8);//shift is because, In FM25W256(fram) address is 2 byte
	ClockDataOut(win_wr_mem_address);
	ClockDataOut(winbond_write_data);
	DelayUs1(1);
	WINBOND_CS_HIGH;/*WINBOND DISABLE*/

	WINBOND_CS_LOW; /*WINBOND ENABLE*/
	DelayUs1(1);
	ClockDataOut(0x04);//write_disable
	DelayUs1(1);
	WINBOND_CS_HIGH;/*WINBOND DISABLE*/
}

void erase_winbond_memory(Uint32 memory_erase_addr,uint8_t erase_type)
{
    SPI_CS_HIGH;     /*gpio expander disable*/
    SPI_CS_HIGH_MEM; /*FRAM DISABLE*/

    WINBOND_CS_LOW; /*WINBOND ENABLE*/
    DelayUs1(1);
	ClockDataOut(0x06);//write_enable
	DelayUs1(1);
	WINBOND_CS_HIGH;/*WINBOND DISABLE*/

    if((erase_type == WINBOND_CHIP_ERASE_OPCODE1) || (erase_type == WINBOND_CHIP_ERASE_OPCODE2))        //this used for 8M byte chip erasing
    {
        WINBOND_CS_LOW; /*WINBOND ENABLE*/
        DelayUs1(1);
    	ClockDataOut(erase_type);
    	DelayUs1(1);
    	WINBOND_CS_HIGH;/*WINBOND DISABLE*/
    }
    else
    {
    	WINBOND_CS_LOW; /*WINBOND ENABLE*/
    	DelayUs1(1);
    	ClockDataOut(erase_type);
    	ClockDataOut(memory_erase_addr >> 16);
    	ClockDataOut(memory_erase_addr >> 8);
    	ClockDataOut(memory_erase_addr);
    	DelayUs1(1);
    	WINBOND_CS_HIGH;/*WINBOND DISABLE*/
    }
}
void WinbondMemoryTest(void)
{
    uint8_t memory_error_flag = 0;
    uint16_t status_reg = 0;
    uint32_t addr = 0;
    uint8_t memory_read_byte = 0;

    Winbond_mem_test_flag = 0;

    SPI_CS_HIGH;     /*gpio expander disable*/
    SPI_CS_HIGH_MEM; /*FRAM DISABLE*/

    WINBOND_CS_LOW; /*WINBOND ENABLE*/
    DelayUs1(1);
	ClockDataOut(0x06);//write_enable
	DelayUs1(1);
	WINBOND_CS_HIGH;/*WINBOND DISABLE*/

    erase_winbond_memory(0x00,0x60); //0x20h sector erase 4Kb  //0xC7 or 0x60 chip erase
    while(1)
    {
    	WINBOND_CS_LOW; /*WINBOND ENABLE*/	                                     //CS=0
    	DelayUs1(1);                                       //1us delay
    	ClockDataOut(0x05);                        //Read Memory Data
    	ClockDataOut(0x00);
    	status_reg = ClockDataIn();
    	DelayUs1(1);
    	WINBOND_CS_HIGH;/*WINBOND DISABLE*/

        if(((status_reg & 0x01) == 0))
        {
            break;
        }
    }

    for(addr = 0;addr<0x7FF;addr++)
    {
        if(addr%4 == 0)
        	winbond_write(addr,0x00);
        else if(addr%4 == 1)
        	winbond_write(addr,0x55);
        else if(addr%4 == 2)
        	winbond_write(addr,0xAA);
        else if(addr%4 == 3)
        	winbond_write(addr,0xFF);
        /*
        if(SciaRxData == 0x1b)
        {
            break;
        }
        */
    }


    for(addr = 0;addr<0x7FF;addr++)
    {
        memory_read_byte = winbond_read(addr);
        if(addr%4 == 0)
        {
            if(memory_read_byte != 0x00)
            {
                memory_error_flag = 1;
                break;
            }
        }
        else if(addr%4 == 1)
        {
            if(memory_read_byte != 0x55)
            {
                memory_error_flag = 1;
                break;
            }
        }
        else if(addr%4 == 2)
        {
            if(memory_read_byte != 0xAA)
            {
                memory_error_flag = 1;
                break;
            }
        }
        else if(addr%4 == 3)
        {
            if(memory_read_byte != 0xFF)
            {
                memory_error_flag = 1;
                break;
            }
        }
        /*
        if(SciaRxData == 0x1b)
        {
            break;
        }
        */
    }

    //if(SciaRxData != 0x1B)
    {
        if(memory_error_flag == 1)
        {
            //transmit_serial("MEMORY 2 TEST FAILED AT ADDRESS : ");
            //read_address_loc = writting_addr_ptr + 1;
            //send_memory_address();
            //transmit_serial("\r\n");
        	Winbond_mem_test_flag = 1;
        }
        else
        {
        	Winbond_mem_test_flag = 2;
            //transmit_serial("MEMORY 2 TEST SUCCESSFULL\r\n");
            //transmit_serial("ERASING MEMORY 2...\r\n");
            erase_winbond_memory(0x00,0x60);
            while(1)
            {
            	WINBOND_CS_LOW; /*WINBOND ENABLE*/	                //CS=0
            	DelayUs1(1);                                    //1us delay
            	ClockDataOut(0x05);                             //Read Memory Data
            	ClockDataOut(0x00);
            	status_reg = ClockDataIn();
            	DelayUs1(1);
            	WINBOND_CS_HIGH;/*WINBOND DISABLE*/
                if(((status_reg & 0x01) == 0))
                {
                    break;
                }
            }

            //if(SciaRxData != 0x1B)
            //transmit_serial("MEMORY 2 ERASED SUCCESSFULLY\r\n");
            Winbond_mem_test_flag = 3;
        }
    }
}
/**********************memory test function***************************/
/*This function writes 32kb data to fram memory and read 32kb data from fram memory, 12 times(12 pattern). and verify the memory test is successful or not*/
void FramMemoryTest(void)
{
	uint16_t test_pat1_err_cnt1=0,test_pat2_err_cnt2=0,test_pat3_err_cnt3=0,test_pat4_err_cnt4=0,test_pat5_err_cnt5=0,test_pat6_err_cnt6=0,test_pat7_err_cnt7=0;
	uint16_t test_pat8_err_cnt8 = 0,test_pat9_err_cnt9=0,test_pat10_err_cnt10=0,test_pat11_err_cnt11=0, test_pat12_err_cnt12=0;
	Uint32 addr = 0,mem_error_cnt = 0;
	uint8_t test_byte = 0;
	uint8_t test_pattern[] ={0x00,0x55,0xFF,0xAA,0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
	unsigned char  memory_read_byte = 0;
	uint8_t pat_cnt = 0;
	Uint32 sum_of_err_cnt = 0;

	for(pat_cnt = 0;pat_cnt<12;pat_cnt++)
	{
		test_byte = test_pattern[pat_cnt];

		for(addr = 0;addr<=0x7fff;addr++)
		{
			fram_write(addr,test_byte);
		}

		mem_error_cnt = 0;

		for(addr = 0;addr<=0x7fff;addr++)
		{
			memory_read_byte = fram_read(addr);
			if(memory_read_byte!=test_byte)
			{
				mem_error_cnt++;
			}
		}

		if(test_byte==0x00)
		{
			test_pat1_err_cnt1 =  mem_error_cnt;
		}
		else if(test_byte==0x55)
		{
			test_pat2_err_cnt2 =  mem_error_cnt;
		}
		else if(test_byte==0xFF)
		{
			test_pat3_err_cnt3 =  mem_error_cnt;
		}
		else if(test_byte==0xAA)
		{
			test_pat4_err_cnt4 =  mem_error_cnt;
		}

		else if(test_byte==0x01)
        {
            test_pat5_err_cnt5 =  mem_error_cnt;
        }
        else if(test_byte==0x02)
        {
            test_pat6_err_cnt6 =  mem_error_cnt;
        }
        else if(test_byte==0x04)
        {
            test_pat7_err_cnt7 =  mem_error_cnt;
        }
        else if(test_byte==0x08)
        {
            test_pat8_err_cnt8 =  mem_error_cnt;
        }
        else if(test_byte==0x10)
        {
            test_pat9_err_cnt9 =  mem_error_cnt;
        }
        else if(test_byte==0x20)
        {
            test_pat10_err_cnt10 =  mem_error_cnt;
        }
        else if(test_byte==0x40)
        {
            test_pat11_err_cnt11 =  mem_error_cnt;
        }
        else if(test_byte==0x80)
        {
            test_pat12_err_cnt12 =  mem_error_cnt;
        }
        if(pat_cnt== 11)
        {
            sum_of_err_cnt = test_pat1_err_cnt1 + test_pat2_err_cnt2+test_pat3_err_cnt3+test_pat4_err_cnt4+test_pat5_err_cnt5+test_pat6_err_cnt6+test_pat7_err_cnt7+
                             test_pat8_err_cnt8 + test_pat9_err_cnt9 +test_pat10_err_cnt10+test_pat11_err_cnt11+test_pat12_err_cnt12;
            if(sum_of_err_cnt == 0)
            	PRINTF("\r\nMemory Test is Successfull\n");
            else
            	PRINTF("\r\nMemory Test is Not Successfull\n");
        }
	}
	erase_fram_memory(0x0000,0x7FFF);
}

void erase_fram_memory(uint16_t start_addr,uint16_t end_addr)
{
    uint16_t  start_address = start_addr;
    uint16_t  end_address = end_addr;
    uint16_t  mem_addr_counter = 0;

    for (mem_addr_counter=start_addr;mem_addr_counter<=end_address; mem_addr_counter++)
    {
    	fram_write(start_address,0x00);
        start_address++;
    }
}
void MemoryWriteVariable(uint8_t MemorySelect, Uint32 MemoryAdd, Uint32 MemoryData, uint16_t NumberofBytes)
{
    if(MemorySelect == PRIMARY_MEMORY)
    {
        switch(NumberofBytes)
        {
        case 1:
        	fram_write(MemoryAdd, MemoryData);
            break;

        case 2:
        	fram_write(MemoryAdd, MemoryData);
        	fram_write(MemoryAdd+1, MemoryData>>8);
            break;

        case 3:
        	fram_write(MemoryAdd, MemoryData);
        	fram_write(MemoryAdd+1, MemoryData>>8);
        	fram_write(MemoryAdd+2, MemoryData>>16);
            break;

        case 4:
        	fram_write(MemoryAdd, MemoryData);
        	fram_write(MemoryAdd+1, MemoryData>>8);
        	fram_write(MemoryAdd+2, MemoryData>>16);
        	fram_write(MemoryAdd+3, MemoryData>>24);
            break;

        default:
            break;
        }
    }
    else if(MemorySelect == SECONDARY_MEMORY)
    {
        switch(NumberofBytes)
        {
        case 1:
        	winbond_write(MemoryAdd, MemoryData);
            break;

        case 2:
        	winbond_write(MemoryAdd, MemoryData);
            winbond_write(MemoryAdd+1, MemoryData>>8);
            break;

        case 3:
        	winbond_write(MemoryAdd, MemoryData);
            winbond_write(MemoryAdd+1, MemoryData>>8);
            winbond_write(MemoryAdd+2, MemoryData>>16);
            break;

        case 4:
        	winbond_write(MemoryAdd, MemoryData);
            winbond_write(MemoryAdd+1, MemoryData>>8);
            winbond_write(MemoryAdd+2, MemoryData>>16);
            winbond_write(MemoryAdd+3, MemoryData>>24);
            break;

        default:
            break;
        }
    }
    else
    {}
}

Uint32 MemoryReadVariable(uint8_t MemorySelect, Uint32 MemoryAdd, uint16_t NumberofBytes)
{
    Uint32 MemoryReadData = 0;
    uint8_t  ReadData_byte;
    if(MemorySelect == PRIMARY_MEMORY)
    {
        switch(NumberofBytes)
        {
        case 1:
            MemoryReadData = fram_read(MemoryAdd);
            break;

        case 2:
            MemoryReadData = fram_read(MemoryAdd+1);
            ReadData_byte  = fram_read(MemoryAdd);
            MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
            break;

        case 3:
            MemoryReadData = fram_read(MemoryAdd+2);
            ReadData_byte  = fram_read(MemoryAdd+1);
            MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
            ReadData_byte  = fram_read(MemoryAdd);
            MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
            break;

        case 4:
            MemoryReadData = fram_read(MemoryAdd+3);
            ReadData_byte  = fram_read(MemoryAdd+2);
            MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
            ReadData_byte  = fram_read(MemoryAdd+1);
            MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
            ReadData_byte  = fram_read(MemoryAdd);
            MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
            break;

        default:
            break;
        }
    }
    else if(MemorySelect == SECONDARY_MEMORY)
    {
        switch(NumberofBytes)
        {
            case 1:
                MemoryReadData = winbond_read(MemoryAdd);
                   break;

               case 2:
                   MemoryReadData = winbond_read(MemoryAdd+1);
                   ReadData_byte  = winbond_read(MemoryAdd);
                   MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
                   break;

               case 3:
                   MemoryReadData = winbond_read(MemoryAdd+2);
                   ReadData_byte  = winbond_read(MemoryAdd+1);
                   MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
                   ReadData_byte  = winbond_read(MemoryAdd);
                   MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
                   break;

               case 4:
                   MemoryReadData = winbond_read(MemoryAdd+3);
                   ReadData_byte  = winbond_read(MemoryAdd+2);
                   MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
                   ReadData_byte  = winbond_read(MemoryAdd+1);
                   MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
                   ReadData_byte  = winbond_read(MemoryAdd);
                   MemoryReadData = (MemoryReadData << 8) | ReadData_byte;
                   break;

               default:
                   break;
        }
    }
    else
    {}

    return MemoryReadData;
}
/*This function is called when poweron */
void check_winbond_overflowed(void)
{
	uint8_t overflow_status;
	/**For Datalogging**/
    datalog_overflow  = 0;
    overflow_status = 0;
    overflow_status = MemoryReadVariable(PRIMARY_MEMORY,WINBOND_DATALOG_OVERFLOW_ADDR,1);
    if(overflow_status == 0xAA)
    {
    	datalog_overflow = 1;
    }
    else
    {
    	datalog_overflow = 0;
    }
    /**For Errorlogging**/
    errorlog_overflow = 0;
    overflow_status = 0;
    overflow_status = MemoryReadVariable(PRIMARY_MEMORY,WINBOND_ERRORLOG_OVERFLOW_ADDR,1);
    if(overflow_status == 0xAA)
    {
    	errorlog_overflow = 1;
    }
    else
    {
    	errorlog_overflow = 0;
    }

    /**For Swwhlogging**/
    swwhlog_overflow = 0;
    overflow_status = 0;
    overflow_status = MemoryReadVariable(PRIMARY_MEMORY,WINBOND_SWWHLOG_OVERFLOW_ADDR,1);
    if(overflow_status == 0xAA)
    {
    	swwhlog_overflow = 1;
    }
    else
    {
    	swwhlog_overflow = 0;
    }
}
Uint32 Get_record_pointer_from_memory(Uint32 addrs_ptr)
{
    Uint32 update_record_pointer = 0;

    update_record_pointer = MemoryReadVariable(PRIMARY_MEMORY, addrs_ptr, 4);

    return update_record_pointer;
}
Uint32  Find_memroy_location_to_store_data(Uint32 data_ptr)
{
    Uint32 final_datalog_ptr = 0;
	Uint32 sixty_four_kb_start_addr = 0;

    data_ptr = MemoryReadVariable(PRIMARY_MEMORY, DATA_LOG_CURRENT_PTR, 4);

    final_datalog_ptr = MAX_DATA_LOG;
    final_datalog_ptr = final_datalog_ptr * DATA_LOG_LENGTH;
    final_datalog_ptr = final_datalog_ptr + START_DATALOG_LOC_WINBOND;

    if(data_ptr >= final_datalog_ptr || data_ptr < START_DATALOG_LOC_WINBOND)
    {
        if(data_ptr >= final_datalog_ptr)
        {
        	datalog_overflow = 1;
            fram_write(WINBOND_DATALOG_OVERFLOW_ADDR,0xAA);

            erase_winbond_memory(data_ptr,WINBOND_4KB_ERASE_OPCODE);
            DelayUs1(500);

            data_ptr = START_DATALOG_LOC_WINBOND;
        }
        else
        {
            /* 4MB/1024kb = 4096kb "To erase this 4MB winbond memory we use 64kb erase opcode 0xD8"
             * we need to find next 64kb'th start address from where we need to erase*/
        	/* 64kb*64 = 4096kb memory erase */
        	sixty_four_kb_start_addr = START_DATALOG_LOC_WINBOND;
        	for(uint8_t no_of_64kb_blocks = 0; no_of_64kb_blocks < DL_NO_OF_64KB_BLOCK_ERASE;no_of_64kb_blocks++)
        	{
        		erase_winbond_memory(sixty_four_kb_start_addr,WINBOND_64KB_ERASE_OPCODE);
        		sixty_four_kb_start_addr = sixty_four_kb_start_addr + 0xFFFF;
        		DelayUs1(100);
        	}
        	/*
            erase_winbond_memory(START_DATALOG_LOC_WINBOND,0xD8);
            DelayUs1(1000);
            erase_winbond_memory(START_DATALOG_LOC_WINBOND+0xFFFF,0xD8);
            DelayUs1(1000);
            erase_winbond_memory(START_DATALOG_LOC_WINBOND+0xFFFF+0xFFFF,0xD8);
            DelayUs1(1000);
            */

            data_ptr = START_DATALOG_LOC_WINBOND;
        }
    }

    if((data_ptr % 4096) == 0x00)
    {
        /* 4K memory erase */
        erase_winbond_memory(data_ptr,WINBOND_4KB_ERASE_OPCODE);
        DelayUs1(500);
    }

    MemoryWriteVariable(PRIMARY_MEMORY, DATA_LOG_CURRENT_PTR, data_ptr, 4);

    return data_ptr;
}

Uint32  Find_memroy_location_to_store_error(Uint32 err_ptr)
{
    Uint32 final_errorlog_ptr = 0;
	Uint32 sixty_four_kb_start_addr = 0;

    err_ptr = MemoryReadVariable(PRIMARY_MEMORY, ERROR_LOG_CURRENT_PTR, 4);

    final_errorlog_ptr = MAX_ERROR_LOG;
    final_errorlog_ptr = final_errorlog_ptr * ERROR_LOG_LENGTH;
    final_errorlog_ptr = final_errorlog_ptr + START_ERRORLOG_LOC_WINBOND;

    if(err_ptr >= final_errorlog_ptr || err_ptr < START_ERRORLOG_LOC_WINBOND)
    {
        if(err_ptr >= final_errorlog_ptr)
        {
        	errorlog_overflow = 1;
            fram_write(WINBOND_ERRORLOG_OVERFLOW_ADDR,0xAA);

            erase_winbond_memory(err_ptr,WINBOND_4KB_ERASE_OPCODE);
            DelayUs1(500);

            err_ptr = START_ERRORLOG_LOC_WINBOND;
        }
        else
        {
            /* 4MB/1024kb = 4096kb "To erase this 4MB winbond memory we use 64kb erase opcode 0xD8"
             * we need to find next 64kb'th start address from where we need to erase*/
        	/* 64kb*64 = 4096kb memory erase */
        	sixty_four_kb_start_addr = START_ERRORLOG_LOC_WINBOND;
        	for(uint8_t no_of_64kb_blocks = 0; no_of_64kb_blocks < EL_NO_OF_64KB_BLOCK_ERASE;no_of_64kb_blocks++)
        	{
        		erase_winbond_memory(sixty_four_kb_start_addr,WINBOND_64KB_ERASE_OPCODE);
        		sixty_four_kb_start_addr = sixty_four_kb_start_addr + 0xFFFF;
        		DelayUs1(100);
        	}
        	/*
            erase_winbond_memory(START_ERRORLOG_LOC_WINBOND,0xD8);
            DelayUs1(1000);
            erase_winbond_memory(START_ERRORLOG_LOC_WINBOND+0xFFFF,0xD8);
            DelayUs1(1000);
            erase_winbond_memory(START_ERRORLOG_LOC_WINBOND+0xFFFF+0xFFFF,0xD8);
            DelayUs1(1000);
            */

            err_ptr = START_ERRORLOG_LOC_WINBOND;
        }
    }

    if((err_ptr % 4096) == 0x00)
    {
        /* 4K memory erase */
        erase_winbond_memory(err_ptr,WINBOND_4KB_ERASE_OPCODE);
        DelayUs1(500);
    }

    MemoryWriteVariable(PRIMARY_MEMORY, ERROR_LOG_CURRENT_PTR, err_ptr, 4);

    return err_ptr;
}

Uint32  Find_memroy_location_to_store_swwh(Uint32 swwh_ptr)
{
    Uint32 final_swwhlog_ptr = 0;
	Uint32 sixty_four_kb_start_addr = 0;

    swwh_ptr = MemoryReadVariable(PRIMARY_MEMORY, SWWH_LOG_CURRENT_PTR, 4);

    final_swwhlog_ptr = MAX_SWWH_LOG;
    final_swwhlog_ptr = final_swwhlog_ptr * SWWH_LOG_LENGTH;
    final_swwhlog_ptr = final_swwhlog_ptr + START_SWWHLOG_LOC_WINBOND;

    if(swwh_ptr >= final_swwhlog_ptr || swwh_ptr < START_SWWHLOG_LOC_WINBOND)
    {
        if(swwh_ptr >= final_swwhlog_ptr)
        {
        	swwhlog_overflow = 1;
            fram_write(WINBOND_SWWHLOG_OVERFLOW_ADDR,0xAA);

            erase_winbond_memory(swwh_ptr,WINBOND_4KB_ERASE_OPCODE);
            DelayUs1(500);

            swwh_ptr = START_SWWHLOG_LOC_WINBOND;
        }
        else
        {
            /* 4MB/1024kb = 4096kb "To erase this 4MB winbond memory we use 64kb erase opcode 0xD8"
             * we need to find next 64kb'th start address from where we need to erase*/
        	/* 64kb*64 = 4096kb memory erase */
        	sixty_four_kb_start_addr = START_SWWHLOG_LOC_WINBOND;
        	for(uint8_t no_of_64kb_blocks = 0; no_of_64kb_blocks < SWWH_NO_OF_64KB_BLOCK_ERASE;no_of_64kb_blocks++)
        	{
        		erase_winbond_memory(sixty_four_kb_start_addr,WINBOND_64KB_ERASE_OPCODE);
        		sixty_four_kb_start_addr = sixty_four_kb_start_addr + 0xFFFF;
        		DelayUs1(100);
        	}
        	/*
            erase_winbond_memory(START_SWWHLOG_LOC_WINBOND,0xD8);
            DelayUs1(1000);
            erase_winbond_memory(START_SWWHLOG_LOC_WINBOND+0xFFFF,0xD8);
            DelayUs1(1000);
            erase_winbond_memory(START_SWWHLOG_LOC_WINBOND+0xFFFF+0xFFFF,0xD8);
            DelayUs1(1000);
            */

            swwh_ptr = START_SWWHLOG_LOC_WINBOND;
        }
    }

    if((swwh_ptr % 4096) == 0x00)
    {
        /* 4K memory erase */
        erase_winbond_memory(swwh_ptr,WINBOND_4KB_ERASE_OPCODE);
        DelayUs1(500);
    }

    MemoryWriteVariable(PRIMARY_MEMORY, SWWH_LOG_CURRENT_PTR, swwh_ptr, 4);

    return swwh_ptr;
}
void Store_one_datalog_frame_to_winbond_table(void)
{
    Uint32 data_ptr = 0, final_datalog_ptr = 0;
    uint8_t cnt = 0;

    data_ptr = Get_record_pointer_from_memory(DATA_LOG_CURRENT_PTR);

    memset(&Datalog_array, 0, sizeof(Datalog_array));

    for(cnt = 0;cnt < DATA_LOG_LENGTH;cnt++)//transfer what ever current_cycle_frame_data to one temporary_array
    {
        Datalog_array[cnt] = fram_read(DATA_LOG_START_ADDRESS+cnt);
    }

    data_ptr = Find_memroy_location_to_store_data(data_ptr);

    for(cnt = 0;cnt<DATA_LOG_LENGTH;cnt++)// transfer temporary_array data to winbond memory
    {
        winbond_write(data_ptr+cnt,Datalog_array[cnt]);
    }

    data_ptr = data_ptr + DATA_LOG_LENGTH;

    final_datalog_ptr = 0;
    final_datalog_ptr = MAX_DATA_LOG;
    final_datalog_ptr = final_datalog_ptr * DATA_LOG_LENGTH;
    final_datalog_ptr = final_datalog_ptr + START_DATALOG_LOC_WINBOND;

    if(data_ptr > final_datalog_ptr)
    {
        data_ptr = START_DATALOG_LOC_WINBOND;
    }

    MemoryWriteVariable(PRIMARY_MEMORY, DATA_LOG_CURRENT_PTR, data_ptr, 4);
}
void Store_one_errorlog_frame_to_winbond_table(void)
{
    Uint32 err_ptr = 0, final_errorlog_ptr = 0;
    uint8_t cnt = 0;

    err_ptr = Get_record_pointer_from_memory(ERROR_LOG_CURRENT_PTR);

    memset(&Errorlog_array, 0, sizeof(Errorlog_array));

    for(cnt = 0;cnt < ERROR_LOG_LENGTH;cnt++)//transfer whatever errorlog_frame_data to one temporary_array
    {
    	Errorlog_array[cnt] = fram_read(ERROR_LOG_START_ADDRESS+cnt);
    }

    err_ptr = Find_memroy_location_to_store_error(err_ptr);

    for(cnt = 0;cnt<ERROR_LOG_LENGTH;cnt++)// transfer temporary_array data to winbond memory
    {
        winbond_write(err_ptr+cnt,Errorlog_array[cnt]);
    }

    err_ptr = err_ptr + ERROR_LOG_LENGTH;

    final_errorlog_ptr = 0;
    final_errorlog_ptr = MAX_ERROR_LOG;
    final_errorlog_ptr = final_errorlog_ptr * ERROR_LOG_LENGTH;
    final_errorlog_ptr = final_errorlog_ptr + START_ERRORLOG_LOC_WINBOND;

    if(err_ptr > final_errorlog_ptr)
    {
        err_ptr = START_ERRORLOG_LOC_WINBOND;
    }

    MemoryWriteVariable(PRIMARY_MEMORY, ERROR_LOG_CURRENT_PTR, err_ptr, 4);
}
void Store_one_swwhlog_frame_to_winbond_table(void)
{
    Uint32 swwh_ptr = 0, final_swwhlog_ptr = 0;
    uint8_t cnt = 0;

    swwh_ptr = Get_record_pointer_from_memory(SWWH_LOG_CURRENT_PTR);

    memset(&Swwhlog_array, 0, sizeof(Swwhlog_array));

    for(cnt = 0;cnt < SWWH_LOG_LENGTH;cnt++)//transfer what ever current_cycle_frame_data to one temporary_array
    {
        Swwhlog_array[cnt] = fram_read(SWWH_LOG_START_ADDRESS+cnt);
    }

    swwh_ptr = Find_memroy_location_to_store_swwh(swwh_ptr);

    for(cnt = 0;cnt<SWWH_LOG_LENGTH;cnt++)// transfer temporary_array data to winbond memory
    {
        winbond_write(swwh_ptr+cnt,Swwhlog_array[cnt]);
    }

    swwh_ptr = swwh_ptr + SWWH_LOG_LENGTH;

    final_swwhlog_ptr = 0;
    final_swwhlog_ptr = MAX_SWWH_LOG;
    final_swwhlog_ptr = final_swwhlog_ptr * SWWH_LOG_LENGTH;
    final_swwhlog_ptr = final_swwhlog_ptr + START_SWWHLOG_LOC_WINBOND;

    if(swwh_ptr > final_swwhlog_ptr)
    {
        swwh_ptr = START_SWWHLOG_LOC_WINBOND;
    }

    MemoryWriteVariable(PRIMARY_MEMORY, SWWH_LOG_CURRENT_PTR, swwh_ptr, 4);
}
void Read_all_datalog_frames_from_winbond_table(void)
{
    Uint32 update_record_pointer = 0, report_start_address = 0, report_end_address = 0, final_datalog_ptr = 0;

    Uint32 total_num_of_reports = 0,rep_count = 0;

    update_record_pointer = Get_record_pointer_from_memory(DATA_LOG_CURRENT_PTR);

    if(datalog_overflow == 0)
    {
        report_start_address = START_DATALOG_LOC_WINBOND;
        report_end_address   = update_record_pointer;
        total_num_of_reports = ((report_end_address-report_start_address)/DATA_LOG_LENGTH);
    }
    else
    {
        /* round off to next 4k th memory */
        report_start_address = update_record_pointer;
        report_end_address   = update_record_pointer - DATA_LOG_LENGTH;

        if(report_start_address < START_DATALOG_LOC_WINBOND + 4096)
        {
            report_start_address = START_DATALOG_LOC_WINBOND + 4096;
        }
        else
        {
            report_start_address = (report_start_address - (report_start_address % 4096)) + 4096;
        }

        final_datalog_ptr = 0;
        final_datalog_ptr = MAX_DATA_LOG;
        final_datalog_ptr = final_datalog_ptr * DATA_LOG_LENGTH;
        final_datalog_ptr = final_datalog_ptr + START_DATALOG_LOC_WINBOND;

        final_datalog_ptr = final_datalog_ptr + (report_end_address - START_DATALOG_LOC_WINBOND);

        total_num_of_reports = ((final_datalog_ptr - report_start_address)/DATA_LOG_LENGTH) + 1;

    }

    if(total_num_of_reports==0)/* calculate number of reports to generate for FROM date to TO date */
    {

    }
    else
    {
        for(rep_count=0;rep_count<total_num_of_reports;rep_count++)
        {
            report_start_address = Extract_one_datalog_frame_from_winbond_table(report_start_address);
            Decode_datalog_array();
        }
    }
}

void Read_all_errorlog_frames_from_winbond_table(void)
{
    Uint32 update_record_pointer = 0, report_start_address = 0, report_end_address = 0, final_errorlog_ptr = 0;

    Uint32 total_num_of_reports = 0,rep_count = 0;

    update_record_pointer = Get_record_pointer_from_memory(ERROR_LOG_CURRENT_PTR);

    if(errorlog_overflow == 0)
    {
        report_start_address = START_ERRORLOG_LOC_WINBOND;
        report_end_address   = update_record_pointer;
        total_num_of_reports = ((report_end_address-report_start_address)/ERROR_LOG_LENGTH);
    }
    else
    {
        /* round off to next 4k th memory */
        report_start_address = update_record_pointer;
        report_end_address   = update_record_pointer - ERROR_LOG_LENGTH;

        if(report_start_address < START_ERRORLOG_LOC_WINBOND + 4096)
        {
            report_start_address = START_ERRORLOG_LOC_WINBOND + 4096;
        }
        else
        {
            report_start_address = (report_start_address - (report_start_address % 4096)) + 4096;
        }

        final_errorlog_ptr = 0;
        final_errorlog_ptr = MAX_ERROR_LOG;
        final_errorlog_ptr = final_errorlog_ptr * ERROR_LOG_LENGTH;
        final_errorlog_ptr = final_errorlog_ptr + START_ERRORLOG_LOC_WINBOND;

        final_errorlog_ptr = final_errorlog_ptr + (report_end_address - START_ERRORLOG_LOC_WINBOND);

        total_num_of_reports = ((final_errorlog_ptr - report_start_address)/ERROR_LOG_LENGTH) + 1;

    }

    if(total_num_of_reports==0)/* calculate number of reports to generate for FROM date to TO date */
    {

    }
    else
    {
        for(rep_count=0;rep_count<total_num_of_reports;rep_count++)
        {
            report_start_address = Extract_one_errorlog_frame_from_winbond_table(report_start_address);
            Decode_errorlog_array();
        }
    }
}
void Read_all_swwhlog_frames_from_winbond_table(void)
{
    Uint32 update_record_pointer = 0, report_start_address = 0, report_end_address = 0, final_swwhlog_ptr = 0;

    Uint32 total_num_of_reports = 0,rep_count = 0;

    update_record_pointer = Get_record_pointer_from_memory(SWWH_LOG_CURRENT_PTR);

    if(swwhlog_overflow == 0)
    {
        report_start_address = START_SWWHLOG_LOC_WINBOND;
        report_end_address   = update_record_pointer;
        total_num_of_reports = ((report_end_address-report_start_address)/SWWH_LOG_LENGTH);
    }
    else
    {
        /* round off to next 4k th memory */
        report_start_address = update_record_pointer;
        report_end_address   = update_record_pointer - SWWH_LOG_LENGTH;

        if(report_start_address < START_SWWHLOG_LOC_WINBOND + 4096)
        {
            report_start_address = START_SWWHLOG_LOC_WINBOND + 4096;
        }
        else
        {
            report_start_address = (report_start_address - (report_start_address % 4096)) + 4096;
        }

        final_swwhlog_ptr = 0;
        final_swwhlog_ptr = MAX_SWWH_LOG;
        final_swwhlog_ptr = final_swwhlog_ptr * SWWH_LOG_LENGTH;
        final_swwhlog_ptr = final_swwhlog_ptr + START_SWWHLOG_LOC_WINBOND;

        final_swwhlog_ptr = final_swwhlog_ptr + (report_end_address - START_SWWHLOG_LOC_WINBOND);

        total_num_of_reports = ((final_swwhlog_ptr - report_start_address)/SWWH_LOG_LENGTH) + 1;

    }

    if(total_num_of_reports==0)/* calculate number of reports to generate for FROM date to TO date */
    {

    }
    else
    {
        for(rep_count=0;rep_count<total_num_of_reports;rep_count++)
        {
            report_start_address = Extract_one_swwhlog_frame_from_winbond_table(report_start_address);
            Decode_swwhlog_array();
        }
    }
}
/*  Function name: Extract_one_datalog_frame_from_winbond_table()
 *  In this function actual data read one cycle data stored in winbond memory and transfered to one array i.e datalog_array[].
 */
Uint32 Extract_one_datalog_frame_from_winbond_table(Uint32 report_start_address)
{
    uint16_t  report_count   = 0;
    Uint32 memory_pointer  = 0, final_datalog_ptr = 0;
    uint8_t report_read_char = 0;
    //uint8_t datalog_array[100]   = {0};

    memset(&datalog_array,0,sizeof(datalog_array));

    memory_pointer = report_start_address;
    for(report_count =0;report_count<DATA_LOG_LENGTH;report_count++)
    {
        report_read_char = winbond_read(memory_pointer++);
        datalog_array[report_count] = report_read_char;
    }

    memory_pointer = report_start_address;
    for(report_count =0;report_count<DATA_LOG_LENGTH;report_count++)
    {
        report_read_char = winbond_read(memory_pointer++);
        datalog_array[report_count] = report_read_char;
    }

    report_start_address = report_start_address + DATA_LOG_LENGTH;

    final_datalog_ptr = MAX_DATA_LOG;
    final_datalog_ptr = final_datalog_ptr * DATA_LOG_LENGTH;
    final_datalog_ptr = final_datalog_ptr + START_DATALOG_LOC_WINBOND;

    if(report_start_address >= final_datalog_ptr)
    {
        report_start_address = START_DATALOG_LOC_WINBOND;
    }

    return report_start_address;
}

/*  Function name: Extract_one_errorlog_frame_from_winbond_table()
 *  In this function actual data read one cycle data stored in winbond memory and transfered to one array i.e errorlog_array[].
 */
Uint32 Extract_one_errorlog_frame_from_winbond_table(Uint32 report_start_address)
{
    uint16_t report_count   = 0;
    Uint32   memory_pointer  = 0, final_errorlog_ptr = 0;
    uint8_t  report_read_char = 0;
    //uint8_t errorlog_array[100]   = {0};

    memset(&errorlog_array,0,sizeof(errorlog_array));

    memory_pointer = report_start_address;
    for(report_count =0;report_count<ERROR_LOG_LENGTH;report_count++)
    {
        report_read_char = winbond_read(memory_pointer++);
        errorlog_array[report_count] = report_read_char;
    }

    memory_pointer = report_start_address;
    for(report_count =0;report_count<ERROR_LOG_LENGTH;report_count++)
    {
        report_read_char = winbond_read(memory_pointer++);
        errorlog_array[report_count] = report_read_char;
    }

    report_start_address = report_start_address + ERROR_LOG_LENGTH;

    final_errorlog_ptr = MAX_ERROR_LOG;
    final_errorlog_ptr = final_errorlog_ptr * ERROR_LOG_LENGTH;
    final_errorlog_ptr = final_errorlog_ptr + START_ERRORLOG_LOC_WINBOND;

    if(report_start_address >= final_errorlog_ptr)
    {
        report_start_address = START_ERRORLOG_LOC_WINBOND;
    }

    return report_start_address;
}

/*  Function name: Extract_one_swwhlog_frame_from_winbond_table()
 *  In this function actual data read one cycle data stored in winbond memory and transfered to one array i.e swwhog_array[].
 */
Uint32 Extract_one_swwhlog_frame_from_winbond_table(Uint32 report_start_address)
{
    uint16_t  report_count   = 0;
    Uint32 memory_pointer  = 0, final_swwhlog_ptr = 0;
    uint8_t report_read_char = 0;
    //uint8_t swwhlog_array[100]   = {0};

    memset(&swwhlog_array,0,sizeof(swwhlog_array));

    memory_pointer = report_start_address;
    for(report_count =0;report_count<SWWH_LOG_LENGTH;report_count++)
    {
        report_read_char = winbond_read(memory_pointer++);
        swwhlog_array[report_count] = report_read_char;
    }

    memory_pointer = report_start_address;
    for(report_count =0;report_count<SWWH_LOG_LENGTH;report_count++)
    {
        report_read_char = winbond_read(memory_pointer++);
        swwhlog_array[report_count] = report_read_char;
    }

    report_start_address = report_start_address + SWWH_LOG_LENGTH;

    final_swwhlog_ptr = MAX_SWWH_LOG;
    final_swwhlog_ptr = final_swwhlog_ptr * SWWH_LOG_LENGTH;
    final_swwhlog_ptr = final_swwhlog_ptr + START_SWWHLOG_LOC_WINBOND;

    if(report_start_address >= final_swwhlog_ptr)
    {
        report_start_address = START_SWWHLOG_LOC_WINBOND;
    }

    return report_start_address;
}

Uint32 Read_no_of_logs(Uint32 report_start_addr,Uint32 currnt_ptr,uint16_t log_frame_length)
{
    Uint32 report_end_addr = 0, total_num_of_reports = 0;

	report_end_addr = Get_record_pointer_from_memory(currnt_ptr);

	if(report_end_addr == 0)
	{
		total_num_of_reports = 0;
	}
	else if(report_end_addr != 0)
	{
		if(report_end_addr > report_start_addr)
		{
			total_num_of_reports = ((report_end_addr-report_start_addr)/log_frame_length);
		}
		else if(report_start_addr > report_end_addr)
		{
			total_num_of_reports = ((report_start_addr-report_end_addr)/log_frame_length);
		}
		else{}
	}
	else{}


	return total_num_of_reports;
}

#if 0
/******************added by Rajashekhar on 08.04.2022*********************/
/*This function can write 1,2 and 4 bytes of data at a time*/
void write_fram(Uint32 fram_wr_mem_address,Uint32 data,uint8_t no_of_bytes)
{
	volatile unsigned long memory_pointer = 0;
	volatile unsigned long mem_var_long = 0;

	switch(no_of_bytes)
	{
		case 1:
				memory_pointer = fram_wr_mem_address;
				fram_write(memory_pointer,data);
			break;
		case 2:
				memory_pointer = fram_wr_mem_address;

				mem_var_long = data;
				mem_var_long = mem_var_long>>8;
				mem_var_long &= 0x00ff;
				fram_write(memory_pointer,mem_var_long);
				memory_pointer++;

				mem_var_long = data;
				mem_var_long &= 0x00ff;
				fram_write(memory_pointer,mem_var_long);
			break;
		case 4:	memory_pointer = fram_wr_mem_address;

				mem_var_long = data;
				mem_var_long = mem_var_long>>24;
				mem_var_long &= 0x000000ff;
				fram_write(memory_pointer,mem_var_long);memory_pointer++;

				mem_var_long = data;
				mem_var_long = mem_var_long>>16;
				mem_var_long &= 0x000000ff;
				fram_write(memory_pointer,mem_var_long);memory_pointer++;

				mem_var_long = data;
				mem_var_long = mem_var_long>>8;
				mem_var_long &= 0x000000ff;
				fram_write(memory_pointer,mem_var_long);memory_pointer++;

				mem_var_long = data;
				mem_var_long &= 0x000000ff;
				fram_write(memory_pointer,mem_var_long);
			break;

		default :
			break;
	}
}

/******************added by Rajashekhar on 08.04.2022*********************/
/*This function read 1,2 and 4 bytes of data at a time*/
unsigned long read_fram(Uint32 fram_wr_mem_address,uint8_t no_of_bytes)
{
	volatile unsigned long mem_var_long = 0;
	volatile unsigned char 	mem_var = 0;
	switch(no_of_bytes)
	{
	case 1 :	mem_var_long = fram_read(fram_wr_mem_address);
				break;
	case 2 :	mem_var = fram_read(fram_wr_mem_address);
				mem_var_long = 0;
				mem_var_long = mem_var_long + mem_var;
				mem_var_long &=0x00ff;
				mem_var_long <<=8;
				mem_var = fram_read(fram_wr_mem_address+1);
				mem_var_long = mem_var_long + mem_var;
				mem_var_long &=0xffff;
				break;
	case 4 :	mem_var = fram_read(fram_wr_mem_address);
				mem_var_long = 0;
				mem_var_long = mem_var_long + mem_var;
				mem_var_long &=0x000000ff;
				mem_var_long <<=8;
				mem_var = fram_read(fram_wr_mem_address+1);
				mem_var_long = mem_var_long + mem_var;
				mem_var_long &=0x0000ffff;
				mem_var_long <<=8;
				mem_var = fram_read(fram_wr_mem_address+2);
				mem_var_long = mem_var_long + mem_var;
				mem_var_long &=0x00ffffff;
				mem_var_long <<=8;
				mem_var = fram_read(fram_wr_mem_address+3);
				mem_var_long = mem_var_long + mem_var;
				mem_var_long &=0xffffffff;
				break;
	default:
				break;
	}
	return mem_var_long;
}
#endif
