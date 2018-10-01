#ifndef BSP_KEY_H
#define BSP_KEY_H

#include "gpio.h"


#define KEY1	HAL_GPIO_ReadPin(Key1_GPIO_Port,Key1_Pin)
#define KEY2	HAL_GPIO_ReadPin(Key2_GPIO_Port,Key2_Pin)
#define KEY3	HAL_GPIO_ReadPin(Key3_GPIO_Port,Key3_Pin)


uint8_t Key_Scan(uint8_t mode);








#endif
