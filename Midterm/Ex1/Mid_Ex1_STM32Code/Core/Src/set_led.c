/*
 * set_led.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */
#include "set_led.h"

//void set_red(){
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
//
//}
//
//void set_green(){
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
//
//}
//
//void set_yellow(){
//	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
//
//}

void display7SEG(int num){
	if(num == 0){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
	}

	if(num == 1){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
	}

	if(num == 2){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 1);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	}

	if(num == 3){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	}

	if(num == 4){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 1);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	}

	if(num == 5){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	}

	if(num == 6){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 1);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	}

	if(num == 7){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 1);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 1);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 1);
	}

	if(num == 8){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 0);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	}

	if(num == 9){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, 0);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, 0);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, 0);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, 0);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, 1);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, 0);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, 0);
	}
}
