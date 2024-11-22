#include "sourceKeypadGpio.h"

#include "../Files_Header/sourceMacro.h"
#include "../Files_Header/sourceExternVariable.h"

void KeypadPinConfiguration(void);

void KeypadPinConfiguration(void)
{
    gpio_pin_config_t config_op = {
        kGPIO_DigitalOutput,
        0,
        kGPIO_NoIntmode,
    };

    gpio_pin_config_t config_ip = {
    kGPIO_DigitalInput,
    1,
    kGPIO_NoIntmode,
    };


    GPIO_PinInit(GPIO2, 20,&config_op);  //c1
    GPIO_PinInit(GPIO2, 21,&config_op);  //c2

    GPIO_PinInit(GPIO2, 22,&config_ip); //R1
    GPIO_PinInit(GPIO2, 23,&config_ip); //R2
    GPIO_PinInit(GPIO2, 24,&config_ip); //R3
    GPIO_PinInit(GPIO2, 25,&config_ip); //R4
    GPIO_PinInit(GPIO2, 26,&config_ip); //R5

//    GPIO_PinInit(GPIO1, 31,&config_op);  //AIN_SEL_IN1
    GPIO_PinInit(GPIO1, 31,&config_op);  //WINBOND_CS
    GPIO_PinInit(GPIO1, 22,&config_op);  //AIN_SEL_IN1
    GPIO_PinInit(GPIO1, 18,&config_op);  //AIN_MUX_A0
    GPIO_PinInit(GPIO1, 23,&config_op);  //AIN_MUX_A1
    GPIO_PinInit(GPIO2, 27,&config_op);  //AIN_MUX_A2


    GPIO_PinInit(GPIO1, 21,&config_op);   //SPI_CLK
    GPIO_PinInit(GPIO1, 20,&config_ip);   //SPI_DIN
    GPIO_PinInit(GPIO3, 26,&config_op);   //SPI_DOUT
    GPIO_PinInit(GPIO1, 30,&config_op);   //CS
    GPIO_PinInit(GPIO1, 29,&config_op);   //MEM_CS
    GPIO_PinInit(GPIO3, 27,&config_op);   //FREQ OUT






//    GPIO_PinInit(GPIO2, 22,&config_op);
//    GPIO_PinInit(GPIO2, 23,&config_op);
//    GPIO_PinInit(GPIO2, 24,&config_op);
//    GPIO_PinInit(GPIO2, 25,&config_op);
//    GPIO_PinInit(GPIO2, 26,&config_op);


/*
    GPIO_PinInit(GPIO1, 0, &config_op); 	//R4 - GPIO_AD_B0_00    J24 pin10
//    GPIO_PinInit(GPIO1, 1, &config_op); 	//R3 - GPIO_AD_B0_01
    GPIO_PinInit(GPIO1, 26,&config_op);		//R2 - GPIO_AD_B1_10    J23 pin1
//    GPIO_PinInit(GPIO1, 3, &config_op); 	//R1 - GPIO_AD_B0_03

    GPIO_PinInit(GPIO1, 23,&config_ip); 	//C3 - GPIO_AD_B1_07     J22 pin 1
    GPIO_PinInit(GPIO1, 18,&config_ip); 	//C1 - GPIO_AD_B1_02     J22 pin7
//    GPIO_PinInit(GPIO1, 19,&config_ip); 	//C2 - GPIO_AD_B1_03     J22 pin8

    GPIO_PinInit(GPIO1, 24, &config_op); //R3   GPIO_AD_B1_08        J22 pin4
    GPIO_PinInit(GPIO1, 22, &config_op); //R1   GPIO_AD_B1_06        J22 pin2

    GPIO_PinInit(GPIO1, 27,&config_ip); 	//C2 - GPIO_AD_B1_11     J23 pin2
    */
}
