################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/enc_basic.c \
../source/semihost_hardfault.c 

C_DEPS += \
./source/enc_basic.d \
./source/semihost_hardfault.d 

OBJS += \
./source/enc_basic.o \
./source/semihost_hardfault.o 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MIMXRT1052DVL6B -DCPU_MIMXRT1052DVL6B_cm7 -DSDK_DEBUGCONSOLE=1 -DXIP_EXTERNAL_FLASH=1 -DXIP_BOOT_HEADER_ENABLE=1 -DPRINTF_ADVANCED_ENABLE=1 -DMCUXPRESSO_SDK -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\source" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\drivers" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\utilities" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\device" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\component\uart" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\component\lists" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\xip" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\CMSIS" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\board" -I"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\evkbimxrt1050_enc_basic\evkbimxrt1050\driver_examples\enc\basic" -O0 -fno-common -g3 -gdwarf-4 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m7 -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-source

clean-source:
	-$(RM) ./source/enc_basic.d ./source/enc_basic.o ./source/semihost_hardfault.d ./source/semihost_hardfault.o

.PHONY: clean-source
