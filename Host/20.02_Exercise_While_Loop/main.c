/*
 * main.c
 *
 *  Created on: Oct 3, 2026
 *      Author: animesh
 */


#include<stdio.h>
#include<stdint.h>
void wait_for_user_input();


int main(void)
{
	int32_t num_1, num_2;
	uint32_t even=0;


	printf("Enter Boundary for two Numbers:\n");
	scanf("%d %d",&num_1,&num_2);

	if (num_1>num_2){
		printf("\nError!!! \nEnding number is must be Greater than the starting Number");

	wait_for_user_input();
	return 0;
	}



	while(num_1 <= num_2)
	{
		if(!(num_1 % 2))
		{
			printf("%.4d\t",num_1);
			even++;
		}
		num_1 ++;
	}

	printf("\nCount of Even No is:%d\n",even);

	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void)
	{
		printf("\nPress Enter key to exit this application\n");
		while(getchar() != '\n')
		{
		  //just read the input buffer & do nothing(for command prompt)
		}
		getchar();
	}
