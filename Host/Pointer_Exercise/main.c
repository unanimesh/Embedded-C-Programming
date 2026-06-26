/*
 * main.c
 *
 *  Created on: 26-Jun-2026
 *      Author: animesh
 */

#include<stdio.h>
int main()
{
	char variable = 100;
	printf("The value is  variable is %d\n",variable);
	printf("The address of varible is %p\n",&variable);

	char* p_variable = &variable;		// Created pointer to store the address of variable

	char data = *p_variable;			// Performed Read operations to fetch 1 byte data
	printf("The read Value is %d\n",data);

	*p_variable = 65;					// Performed Write operations on pointer
	printf("The value of variable is %d\n",variable);

	return 0;
}
