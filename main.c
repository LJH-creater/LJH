#include "stm32f10x.h"   // �൱��51��Ƭ���е�  #include <reg51.h>
#include "bsp_led.h"
#include "bsp_key.h"
#include "motor.h"


void Delay( uint32_t count )
{
	for(; count!=0; count--);
}

int main(void)
{
	// ���������ʱ��ϵͳ��ʱ���Ѿ������ó�72M��
	LED_GPIO_Config();
	KEY_GPIO_Config();
	motor_Init();
	
	while(1)
	{
		GPIO_SetBits(GPIOE,GPIO_Pin_13);
		GPIO_ResetBits(GPIOE,GPIO_Pin_11);
	  Delay(500);
		GPIO_ResetBits(GPIOE,GPIO_Pin_13);
		GPIO_ResetBits(GPIOE,GPIO_Pin_11);
		Delay(1000);
		/*GPIO_SetBits(GPIOE,GPIO_Pin_11);
		GPIO_ResetBits(GPIOE,GPIO_Pin_13);
		Delay(500);
		GPIO_ResetBits(GPIOE,GPIO_Pin_11);
		GPIO_ResetBits(GPIOE,GPIO_Pin_13);
		if( Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) ==KEY_ON )
			LED_G_TOGGLE;*/
		
		// if
	}
}

// ��ҵ

// ��KEY2�Ĵ���Ҳ��ɣ���һ�Σ�LED_R_TOGGLE

