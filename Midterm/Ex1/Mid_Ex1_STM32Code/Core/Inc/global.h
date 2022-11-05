/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "set_led.h"

extern int status;

#define INIT        1
#define STATE_RESET 2
#define STATE_INC   3
#define STATE_DEC   4
#define AUTO        5
#endif /* INC_GLOBAL_H_ */
