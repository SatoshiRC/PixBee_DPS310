/*
 * wrapper.cpp
 *
 *  Created on: Oct 23, 2023
 *      Author: ohya
 */

#include "wrapper.hpp"
#include "gpio.h"

void init(){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, GPIO_PIN_1, GPIO_PIN_SET);
}


void loop(){


}

