#define STM32F051
#include <stdint.h>
#include "stm32f0xx.h"

void init_leds();

void main()
{
	init_leds();
	//init_buttons();

	while(1)
	{
		// Switch GPIOB pins 0-7 on
		GPIOB->ODR = 0xFF;
	}
}

void init_leds()
{
	// Enable GPIOB clock
	RCC->AHBENR |= RCC_AHBENR_GPIOBEN;


	// Setup GPIOB pins 0-7 as outputs
	GPIOB->MODER |= GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 | GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0;
	GPIOB->MODER |= GPIO_MODER_MODER4_0 | GPIO_MODER_MODER5_0 | GPIO_MODER_MODER6_0 | GPIO_MODER_MODER7_0;



}
