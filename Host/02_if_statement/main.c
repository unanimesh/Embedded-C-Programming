/*
 * main.c
 *
 *  Created on: Jul 10, 2026
 *      Author: animesh
 */
#include<stdio.h>
int main()
{
	int firstNum, secondNum;
	printf("Enter first number\n");
	scanf("%d",&firstNum);

	printf("Enter second number\n");
	scanf("%d",&secondNum);

	if (firstNum == secondNum){
		printf("Both the number is equal. i.e:%d\n",firstNum);
	}

	if (firstNum > secondNum){
		printf("First number is greater than second. i.e: %d>%d",firstNum,secondNum);
	}else{
		printf("Second number is greater than first. i.e: %d>%d",secondNum,firstNum);
	}

}

