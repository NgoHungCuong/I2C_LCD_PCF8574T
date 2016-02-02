/**
  ******************************************************************************
  * @file    SysTick/Systick_demo/main.c
  * @author  MCU SD
  * @version V1.0
  * @date    26-Dec-2014
  * @brief   The main function file.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "gd32f10x.h"
#include <stdio.h>
#include "systick.h"
#include "I2C_LCD.h"

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Configure the GPIO ports.
  * @param  None
  * @retval None
  */
void LED_config(void)
{    
    GPIO_InitPara GPIO_InitStructure;

    RCC_APB2PeriphClock_Enable(RCC_APB2PERIPH_GPIOC,ENABLE);

    GPIO_InitStructure.GPIO_Pin   = GPIO_PIN_13;
    GPIO_InitStructure.GPIO_Speed = GPIO_SPEED_50MHZ;
    GPIO_InitStructure.GPIO_Mode  = GPIO_MODE_OUT_PP;

    GPIO_Init(GPIOC,&GPIO_InitStructure);
	
	GPIO_ResetBits(GPIOC, GPIO_PIN_13);
	//khoi tao nut bam
	//co 2 nut bam
	//nut bam noi vao PA0 va PA1
	RCC_APB2PeriphClock_Enable(RCC_APB2PERIPH_GPIOA,ENABLE);

    GPIO_InitStructure.GPIO_Pin   = GPIO_PIN_0 | GPIO_PIN_1;
    GPIO_InitStructure.GPIO_Speed = GPIO_SPEED_50MHZ;
    GPIO_InitStructure.GPIO_Mode  = GPIO_MODE_IN_FLOATING;

    GPIO_Init(GPIOA,&GPIO_InitStructure);
}


/**
  * @brief  Toggle the LED every 500ms.
  * @param  None
  * @retval None
  */

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */

void Delay(void) {
	uint32_t i;
	
	for(i=0; i<120; ++i) {
		
	}
}

uint8_t u8LedState=0;
uint8_t u8Bl=0;

int main(void)
{
    LED_config();
	
	KT_I2C_LCD_Init();
	KT_I2C_LCD_Puts("(Ngo Hung Cuong)");
	KT_I2C_LCD_NewLine();
	KT_I2C_LCD_Puts("Electronics :-)");
	u8Bl=1;
	KT_I2C_LCD_BackLight(1);
    while (1)
    {
		if(!GPIO_ReadInputBit(GPIOA, GPIO_PIN_0)) {
			Delay();
			if(!GPIO_ReadInputBit(GPIOA, GPIO_PIN_0)) {
				while(!GPIO_ReadInputBit(GPIOA, GPIO_PIN_0));
				if(u8LedState) {
					u8LedState=0;
					GPIO_ResetBits(GPIOC, GPIO_PIN_13);
					KT_I2C_LCD_Clear();
					KT_I2C_LCD_Puts("Ngo Hung Cuong");
					KT_I2C_LCD_NewLine();
					KT_I2C_LCD_Puts("Led is ON");
					
				} else {
					u8LedState=1;
					GPIO_SetBits(GPIOC, GPIO_PIN_13);
					KT_I2C_LCD_Clear();
					KT_I2C_LCD_Puts("Electronics");
					KT_I2C_LCD_NewLine();
					KT_I2C_LCD_Puts("Led is OFF");
				}
			}
		}
		
		if(!GPIO_ReadInputBit(GPIOA, GPIO_PIN_1)) {
			Delay();
			if(!GPIO_ReadInputBit(GPIOA, GPIO_PIN_1)) {
				while(!GPIO_ReadInputBit(GPIOA, GPIO_PIN_1));
				if(u8Bl) {
					u8Bl=0;
					KT_I2C_LCD_BackLight(0);
				} else {
					u8Bl=1;
					KT_I2C_LCD_BackLight(1);
				}
			}
		}
    }
}




/******************* (C) COPYRIGHT 2014 GIGADEVICE *****END OF FILE****/    
