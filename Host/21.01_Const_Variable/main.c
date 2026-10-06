/*
 * main.c
 *
 *  Created on: Oct 6, 2026
 *      Author: animesh
 */


#include<stdio.h>
#include<stdint.h>

void wait();

uint32_t const data = 10;  //Cannot be modified.

int main(void)
{
//	uint32_t const data = 10;

	printf("Value = %d\n",data);

//	data = 20;
	uint32_t *ptr = (uint32_t*) &data;   // Throw error in Output
//	Throw Segmentation fault in Terminal

	*ptr = 20;

	printf("Value = %d\n",data);

	wait();
	return 0;
}

void wait(void)
{
	printf("\nPress Enter to Exit the Application\n");
	while(getchar() != '\n');
}
