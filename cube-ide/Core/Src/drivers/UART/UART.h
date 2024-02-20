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

#define hcc_UART_PACKET_LENGTH 7

typedef struct{

	HAL_StatusTypeDef status;
	UART_HandleTypeDef *handle;

} hcc_uart_t;

void hcc_uart_init(hcc_uart_t *hcc_uart, UART_HandleTypeDef *uart);
void hcc_uart_transmit(hcc_uart_t *hcc_uart, uint8_t *tx_data);

#endif /* SRC_DRIVERS_UART_UART_H_ */
