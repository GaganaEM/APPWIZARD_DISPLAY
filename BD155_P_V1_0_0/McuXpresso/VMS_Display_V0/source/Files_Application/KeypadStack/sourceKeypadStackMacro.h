#ifndef FILES_APPLICATION_SOURCEKEYPADSTACKMACRO_H_
#define FILES_APPLICATION_SOURCEKEYPADSTACKMACRO_H_

#define ROW	5//4
#define COL	2 //2

#define SHORT_DB	1
#define NORMAL_DB	2
#define LONG_DB		100
#define MAX_DB		500

//#define ROW1_HIGH  GPIO_WritePinOutput(GPIO1, 3, 1)
//#define ROW1_LOW   GPIO_WritePinOutput(GPIO1, 3, 0)

#define ROW1_HIGH  GPIO_WritePinOutput(GPIO1, 22, 1)
#define ROW1_LOW   GPIO_WritePinOutput(GPIO1, 22, 0)

#define ROW2_HIGH  GPIO_WritePinOutput(GPIO1, 26, 1)
#define ROW2_LOW   GPIO_WritePinOutput(GPIO1, 26, 0)

#define ROW3_HIGH  GPIO_WritePinOutput(GPIO1, 1, 1)
#define ROW3_LOW   GPIO_WritePinOutput(GPIO1, 1, 0)

//#define ROW3_HIGH  GPIO_WritePinOutput(GPIO1, 24, 1)
//#define ROW3_LOW   GPIO_WritePinOutput(GPIO1, 24, 0)

#define ROW4_HIGH  GPIO_WritePinOutput(GPIO1, 0, 1)
#define ROW4_LOW   GPIO_WritePinOutput(GPIO1, 0, 0)

#define COL1_READ  GPIO_ReadPadStatus(GPIO1, 18)
#define COL2_READ  GPIO_ReadPadStatus(GPIO1, 27) //19 //GPIO1, 16
#define COL3_READ  GPIO_ReadPadStatus(GPIO1, 23)

#define ROW1_READ  GPIO_ReadPadStatus(GPIO2, 22)
#define ROW2_READ  GPIO_ReadPadStatus(GPIO2, 23) //19 //GPIO1, 16
#define ROW3_READ  GPIO_ReadPadStatus(GPIO2, 24)
#define ROW4_READ  GPIO_ReadPadStatus(GPIO2, 25) //19 //GPIO1, 16
#define ROW5_READ  GPIO_ReadPadStatus(GPIO2, 26)

#define COL1_HIGH  GPIO_WritePinOutput(GPIO2, 20, 1)
#define COL1_LOW   GPIO_WritePinOutput(GPIO2, 20, 0)

#define COL2_HIGH  GPIO_WritePinOutput(GPIO2, 21, 1)
#define COL2_LOW   GPIO_WritePinOutput(GPIO2, 21, 0)

//#define AIN_SEL_IN1_HIGH GPIO_WritePinOutput(GPIO1, 31, 1)

#define WINBOND_CS_HIGH GPIO_WritePinOutput(GPIO1, 31, 1)
#define WINBOND_CS_LOW  GPIO_WritePinOutput(GPIO1, 31, 0)

#define AIN_SEL_IN2_HIGH GPIO_WritePinOutput(GPIO1, 22, 1)
#define AIN_SEL_IN2_LOW  GPIO_WritePinOutput(GPIO1, 22, 0)

#define SPI_CLK_HIGH GPIO_WritePinOutput(GPIO1, 21, 1)
#define SPI_CLK_LOW  GPIO_WritePinOutput(GPIO1, 21, 0)

//#define SPI_DIN_HIGH GPIO_WritePinOutput(GPIO1, 20, 1)
//#define SPI_DIN_LOW  GPIO_WritePinOutput(GPIO1, 20, 0)

#define SPI_DATA_IN GPIO_ReadPadStatus(GPIO1, 20)


#define SPI_DOUT_HIGH  GPIO_WritePinOutput(GPIO3, 26, 1)
#define SPI_DOUT_LOW   GPIO_WritePinOutput(GPIO3, 26, 0)

#define SPI_CS_HIGH  GPIO_WritePinOutput(GPIO1, 30, 1)
#define SPI_CS_LOW   GPIO_WritePinOutput(GPIO1, 30, 0)

#define SPI_CS_HIGH_MEM  GPIO_WritePinOutput(GPIO1, 29, 1)
#define SPI_CS_LOW_MEM   GPIO_WritePinOutput(GPIO1, 29, 0)

/****************************************************************************/

#define AIN_MUX_A0_HIGH GPIO_WritePinOutput(GPIO1, 18, 1)
#define AIN_MUX_A0_LOW  GPIO_WritePinOutput(GPIO1, 18, 0)

#define AIN_MUX_A1_HIGH GPIO_WritePinOutput(GPIO1, 23, 1)
#define AIN_MUX_A1_LOW  GPIO_WritePinOutput(GPIO1, 23, 0)

/* commented by Rajashekhar for Buzzer
#define AIN_MUX_A2_HIGH GPIO_WritePinOutput(GPIO2, 27, 1)
#define AIN_MUX_A2_LOW  GPIO_WritePinOutput(GPIO2, 27, 0)
*/

#define BUZZER_ON 		GPIO_WritePinOutput(GPIO2, 27, 1)
#define BUZZER_OFF		GPIO_WritePinOutput(GPIO2, 27, 0)

#define KEY_ONE 	1
#define KEY_TWO 	2
#define KEY_THREE 	3
#define KEY_FOUR 	4
#define KEY_MENU	5
#define KEY_FIVE	6
#define KEY_SIX 	7
#define KEY_SEVEN 	8
#define KEY_EIGHT 	9
#define KEY_ENTER 	10
#endif
