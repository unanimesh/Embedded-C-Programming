/*
 * main.c
 *
 *  Created on: Jul 11, 2026
 *      Author: animesh
 */

#include <stdio.h>
#include <stdint.h>

int main()
{
	char symbol;
	double height, breadth, length, area;

	printf("Enter a symbol to find its area\n"
		   "Triangle    --> 'T'\n"
		   "Trapezoidal --> 'Z'\n"
		   "Circle      --> 'C'\n"
		   "Square      --> 'S'\n"
		   "Rectangle   --> 'R'\n"
		   "Please Enter any of the above Symbol:");
	scanf("%c", &symbol);

	switch (symbol)
	{
	case ('T'):
	case ('t'):
		printf("Enter the area breadth of the Triangle: ");
		scanf("%lf", &breadth);
		printf("Enter the height of the Triangle: ");
		scanf("%lf", &height);

		area = 0.5 * breadth * height;
		printf("The area of Triangle is %lf\n", area);
		break;

	case ('Z'):
	case ('z'):
		printf("Enter the shorter side of the Trapezoidal: ");
		scanf("%lf", &breadth);
		printf("Enter the longer side of the Trapezoidal: ");
		scanf("%lf", &length);
		printf("Enter the height of the Trapezoidal: ");
		scanf("%lf", &height);

		area = (0.5 * (breadth + length)) * height;
		printf("The area of Trapezoidal is %lf\n", area);
		break;

	case ('C'):
	case ('c'):
		printf("Enter the radius of the Circle: ");
		scanf("%lf", &length);

		area = 3.14 * length * length;
		printf("The area of Circle is %lf\n", area);
		break;

	case ('S'):
	case ('s'):
		printf("Enter the side of the Square: ");
		scanf("%lf", &length);

		area = length * length;
		printf("The area of Square is %lf\n", area);
		break;

	case ('R'):
	case ('r'):
		printf("Enter the length of the Rectangle: ");
		scanf("%lf", &length);
		printf("Enter the breadth of the Rectangle: ");
		scanf("%lf", &breadth);

		area = length * breadth;
		printf("The area of Rectangle is %lf\n", area);
		break;

	default:
		printf("Enter the correct symbol to find its area\n"
			   "Triangle    --> 'T'\n"
			   "Trapezoidal --> 'Z'\n"
			   "Circle      --> 'C'\n"
			   "Square      --> 'S'\n"
			   "Rectangle   --> 'R'\n");
	}
}
