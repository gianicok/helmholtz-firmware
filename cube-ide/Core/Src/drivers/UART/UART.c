/*
 * UART.c
 *
 *  Created on: Jan 16, 2024
 *      Author: kosta
 */

#include "UART.h"

void hhc_uart_init(hhc_uart_t *hhc_uart, UART_HandleTypeDef *uart){

	hhc_uart->handle = uart;

	hhc_uart->status = HAL_UART_Receive_IT(hhc_uart->handle, hhc_uart_rx_buffer, HHC_UART_PACKET_LENGTH);

}

void hhc_uart_transmit(hhc_uart_t *hhc_uart, uint8_t *tx_data){

	HAL_UART_Transmit(hhc_uart->handle, tx_data, HHC_UART_PACKET_LENGTH, 100);

}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){

	//hhc_pid_rxhandler(); function to be defined in PID application
	HAL_UART_Receive_IT(huart, hhc_uart_rx_buffer, HHC_UART_PACKET_LENGTH);

}
