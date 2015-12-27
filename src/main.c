/****************************************************************************
* Test the firmware works normally or not.
*
*****************************************************************************/

#include "includes.h"

int main(int argc, char *argv[])
{
 	GPIO_InitTypeDef GPIO_InitStructure;
 	u32 delay;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 ;//| GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	while(1)
	{
		GPIO_WriteBit(GPIOC,GPIO_Pin_8,Bit_SET); //LED off
//		GPIO_WriteBit(GPIOC,GPIO_Pin_9,Bit_SET); //LED off

		/* delay --> compiler optimizer settings must be "-O0" */
		delay=500000;
		while(delay)
		{
			delay--;
		}

		GPIO_WriteBit(GPIOC,GPIO_Pin_8,Bit_RESET); //LED on
//		GPIO_WriteBit(GPIOC,GPIO_Pin_9,Bit_RESET); //LED on

		/* delay --> compiler optimizer settings must be "-O0" */
		delay=500000;
		while(delay)
		{
			delay--;
		}
	}
}
