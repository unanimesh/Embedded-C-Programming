#include<stdio.h>

int a;

int main()
{
    a = 5;
    {
        int myvar = 10;
        printf("001Local Variable myvar: %d\n", myvar);
        printf("002Global Variable a: %d\n", a);
    }
 
    unsigned int myvar;
    myvar +=10; // myvar =myvar + 10;   
    printf("003Local Variable myvar: %u\n", myvar);

    return 0; 
}