#ifndef _KT_I2C_LCD_CFG_
	#define _KT_I2C_LCD_CFG_
	/*
	#define SDA_1 GPIO_SetBits(GPIOB, GPIO_Pin_7)
	#define SDA_0 GPIO_ResetBits(GPIOB, GPIO_Pin_7)
	#define SCL_1 GPIO_SetBits(GPIOB, GPIO_Pin_6)
	#define SCL_0 GPIO_ResetBits(GPIOB, GPIO_Pin_6)

	#define SDA_VAL GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_7)
	*/
	/*
    #define SDA_1 GPIO_WriteHigh(GPIOD, GPIO_PIN_4)
	#define SDA_0 GPIO_WriteLow(GPIOD, GPIO_PIN_4)
	#define SCL_1 GPIO_WriteHigh(GPIOD, GPIO_PIN_5)
	#define SCL_0 GPIO_WriteLow(GPIOD, GPIO_PIN_5)
	#define SDA_VAL GPIO_ReadInputPin(GPIOD, GPIO_PIN_4)
	*/
	#define SDA_1 DDRC&=0xEF
	#define SDA_0 DDRC|=0x10
	#define SCL_1 DDRC&=0xDF
	#define SCL_0 DDRC|=0x20
	#define SDA_VAL PINC&0x10

	void Delay10us(void);
	#define I2C_LCD_ADDR 0x4E
	#define LCD_EN 2
	#define LCD_RW 1
	#define LCD_RS 0
	#define LCD_D4 4
	#define LCD_D5 5
	#define LCD_D6 6
	#define LCD_D7 7
	#define LCD_BL 3
#endif
