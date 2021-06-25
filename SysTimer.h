#ifndef SysTimer_H
#define SysTimer_H
#endif

#include "stm32f7xx.h"

void SysTick_ini(void);
void SysTick_Handler(void);

uint32_t delay_count = 0;
uint8_t flag = 0;
