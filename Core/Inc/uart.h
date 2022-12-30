/*
 * uart.h
 *
 *  Created on: Dec 25, 2022
 *      Author: PC PHUONG
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "global.h"
#include "stdio.h"

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

extern uint8_t temp;
uint8_t buffer_flag;

void command_parser_fsm ();

void uart_communiation_fsm ();

#endif /* INC_UART_H_ */
