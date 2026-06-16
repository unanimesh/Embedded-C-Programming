#include<stdio.h>

void functions_add_numbers (int a, int b, int c);

int main()
{
    functions_add_numbers(5, 10, 15);
    functions_add_numbers(20, 30, 40);

    int x = 10;
    int y = 20;

    functions_add_numbers(x, y, 30);

    return 0;
}

void functions_add_numbers (int a, int b, int c)
{
    int sum = a + b + c;
    printf("The sum of the numbers is: %d\n", sum);
}
