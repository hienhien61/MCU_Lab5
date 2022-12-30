///*
// * uart.c
// *
// *  Created on: Dec 25, 2022
// *      Author: PC PHUONG
// */
//#include "uart.h"
//
//uint8_t temp = 0;
//uint8_t buffer [ MAX_BUFFER_SIZE ];
//uint8_t index_buffer = 0;
//uint8_t buffer_flag = 0;
//
//void HAL_UART_RxCpltCallback ( UART_HandleTypeDef * huart ){
//	if(huart -> Instance == USART2 ){
////		HAL_UART_Transmit (& huart2 , &temp , 1, 50) ;
//		buffer [ index_buffer ++] = temp ;
//		if( index_buffer == 30) index_buffer = 0;
//		buffer_flag = 1;
//		HAL_UART_Receive_IT (& huart2 , &temp , 1);
//	}
//}
//
//
//void command_parser_fsm (){
//	HAL_GPIO_TogglePin ( LED_RED1_GPIO_Port , LED_RED1_Pin );
//}
//
//uint16_t ADC_value = 0;
//void * str;
//void uart_communiation_fsm (){
//	HAL_GPIO_TogglePin ( LED_RED1_GPIO_Port , LED_RED1_Pin );
//	ADC_value = HAL_ADC_GetValue (& hadc1 );
//	HAL_UART_Transmit (& huart2 , str , sprintf (str , "%d\n"
//	, ADC_value ), 1000) ;
//	HAL_Delay(500);
//}
