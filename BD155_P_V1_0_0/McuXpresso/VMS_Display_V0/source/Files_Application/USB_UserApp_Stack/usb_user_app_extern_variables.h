/*
 * usb_user_app_extern_variables.h
 *
 *  Created on: 19-Oct-2021
 *      Author: admin
 */

#ifndef FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_EXTERN_VARIABLES_H_
#define FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_EXTERN_VARIABLES_H_

#include "ff.h"
//#include "usb.h"
//#include "host_msd_fatfs.h"

extern FRESULT fatfsCode;
extern FATFS *fs;
extern FIL file;
extern FILINFO fileInfo;
extern uint32_t freeClusterNumber;
extern uint32_t index;
extern uint32_t resultSize;
extern int8_t *testString;
extern uint8_t driverNumberBuffer[3];

extern struct
{
	uint8_t Date;
	uint8_t Month;
	uint16_t Year;
	uint8_t Hour;
	uint8_t Minute;
	uint8_t Second;
	uint8_t Meredian;
}strDateTime;

//extern usb_host_handle g_HostHandle;
//extern usb_host_msd_fatfs_instance_t g_MsdFatfsInstance;
extern unsigned int  guiLogFileSize;
extern unsigned char TempArray[5000][12];
extern bool bStartRawFrameLog;
volatile extern unsigned char gucRecTimeCount;
extern unsigned char gucRecordingStatus;
//extern unsigned char gucRecTimeCount;
extern unsigned int guiRawLogCount;
extern unsigned char gucCopyStatus;
//extern unsigned char power_on_SD;
//extern unsigned char SDCardfuncBegin;
#endif /* FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_EXTERN_VARIABLES_H_ */
