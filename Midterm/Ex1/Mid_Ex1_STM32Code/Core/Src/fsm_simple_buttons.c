/*
 * fsm_simple_buttons.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

int counter = 9; // the inial display value 9 in the led7seg
#include "fsm_simple_buttons.h"

void fsm_simple_buttons_run(){
	switch(status){

	case INIT:
		display7SEG(counter);
		status = AUTO;
		setTimer1(1000);
		if(isButton1Pressed(0)==1){
			counter = 0;
			status = STATE_RESET;
			display7SEG(counter);
		}
		if(isButton1Pressed(1)==1){
			counter++;
			if(counter>=10){
				counter = 0;
			}
			display7SEG(counter);
			status = STATE_INC;

		}
		if(isButton1Pressed(2)==1){
			counter--;
			if(counter<0){
				counter = 9;
			}
			display7SEG(counter);
			status = STATE_DEC;

		}
		break;

	case STATE_RESET:
		status = AUTO;
		setTimer1(1000);

		counter = 0;
		if(isButton1Pressed(0)==1){
			counter = 0;
			status = STATE_RESET;
			display7SEG(counter);
		}
		if(isButton1Pressed(1)==1){
			counter++;
			if(counter>=10){
				counter = 0;
			}
			display7SEG(counter);
			status = STATE_INC;

		}
		if(isButton1Pressed(2)==1){
			counter--;
			if(counter<0){
				counter = 9;
			}
			display7SEG(counter);
			status = STATE_DEC;

		}
		break;

	case STATE_INC:
		status = AUTO;
		setTimer1(1000);



		if(isButton1Pressed(0)==1){
			counter = 0;
			status = STATE_RESET;
			display7SEG(counter);
		}
		if(isButton1Pressed(1)==1){
			counter++;
			if(counter>=10){
				counter = 0;
			}
			display7SEG(counter);
			status = STATE_INC;

		}
		if(isButton1Pressed(2)==1){
			counter--;
			if(counter<0){
				counter = 9;
			}
			display7SEG(counter);
			status = STATE_DEC;

		}
		break;

	case STATE_DEC:
		status = AUTO;
		setTimer1(1000);

		if(isButton1Pressed(0)==1){
			counter = 0;
			status = STATE_RESET;
			display7SEG(counter);
		}
		if(isButton1Pressed(1)==1){
			counter++;
			if(counter>=10){
				counter = 0;
			}
			display7SEG(counter);
			status = STATE_INC;

		}
		if(isButton1Pressed(2)==1){
			counter--;
			if(counter<0){
				counter = 9;
			}
			display7SEG(counter);
			status = STATE_DEC;

		}
		break;
	case AUTO:
		if(timer1_flag == 1){
		counter--;
		if(counter<0){
			counter = 0;
		}
		display7SEG(counter);
		setTimer1(100); //decrease every second
		}

		if(isButton1Pressed(0)==1){
			counter = 0;
			status = STATE_RESET;
			display7SEG(counter);
		}
		if(isButton1Pressed(1)==1){
			counter++;
			if(counter>=10){
				counter = 0;
			}
			display7SEG(counter);
			status = STATE_INC;

		}
		if(isButton1Pressed(2)==1){
			counter--;
			if(counter<0){
				counter = 9;
			}
			display7SEG(counter);
			status = STATE_DEC;

		}
		break;

}
}
