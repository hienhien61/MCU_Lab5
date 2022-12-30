/*
 * global.h
 *
 *  Created on: Nov 3, 2022
 *      Author: PC PHUONG
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"
#include "function.h"
#include "button.h"

// Command Perser States
#define READ		0
#define OK_STATE 	1
#define RST_STATE	2

// UART Communication States
#define WAIT		12
#define PRINT_ADC	13

// LEDs timer
#define time_wait	3000

// UART
//#define MAX_BUFFER_SIZE 30

extern int status1;
extern int status2;


#endif /* INC_GLOBAL_H_ */
