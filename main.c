#include "stm32f7xx.h"                  // Device header
#include "Clock.h"
#include "SysTimer.h"
#include "LED.h"

uint32_t delay_count = 0;
uint8_t flag = 0;

void SysTick_Handler(void)
{
	if(delay_count > 0)
	{
		delay_count--;
	}
	else {flag = 1;}
	
}

int main(void)
{
	Clock_ini();
	SysTick_ini();
	LED_ini();
	
	while(1) 
	{
		if (flag == 1)
		{
			GPIOB->ODR ^= GPIO_ODR_ODR_7;
			delay_count = 20;
		}			
	}
}

