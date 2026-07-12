#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

double dimensions(const char *prompt);

int main()
{
	char symbol;
	double length, breadth, height, area;

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

		breadth = dimensions("Enter the breadth of the Triangle: ");
		height = dimensions("Enter the height of the Triangle: ");

		area = 0.5 * breadth * height;
		break;

	case ('Z'):
	case ('z'):
		breadth = dimensions("Enter the shorter side of the Trapezoidal: ");
		length = dimensions("Enter the longer side of the Trapezoidal: ");
		height = dimensions("Enter the height of the Trapezoidal: ");

		area = (0.5 * (breadth + length)) * height;
		break;

	case ('C'):
	case ('c'):
		length = dimensions("Enter the radius of the Circle: ");

		area = 3.14 * length * length;
		break;

	case ('S'):
	case ('s'):
		length = dimensions("Enter the side of the Square: ");

		area = length * length;
		break;

	case ('R'):
	case ('r'):
		length = dimensions("Enter the length of the Rectangle: ");
		breadth = dimensions("Enter the breadth of the Rectangle: ");

		area = length * breadth;
		break;
	default:
		printf("Invalid Input\n");
	}

	if (area>0){
		printf("The area is: %.2lf",area);
	}else{
		printf("The area is not Negative\n");
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
