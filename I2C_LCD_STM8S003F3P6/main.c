#include "stm8s.h"

#include "i2c_lcd.h"

void main(void) {

	GPIO_DeInit(GPIOD);
	GPIO_Init(GPIOD, GPIO_PIN_3, GPIO_MODE_OUT_PP_LOW_FAST);
	GPIO_Init(GPIOD, GPIO_PIN_2, GPIO_MODE_OUT_PP_LOW_FAST);
    
    KT_I2C_LCD_Init();
	
	KT_I2C_LCD_Puts("I2C LCD STM8S003");
	KT_I2C_LCD_NewLine();
	KT_I2C_LCD_Puts("Ngo Hung Cuong");
    //KT_I2C_LCD_BackLight(1);
    // Infinite loop.
    while(1) {
      /*
        // Delay for a short while.
        u16 d;
        for (d = 0; d < 20000; ++d) {
            // Without a nop() in here, the entire loop would be optimised away!
            nop();
        }
		GPIO_WriteReverse(GPIOD, GPIO_PIN_3);
		GPIO_WriteReverse(GPIOD, GPIO_PIN_2);
      */
    }
	
}

void assert_failed(u8* file, u32 line) { 
	/* User can add his own implementation to report the file name and line number,
	ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
	/* Infinite loop */
	while (1) {
	}
}
