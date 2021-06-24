#include "stm32f7xx.h"                  // Device header

volatile uint8_t i = 0;									// volatile - is not affected by compliler

int main(void)
{
	while(1)
	{
		i++;
	}
}
