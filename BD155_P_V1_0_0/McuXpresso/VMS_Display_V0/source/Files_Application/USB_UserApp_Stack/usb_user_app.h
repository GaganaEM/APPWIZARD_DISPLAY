/*
 * usb_user_app.h
 *
 *  Created on: 19-Oct-2021
 *      Author: admin
 */

#ifndef FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_H_
#define FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_H_

uint16_t convert_load_to_buffer(uint8_t *pbuf,uint16_t data_offset,uint32_t hex_value);
uint8_t *spn_fmi_decode(uint32_t llspn,uint8_t lcfmi);
void write_value_to_usb(uint32_t hex_value,uint8_t *seperator);
void write_string_to_usb(uint8_t *pstr,uint8_t *seperator);
void filename_creation(uint8_t *filename);
void load_date(void);
void log_data_to_usb(void);
void log_raw_can_data(void);

uint8_t hexa_ascii_hex(unsigned char hexbyte);
void hex_buff(unsigned char *a);
void hex_display(unsigned long hex_data);
uint8_t hex2ascii(uint32_t hex_value);
void load_test_data_dmlog(void);
uint8_t *source_addr_decode(uint8_t sa);
void scale_parameter_send_usb(uint32_t value,uint16_t divisor);
void decode_data(uint8_t *data,uint8_t no_of_bytes);
void log_data_to_usb_in_csv(uint8_t log_data_type);
void read_rawcandata_frame_from_memory_log2_usb(uint32_t start_addr,uint16_t no_of_frame);
void read_failure_dmlog_frame_from_memory_log2_usb(uint32_t start_addr,uint16_t total_frame_received);
void read_minmaxlog_frame_from_memory_log2_usb(uint32_t start_addr, uint16_t total_no_log_frame);

extern void log_data_to_usb(void);

uint8_t *pendrive_filename_creation(uint8_t *filename);
#endif /* FILES_APPLICATION_USB_USERAPP_STACK_USB_USER_APP_H_ */
