################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include xip/subdir.mk
-include utilities/subdir.mk
-include usb/phy/subdir.mk
-include usb/host/class/subdir.mk
-include usb/host/subdir.mk
-include touchpanel/subdir.mk
-include startup/subdir.mk
-include source/Files_Peripheral/subdir.mk
-include source/Files_Driver/subdir.mk
-include source/Files_Application/USB_UserApp_Stack/subdir.mk
-include source/Files_Application/KeypadStack/subdir.mk
-include source/Files_Application/J1939Stack/subdir.mk
-include source/Files_Application/subdir.mk
-include source/subdir.mk
-include sdmmc/src/subdir.mk
-include sdmmc/osa/subdir.mk
-include sdmmc/host/subdir.mk
-include fatfs/source/fsl_usb_disk/subdir.mk
-include fatfs/source/fsl_sd_disk/subdir.mk
-include fatfs/source/fsl_ram_disk/subdir.mk
-include fatfs/source/subdir.mk
-include drivers/subdir.mk
-include device/subdir.mk
-include component/uart/subdir.mk
-include component/osa/subdir.mk
-include component/lists/subdir.mk
-include board/subdir.mk
-include AppWizard/Source/Generated/subdir.mk
-include AppWizard/Source/CustomCode/subdir.mk
-include AppWizard/Source/subdir.mk
-include AppWizard/Resource/Text/subdir.mk
-include AppWizard/Resource/Image/subdir.mk
-include AppWizard/Resource/Font/subdir.mk
-include AppWizard/subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := VMS_Display_V0
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: VMS_Display_V0.axf

# Tool invocations
VMS_Display_V0.axf: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"D:\Gagana\VMS_HMI_TEST_SOFTWARE_DEVLOPMENT\20240403\VMS_HMI_DISPLAY_SW\BD155_P_V1_0_0\McuXpresso\VMS_Display_V0\emwin\emWin_library\MCUXpresso" -Xlinker -Map="VMS_Display_V0.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m7 -mthumb -T VMS_Display_V0_Debug.ld -o "VMS_Display_V0.axf" $(OBJS) $(USER_OBJS) $(LIBS) -lemWin_M7
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) VMS_Display_V0.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "VMS_Display_V0.axf"; # arm-none-eabi-objcopy -v -O binary "VMS_Display_V0.axf" "VMS_Display_V0.bin" ; # checksum -p MIMXRT1052xxxxB -d "VMS_Display_V0.bin";
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets
