/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

#include "main.h"
#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

int isButton1Pressed();

//int isButton1DoubleClick();
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#define NUM_OF_BUTTON 3
void getKeyInput();


#endif /* INC_BUTTON_H_ */
