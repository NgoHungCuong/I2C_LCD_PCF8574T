#include <regx52.h>

#define uint8_t unsigned char

#include "I2C_LCD.h"

void main(void) {
	
	KT_I2C_LCD_Init();
	
	KT_I2C_LCD_Puts("I2C LCD AT89S52");
	KT_I2C_LCD_NewLine();
	KT_I2C_LCD_Puts("Ngo Hung Cuong");
	
	while(1) {
		
	}
}
