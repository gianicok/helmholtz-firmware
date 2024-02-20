/*
 * DAC081.c
 *
 *  Created on: Feb 20, 2024
 *      Author: kosta
 */

#include "DAC081.h"

uint16_t X_DAC = 0x000A; // Binary: 0001010
uint16_t Y_DAC = 0x004D; // Binary: 1001101
uint16_t Z_DAC = 0x004E; // Binary: 1001110

uint8_t hcc_dac_packet(uint8_t volt_sp){

	// The DAC Packet is defined as follows where PD is power down mode and D is the desired voltage set point.
	// --> [0, 0, PD1, PD0, D7, D6, D5, D4, D3, D2, D1, D0, 0, 0, 0, 0]

	// This function intends to set power mode to [0,0] "Normal Operation" and set the data bits to the desired voltage.

	return ( volt_sp << 4 ); // Shift the 8 bit DAC Value left by 4 filling new empty spaces as zero: https://en.wikipedia.org/wiki/Bitwise_operations_in_C
}

void hcc_dac_set_output(hcc_i2c_t *i2c, uint16_t dac, uint8_t volt_sp){

	uint8_t data = hcc_dac_packet(volt_sp);

	uint8_t byte_1 = data >> 8;
	uint8_t byte_2 = data & 0xFF;

	hcc_i2c_write(i2c, dac, &byte_1, sizeof(byte_1));
	hcc_i2c_write(i2c, dac, &byte_2, sizeof(byte_2));
}
