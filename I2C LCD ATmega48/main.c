#define F_CPU 8000000
#include <util/delay.h>
#include <avr/io.h>
#include "I2C_LCD.h"

int main() {
	
	KT_I2C_LCD_Init();
	
	KT_I2C_LCD_Puts("I2C LCD ATmega48");
	KT_I2C_LCD_NewLine();
	KT_I2C_LCD_Puts("Ngo Hung Cuong");

	while(1) {
	}

	return 0;
}
