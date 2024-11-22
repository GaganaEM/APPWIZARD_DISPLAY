/*
 * usb_user_app_struct_union.h
 *
 *  Created on: 19-Oct-2021
 *      Author: admin
 */

#ifndef FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_STRUCT_UNION_H_
#define FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_STRUCT_UNION_H_


struct dmlog_frame1
{
	uint64_t
	year		:8,
	month		:8,
	date		:8,
	hour		:8,
	minute		:8,
	second		:8,
	source_addr	:8;
};

struct dmlog_frame2
{
	uint64_t
	plug_id		:8,
	status		:8,
	spn			:19,
	fmi			:5,
	occur_count	:8,
	lamp_status	:8;
};

union _dmlog_frame
{
	uint64_t all;
	struct dmlog_frame1 frame1;
	struct dmlog_frame2 frame2;
};

struct tpbuffer
{
    uint64_t
    tpmsgbyte8  : 8,
    tpmsgbyte7  : 8,
    tpmsgbyte6  : 8,
    tpmsgbyte5  : 8,
    tpmsgbyte4  : 8,
    tpmsgbyte3  : 8,
    tpmsgbyte2  : 8,
    tpmsgbyte1  : 8;
};

union tpbuffer_u {
    uint64_t  all;
    struct tpbuffer  byte;
};



#endif /* FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_STRUCT_UNION_H_ */
