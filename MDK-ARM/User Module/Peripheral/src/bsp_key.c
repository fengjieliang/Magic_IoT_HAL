#include "bsp_key.h"

uint8_t Key_Scan(uint8_t mode)
{
	
	static uint8_t key_up=1;		//key_up=1	连续按	key_up=0 单独按
	if (mode==1)
	{key_up=1;}
	
	if(key_up==1	&&	(KEY1==1||KEY2==0||KEY3==0))
	{
		HAL_Delay(1);
		key_up=0;
		if(KEY1==1)
		{return 1;}
		if(KEY2==0)
		{return 2;}
		if(KEY3==0)
		{return 3;}
	}
	else if(KEY1==0&&KEY2==1&&KEY3==1)
	{
		key_up=1;
	}
		return 0;
}



