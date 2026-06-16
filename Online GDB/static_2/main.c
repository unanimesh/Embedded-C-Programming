#include<stdio.h>
//#include "file1.c"

void file1myFunc1(void);

static int myPrivateData;

int main()
{
    myPrivateData = 10;
    printf("myPrivateData: %d\n", myPrivateData);

    file1myFunc1();
    printf("myPrivateData after calling file1myFunc1: %d\n", myPrivateData);

    return 0;

}

static void change_system_clock(int system_clock)
{
    // Code to change the system clock
    printf("System clock changed to: %d\n", system_clock);
}
