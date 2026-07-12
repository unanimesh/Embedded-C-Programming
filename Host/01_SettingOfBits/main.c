/*
 * main.c
 *
 *  Created on: Jul 13, 2026
 *      Author: animesh
 */

#include<stdio.h>
#include<stdint.h>

int main() {

	uint32_t num,Output;
	printf("Enter Number:\n");
	scanf("%d", &num);

	Output = (num | 144); // Bitwise OR operation with 144 (0x90 in hexadecimal) 4th and 7th bits are set to 1

	printf("Input: [0x%X] Output: [0x%X]\n", num, Output);

	return 0;
}
