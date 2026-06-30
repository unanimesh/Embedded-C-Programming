/*
 * main.c
 *
 *  Created on: 30-Jun-2026
 *      Author: animesh
 */


#include<stdio.h>

long long int g_data = 0xEFABC342399012BC;

int main(void)
{
	char *pAddress0;
	pAddress0 = (char*)&g_data;
	printf("The value at Address %p is :%d\n",pAddress0,*pAddress0);

	short *pAddress2;
	pAddress2 = (short*)&g_data;
	printf("The value at Address %p is :%d\n",pAddress2,*pAddress2);

	int *pAddress1;
	pAddress1 = (int*)&g_data;
	printf("The value at Address %p is :%d\n",pAddress1,*pAddress1);

	long *pAddress3;
	pAddress3 = (long*)&g_data;
	printf("The value at Address %p is :%lu\n",pAddress3,*pAddress3);

	long long *pAddress4;
	pAddress4 = &g_data;		// No Typecasting required
	printf("The value at Address %p is :%llu\n",pAddress4,*pAddress4);

	return 0;
}
