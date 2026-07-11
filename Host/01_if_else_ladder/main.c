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
	uint64_t income,tax;
	double tempIncome;

	printf("Enter your Annual Income.\n");
	scanf("%lf",&tempIncome);
	if(tempIncome < 0){
		printf("Your Income is never Negative. Enter Valid Income\n");
		return 0;
	}

	income =(uint64_t) tempIncome;

	if(income <= 9525)
	{
		tax = (income*0)/100;
	}
	else if(38700 > income && income > 9525)
	{
		tax = (income*0)/100;
	}
	else if(82500 > income && income > 38701)
	{
		tax = (income*22)/100;
	}
	else if(income > 82501)
	{
		tax = ((income*32)/100)+1000;
	}

	printf("You have to pay $%lu taxes.\n",(unsigned long)tax);

	return 0;
}
