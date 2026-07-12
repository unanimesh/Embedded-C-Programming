/*
 * main.c
 *
 *  Created on: Jul 12, 2026
 *      Author: animesh
 */

#include<stdio.h>
#include<stdint.h>

int main() {

	uint32_t num;
	printf("Enter Number:\n");
	scanf("%d", &num);

	(num & 1) ? printf("%d is Odd.\n",num) : printf("%d is Even.\n",num);
	return 0;
}
