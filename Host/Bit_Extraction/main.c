/*
 * main.c
 *
 *  Created on: Oct 2, 2026
 *      Author: animesh
 */


// Problem

#include<stdio.h>
#include<stdint.h>

uint16_t data =0xB410;
uint8_t output;

int main()
{
output =  (uint8_t)((data >> 9) & 0x3F );

printf("Output:0x%X", output);

return 0;
}
