/*
 * main.c
 *
 *  Created on: Jul 12, 2026
 *      Author: animesh
 */

#include<stdio.h>
#include<stdint.h>

int32_t input(char *prompt);

int main() {
	int32_t num1, num2, n1, n2;
	num1 = input("Enter first number: ");
	num2 = input("Enter second number: ");

	printf("The first number is: %.8b\n", num1);
	printf("The second number is: %.8b\n", num2);

	n1 = num1;
	n2 = num2;

	printf("The bitwise AND of the two numbers is: %.8b which is %d\n", n1 & n2, n1 & n2);
	printf("The bitwise OR of the two numbers is: %.8b which is %d\n", n1 | n2, n1 | n2);
	printf("The bitwise XOR of the two numbers is: %.8b which is %d\n", n1 ^ n2, n1 ^ n2);
	printf("The bitwise NOT of the %d is: %b which is %d\n", num1, ~n1, ~n1);

	return 0;
}

int32_t input(char *prompt)
{
	int32_t num;
	printf("%s", prompt);
	scanf("%d", &num);
	return num;
}
