#include "stm32f7xx.h"                  // Device header
#include "Clock.h"
#include "SysTimer.h"
#include "LED.h"

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
		}			
	}
}

