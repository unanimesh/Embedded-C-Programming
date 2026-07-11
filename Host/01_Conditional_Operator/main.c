/*
 * main.c
 *
 *  Created on: Jul 11, 2026
 *      Author: animesh
 */


#include<stdio.h>
#include<stdint.h>
int main()
{
	uint32_t age;
	printf("Enter you age!\n");
	scanf("%u",&age);
	age > 18 ? printf("Eligible to Vote\n") : printf("Not Eligible to Vote\n");
}
