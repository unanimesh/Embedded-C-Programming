/*
 * main.c
 *
 *  Created on: Jul 11, 2026
 *      Author: animesh
 */

#include<stdio.h>
int main()
{
	float income,tax;
	printf("Enter your Annual Income.\n");
	scanf("%f",&income);

	if(income <= 9525)
	{
		tax = (income*0)/100;
		printf("You have to pay %.2f$ taxes.\n",tax);
	}

	else if(38700 > income && income > 9525)
	{
		tax = (income*0)/100;
		printf("You have to pay %.2f$ taxes.\n",tax);
	}

}
