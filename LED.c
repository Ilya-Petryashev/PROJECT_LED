#include "LED.h"

void LED_ini(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN; 	//enabled clock for GPIOB
	
	GPIOB->MODER = GPIO_MODER_MODER7_0;		//PB7 works in output mode
	GPIOB->OTYPER = 0x00000000;				//output type - push-pull (HL - 1, LL - 0) - reset value
	GPIOB->OSPEEDR = 0x000000C0;			//output speed - low - reset value
	GPIOB->PUPDR = 0x00000100;				//no pull-up, no pull-down - reset value
}
