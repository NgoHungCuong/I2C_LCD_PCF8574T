#ifndef _KT_I2C_LCD_CFG_
	#define _KT_I2C_LCD_CFG_
	
	#define SDA_1 GPIO_SetBits(GPIOB, GPIO_PIN_7)
	#define SDA_0 GPIO_ResetBits(GPIOB, GPIO_PIN_7)
	#define SCL_1 GPIO_SetBits(GPIOB, GPIO_PIN_6)
	#define SCL_0 GPIO_ResetBits(GPIOB, GPIO_PIN_6)

	#define SDA_VAL GPIO_ReadInputBit(GPIOB, GPIO_PIN_7)
	
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
