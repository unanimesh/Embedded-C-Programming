/*
 * main.c
 *
 *  Created on: Oct 3, 2026
 *      Author: animesh
 */
#include<stdio.h>
#include<stdint.h>

int main(void)
{
	uint8_t num = 1;

	while(num <= 100)	// Never put semicolon(;) here
	{
	printf("%d\n",num ++);
//	num ++;
	}

}

