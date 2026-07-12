/*
 * main.c
 *
 *  Created on: Jul 11, 2026
 *      Author: animesh
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
	char symbol;
	uint32_t height, breadth, area;

	printf("Enter a symbol to find its area\n"
			"Triangle    --> 'T'\n"
			"Trapezoidal --> 'Z'\n"
			"Circle      --> 'C'\n"
			"Square      --> 'S'\n"
			"Rectangle   --> 'R'\n"
			"Please Enter any of the above Symbol:");
	scanf("%c",&symbol);

	switch(symbol)
	{
	case ('T'):
		printf("Enter the area breadth of the Triangle: ");
		scanf("%ul",&breadth);
		printf("Enter the height of the Triangle: ");
		scanf("%ul",&height);

		area = 0.5*breadth*height;

		printf("The area of Triangle is %lu",area);

		break;

	default:
		printf("Someting Error");
	}

}
