/*
 * main.c
 *
 *  Created on: Jul 10, 2026
 *      Author: animesh
 */
#include<stdio.h>
int main()
{
	float firstNum, secondNum;
	printf("Enter first number\n");
	scanf("%f",&firstNum);

	printf("Enter second number\n");
	scanf("%f",&secondNum);

	int num1, num2;
	num1 = firstNum;
	num2 = secondNum;

	if((num1 != firstNum) || (num2 != secondNum))
		printf("Warning! Only integer is considered here.\n");

	if (num1 == num2){
		printf("Both the number is equal. i.e: %d\n",num1);
	}else{

		if (num1 > num2){
			printf("First number is greater than second. i.e: %d>%d",num1,num2);
		}else{
			printf("Second number is greater than first. i.e: %d>%d",num2,num1);
		}
	}

}

