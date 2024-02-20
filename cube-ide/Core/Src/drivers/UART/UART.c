/*
 * UART.c
 *
 *  Created on: Jan 16, 2024
 *      Author: kosta
 */

#include "UART.h"

uint8_t hcc_uart_rx_buffer[hcc_UART_PACKET_LENGTH] = {0};
uint8_t hcc_uart_tx_buffer[hcc_UART_PACKET_LENGTH] = {0};

void hcc_uart_init(hcc_uart_t *hcc_uart, UART_HandleTypeDef *uart){

	hcc_uart->handle = uart;

	hcc_uart->status = HAL_UART_Receive_IT(hcc_uart->handle, hcc_uart_rx_buffer, hcc_UART_PACKET_LENGTH);

}

void hcc_uart_transmit(hcc_uart_t *hcc_uart, uint8_t *tx_data){

	HAL_UART_Transmit(hcc_uart->handle, tx_data, hcc_UART_PACKET_LENGTH, 100);

}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){

	//hcc_pid_rxhandler(); function to be defined in PID application
	HAL_UART_Receive_IT(huart, hcc_uart_rx_buffer, hcc_UART_PACKET_LENGTH);

}
