################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_adc.c \
../drivers/fsl_cache.c \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_common_arm.c \
../drivers/fsl_elcdif.c \
../drivers/fsl_enc.c \
../drivers/fsl_flexcan.c \
../drivers/fsl_gpio.c \
../drivers/fsl_gpt.c \
../drivers/fsl_lpi2c.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_pwm.c \
../drivers/fsl_pxp.c \
../drivers/fsl_qtmr.c \
../drivers/fsl_usdhc.c \
../drivers/fsl_xbara.c 

C_DEPS += \
./drivers/fsl_adc.d \
./drivers/fsl_cache.d \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_common_arm.d \
./drivers/fsl_elcdif.d \
./drivers/fsl_enc.d \
./drivers/fsl_flexcan.d \
./drivers/fsl_gpio.d \
./drivers/fsl_gpt.d \
./drivers/fsl_lpi2c.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_pwm.d \
./drivers/fsl_pxp.d \
./drivers/fsl_qtmr.d \
./drivers/fsl_usdhc.d \
./drivers/fsl_xbara.d 

OBJS += \
./drivers/fsl_adc.o \
./drivers/fsl_cache.o \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_common_arm.o \
./drivers/fsl_elcdif.o \
./drivers/fsl_enc.o \
./drivers/fsl_flexcan.o \
./drivers/fsl_gpio.o \
./drivers/fsl_gpt.o \
./drivers/fsl_lpi2c.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_pwm.o \
./drivers/fsl_pxp.o \
./drivers/fsl_qtmr.o \
./drivers/fsl_usdhc.o \
./drivers/fsl_xbara.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MIMXRT1052DVL6B -DCPU_MIMXRT1052DVL6B_cm7 -D_DEBUG=1 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DUSB_STACK_BM -DPRINTF_ADVANCED_ENABLE=1 -DFSL_OSA_BM_TASK_ENABLE=0 -DFSL_OSA_BM_TIMER_CONFIG=0 -DFSL_SDK_ENABLE_DRIVER_CACHE_CONTROL=1 -DSD_ENABLED -DMCUXPRESSO_SDK -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DXIP_BOOT_HEADER_DCD_ENABLE=1 -DSKIP_SYSCLK_INIT -DDATA_SECTION_IS_CACHEABLE=1 -DAPPWIZARD -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\board" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\source" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\fatfs\source\fsl_ram_disk" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\usb\host" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\usb\include" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\usb\phy" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\drivers" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\touchpanel" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\utilities" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\usb\host\class" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\fatfs\source" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\fatfs\source\fsl_sd_disk" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\sdmmc\inc" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\sdmmc\host" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\sdmmc\osa" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\sdmmc\sd" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\fatfs\source\fsl_usb_disk" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\emwin\emWin_header" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\emwin\emWin_Config" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\device" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\component\uart" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\component\lists" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\xip" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\component\osa" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\CMSIS" -O0 -fno-common -g3 -gdwarf-4 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-drivers

clean-drivers:
	-$(RM) ./drivers/fsl_adc.d ./drivers/fsl_adc.o ./drivers/fsl_cache.d ./drivers/fsl_cache.o ./drivers/fsl_clock.d ./drivers/fsl_clock.o ./drivers/fsl_common.d ./drivers/fsl_common.o ./drivers/fsl_common_arm.d ./drivers/fsl_common_arm.o ./drivers/fsl_elcdif.d ./drivers/fsl_elcdif.o ./drivers/fsl_enc.d ./drivers/fsl_enc.o ./drivers/fsl_flexcan.d ./drivers/fsl_flexcan.o ./drivers/fsl_gpio.d ./drivers/fsl_gpio.o ./drivers/fsl_gpt.d ./drivers/fsl_gpt.o ./drivers/fsl_lpi2c.d ./drivers/fsl_lpi2c.o ./drivers/fsl_lpuart.d ./drivers/fsl_lpuart.o ./drivers/fsl_pwm.d ./drivers/fsl_pwm.o ./drivers/fsl_pxp.d ./drivers/fsl_pxp.o ./drivers/fsl_qtmr.d ./drivers/fsl_qtmr.o ./drivers/fsl_usdhc.d ./drivers/fsl_usdhc.o ./drivers/fsl_xbara.d ./drivers/fsl_xbara.o

.PHONY: clean-drivers

