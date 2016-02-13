#ifndef _KT_I2C_LCD_
	#define _KT_I2C_LCD_
	void KT_I2C_LCD_Init(void);
	void KT_I2C_LCD_WriteCmd(uint8_t u8Cmd);
	void KT_I2C_LCD_Puts(char *szStr);
	void KT_I2C_LCD_Clear(void);
	void KT_I2C_LCD_NewLine(void);
	void KT_I2C_LCD_BackLight(uint8_t u8BackLight);
#endif
