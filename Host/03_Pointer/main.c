/*
 * main.c
 *
 *  Created on: Jul 5, 2026
 *      Author: animesh
 */

#include<stdio.h>

long long int g_data = 0xFFFA2934ABEDDF23;

int main(void)
{
	char *pAddress = (char*)&g_data;

	printf("The value of address %p is: %X\n",pAddress, *pAddress);




}
