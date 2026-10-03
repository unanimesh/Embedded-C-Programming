/*
 * main.c
 *
 *  Created on: Oct 3, 2026
 *      Author: animesh
 */


#include<stdio.h>
#include<stdint.h>

int main(void)
{
	int32_t num_1, num_2;
	uint32_t even=0;


	printf("Enter Boundary for two Numbers:\n");
	scanf("%d %d",&num_1,&num_2);

	while(num_1 <= num_2)
	{
		if(!(num_1 % 2))
		{
			printf("%d\t",num_1);
			even++;
		}
		num_1 += 2;
	}
	printf("\nCount of Even No is:%d",even);
}
