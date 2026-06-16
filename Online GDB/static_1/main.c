#include<stdio.h>

void file1myFunc1(void);

static int myPrivateData;

int main()
{
    myPrivateData = 78;
    printf("myPrivateData: %d\n", myPrivateData);

    file1myFunc1();
    printf("myPrivateData after calling file1myFunc1: %d\n", myPrivateData);

    return 0;

}