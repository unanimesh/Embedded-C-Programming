/*
 * type_cast.c
 *
 *  Created on: Jun 9, 2026
 *      Author: animesh
 */

#include<stdio.h>

int main(void)
{
	unsigned char data = 0x0f + 0x0012; // typecast by compiler

	// unsigned char data = 0x0f + 0x0f12; // typecast by compiler with warning

	float result = 80/(float)3; //typecast by programmer

	printf("Data : %X Result: %f\n",data,result);
}
