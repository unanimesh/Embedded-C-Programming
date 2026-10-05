/*
 * main.c
 *
 *  Created on: Oct 5, 2026
 *      Author: animesh
 */
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input();

int main(void)
{
	int32_t num;

	printf("Enter the height of the Pyramid\n");
	scanf("%d",&num);

	if (num <= 0)
	{
		printf("Error! Height of Pyramid is never zero\n");

		wait_for_user_input();
		return 0;
	}


	for(uint32_t i = 1 ; i<=num ; i++){

		for(uint32_t j = i; j < num; j++)
		{
			printf(" ");
		}
		for(uint32_t j = 1; j <= i ; j++){
			printf("* ");
		}
	printf("\n");
	}

	wait_for_user_input();
	return 0;

}


void wait_for_user_input (void)
{
	printf("\nPress Enter to Exit\n");
	while(getchar() != '\n')
	{
//		Just keep this for buffer
	}
	getchar();
}
