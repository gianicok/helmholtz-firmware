/*
 * UART.h
 *
 *  Created on: Jan 16, 2024
 *      Author: kosta
 */

#ifndef SRC_DRIVERS_UART_UART_H_
#define SRC_DRIVERS_UART_UART_H_

#include <stdio.h>
#include <stdint.h>
#include "stm32l4xx_hal.h"

#define HHC_UART_PACKET_LENGTH 7

uint8_t hhc_uart_rx_buffer[HHC_UART_PACKET_LENGTH] = {0};
uint8_t hhc_uart_tx_buffer[HHC_UART_PACKET_LENGTH] = {0};

typedef struct{

	HAL_StatusTypeDef status;
	UART_HandleTypeDef *handle;

} hhc_uart_t;

void hhc_uart_init(hhc_uart_t *hhc_uart, UART_HandleTypeDef *uart);
void hhc_uart_transmit(hhc_uart_t *hhc_uart, uint8_t *tx_data);

#endif /* SRC_DRIVERS_UART_UART_H_ */
