/*
 * button.c
 *
 *  Created on: Oct 31, 2022
 *      Author: ADMIN
 */
#include "button.h"


// 3 biến chống rung khi, khi 3 biến này bằng nhau thì mới được xem là một trường hợp valid
int buttonListPin[NUM_OF_BUTTON] = {RESET_Pin, INC_Pin, DEC_Pin};
int buttonListPort[NUM_OF_BUTTON] = {RESET_GPIO_Port, INC_GPIO_Port, DEC_GPIO_Port};

int KeyReg0[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[NUM_OF_BUTTON] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};


int TimerForKeyPress = 400;

int button1_flag[NUM_OF_BUTTON] = {0, 0, 0};

int isButton1Pressed(int index){
	if(button1_flag[index] == 1){
		button1_flag[index] = 0;
		return 1;
	}

	return 0;
}

//int isButton1DoubleClick(){
//	if(button1_flag == 1){
//		button1_flag = 0;
//		return 1;
//	}
//
//	return 0;
//}

void subKeyProcess( int index ){
	button1_flag[index] = 1;
}

void getKeyInput(){
	for(int i = 0; i < NUM_OF_BUTTON; i++){
	KeyReg0[i] = KeyReg1[i];
	KeyReg1[i] = KeyReg2[i];
	KeyReg2[i] = HAL_GPIO_ReadPin(buttonListPort[i], buttonListPin[i]);
	if((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])){
		if(KeyReg3[i] != KeyReg2[i]){ // xử lí nhấn thả
			KeyReg3[i] = KeyReg2[i];

			if(KeyReg2[i] == PRESSED_STATE){

				subKeyProcess(i);
				//TimerForKeyPress = 300;
				TimerForKeyPress = 400;  //AT HERE I DETERMINE THE Timer for long press = 400
										 //BECAUSE WHEN WE PUSH IT FIRST IT IMEDIATELY CHANGE COUNTER AND CHANGE TO LONG PRESS IN 1s
										//AFTER HOLD 3s THAT IT WILL CHANGE COUNTER EVERY SECOND

			}
		}
		else { // xử lí nhấn đè
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				if(KeyReg2[i] == PRESSED_STATE){ // Khi nhấn mới xử lý
				subKeyProcess(i);
				}
				TimerForKeyPress = 100;
			}
		}
	}
}

}
// Xử lý nhấn 2 lần trong thời gian 2s mới đổi trạng thái
//int click2 = 0;
//void getKeyInput(){
//	KeyReg0 = KeyReg1;
//	KeyReg1 = KeyReg2;
//	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
//	if((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
//		if(KeyReg3 != KeyReg2){
//			KeyReg3 = KeyReg2;
//
//			if(KeyReg2 == PRESSED_STATE){
//				click2++;
//				if(click2 == 2 ){
//					click2 = 0;
//					subKeyProcess();
//				}
//				TimerForKeyPress = 200;
//			}
//		}
//		else {
//			TimerForKeyPress--;
//			if(TimerForKeyPress == 0){
//				click2 = 0;
//				TimerForKeyPress = 200;
//			}
//
//		}
//	}
//}

