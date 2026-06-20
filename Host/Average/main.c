/*
 * main.c
 *
 *  Created on: 20-Jun-2026
 *      Author: animesh
 */
#include<stdio.h>

int main()
{
	float a, b, c;

	printf("Enter the Value of A :");
	scanf("%f",&a);
	fflush(stdout);
	printf("Enter the Value of B :");
	scanf("%f",&b);
	fflush(stdout);
	printf("Enter the Value of C :");
	scanf("%f",&c);
	fflush(stdout);

	//sum = ;

	printf("The average is: %f\n", ((a + b + c)/3)*2);

	return 0;
}

