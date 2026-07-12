#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

double dimensions(const char *prompt);

int main()
{
	char symbol;
	int attempts = 0;
	double length, breadth, height, area;

	printf("Enter a symbol to find its area\n"
		   "Triangle    --> 'T'\n"
		   "Trapezoidal --> 'Z'\n"
		   "Circle      --> 'C'\n"
		   "Square      --> 'S'\n"
		   "Rectangle   --> 'R'\n"
		   "Please Enter any of the above Symbol:");

	while (attempts < 3)
	{
		if (scanf(" %c", &symbol) == 1)
		{
			if (symbol == 'T' || symbol == 't' || symbol == 'Z' || symbol == 'z' ||
				symbol == 'C' || symbol == 'c' || symbol == 'S' || symbol == 's' ||
				symbol == 'R' || symbol == 'r')
			{
				break; // Valid input, exit the loop
			}
			else
			{
				printf("Invalid input %d times. Please enter a valid symbol.\n", attempts + 1);
				while (getchar() != '\n')
					; // Clear the input buffer
				attempts++;
			}
		}
	}
	// scanf("%c", &symbol);

	switch (symbol)
	{
	case ('T'):
	case ('t'):

		breadth = dimensions("Enter the breadth of the Triangle: ");
		height = dimensions("Enter the height of the Triangle: ");

		area = 0.5 * breadth * height;
		printf("The area of Triangle is %lf\n", area);
		break;

	case ('Z'):
	case ('z'):
		breadth = dimensions("Enter the shorter side of the Trapezoidal: ");
		length = dimensions("Enter the longer side of the Trapezoidal: ");
		height = dimensions("Enter the height of the Trapezoidal: ");

		area = (0.5 * (breadth + length)) * height;
		printf("The area of Trapezoidal is %lf\n", area);
		break;

	case ('C'):
	case ('c'):
		length = dimensions("Enter the radius of the Circle: ");

		area = 3.14 * length * length;
		printf("The area of Circle is %lf\n", area);
		break;

	case ('S'):
	case ('s'):
		length = dimensions("Enter the side of the Square: ");

		area = length * length;
		printf("The area of Square is %lf\n", area);
		break;

	case ('R'):
	case ('r'):
		length = dimensions("Enter the length of the Rectangle: ");
		breadth = dimensions("Enter the breadth of the Rectangle: ");

		area = length * breadth;
		printf("The area of Rectangle is %lf\n", area);
		break;
	}
}

double dimensions(const char *prompt)
{
	double value;
	char extra;
	int attempts = 0;

	while (attempts < 3)
	{
		printf("%s", prompt);
		if (scanf("%lf%c", &value,&extra) != 1)
		{
			return value;
		}
		else
		{
			printf("Invalid input %d times. Please enter a numeric value.\n", attempts + 1);
			while (getchar() != '\n')
				; // Clear the input buffer
			attempts++;
		}
		// break; // Exit the loop after 3 invalid attempts
	}
	printf("Too many invalid attempts. Exiting the program.\n");
	exit(EXIT_FAILURE);
}
