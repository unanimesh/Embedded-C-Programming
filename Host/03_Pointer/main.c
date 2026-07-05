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

	pAddress = pAddress + 1; // it increment 1 byte of data bcz its char data type

	printf("The value of address %p is: %X\n",pAddress, (unsigned char)*pAddress);
	// type cast here bcz it df promoted to the int data types, df value is 11011111 it is negative number bcz of 1 in first.

	 int *pAddressss = (int*)&g_data;

	 printf("The value of address %p is %X\n",pAddressss, *pAddressss);

	 pAddressss +=1;

	 printf("The value of address %p is %X\n",pAddressss, *pAddressss);



}
