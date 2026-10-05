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
	int32_t num_1,num_2;
	uint32_t even = 0;

	printf("Enter the Two distance to find the Odd Numbers\n");
	scanf("%d %d",&num_1,&num_2);

	if (num_1 > num_2){
		printf("Invalid Input!");

		wait_for_user_input();
		return 0;
	}

	for (; num_1 <= num_2 ; num_1++ )
	{

		if ( !(num_1 % 2) ){
			printf("%.4d\n",num_1);
			even ++;
		}

	}
	printf("Total even numbers are:%d",even);
	wait_for_user_input ();
	return 0;
}

void wait_for_user_input (void)
{
	printf("\nPress enter to exit\n");
	while(getchar() != '\n'){
//		Just read the Input Buffer
	}
	getchar();
}
