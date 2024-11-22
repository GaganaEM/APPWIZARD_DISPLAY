/*
 * usb_user_app_macro.h
 *
 *  Created on: 19-Oct-2021
 *      Author: admin
 */

#ifndef FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_MACRO_H_
#define FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_MACRO_H_

#include "../../source/Files_Header/sourceMacro.h"

#define YEAR20_OFFSET 		0
#define YEAR_OFFSET   		2
#define	MONTH_OFFSET  		5
#define	DATE_OFFSET  		7
#define	HOUR_OFFSET  		9
#define	MINUTE_OFFSET  		11
#define	SECOND_OFFSET  		13
#define	SOURCE_NAME_OFFSET  15
#define	PLUG_ID_OFFSET  	31
#define	SOURCE_ADDR_OFFSET  34
#define	STATUS_OFFSET  		37
#define	SPN_OFFSET  		39
#define	FMI_OFFSET  		45
#define	OCCUR_CNT_OFFSET  	48
#define	LAMP_STATUS_OFFSET  51

#define USB_NEW_LINE f_write(&file,new_line_str, sizeof(new_line_str), (UINT *)&resultSize)
#define RAWCANDATA_FRAME_SIZE 	12//16 //pgn= 4, DATABYTES = 8 //4- reserved
#define DM_LOG_FRAME_SIZE 		14
#define MINMAX_LOG_FRAME_SIZE 	105


#endif /* FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_MACRO_H_ */
