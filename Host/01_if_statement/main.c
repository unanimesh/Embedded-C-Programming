/*
 * main.c
 *
 *  Created on: Jul 9, 2026
 *      Author: animesh
 */

//Write a program that takes the user’s age and decides whether a user can cast a vote or not.
//
//•The minimum age for casting a vote is 18 years
//
//•Print appropriate messages

#include<stdio.h>
int main()
{
	int age = 18;

	if (age>=18)
	{
		printf("Your age is %d and You are eligible for vote.\n",age);
	}

	printf("Minimum age required for the voting is 18.\n");

	return 0;
}
