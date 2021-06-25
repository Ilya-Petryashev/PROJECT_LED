#include "SysTimer.h"

uint32_t delay_count = 0;
uint8_t flag = 0;

//#define CLKSOURCE (0 << 2)
//#define TICKINT	(1 << 1)
//#define ENABLE	(1 << 0)

void SysTick_Handler(void)
{
	if(delay_count > 0)
	{
		delay_count--;
	}
	else{flag = 1;}
	
}
//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
void delay_ms(uint32_t delay_temp)
{
	delay_count = delay_temp;
	while(delay_count) {}
}
//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
void Init_SysTick(void)
{
//	SysTick_Type Init_SysTick;
//	Init_SysTick.LOAD = (1000000/1000)-1;
//	Init_SysTick.CTRL |=  CLKSOURCE | TICKINT | ENABLE;
	
//	SysTick->LOAD = (1000000/1000)-1;
//	SysTick->CTRL |=  CLKSOURCE | TICKINT | ENABLE;
	
	SysTick->LOAD = (1000000/1000)-1;
	SysTick->CTRL |=  SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk;
	SysTick->CTRL &=  ~(SysTick_CTRL_COUNTFLAG_Msk);
}
 
