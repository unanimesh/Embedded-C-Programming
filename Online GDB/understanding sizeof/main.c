/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long sunTemperature = 542789475924562934;
    
    int size = sizeof(sunTemperature);
    
    printf("Size of char data type is %dbytes.\n",sizeof(char));
    printf("Size of short data type is %dbytes.\n",sizeof(short));
    printf("Size of int data type is %dbytes.\n",sizeof(int));
    printf("Size of long data type is %dbytes.\n",sizeof(long));
    printf("Size of long long data type is %dbytes.\n",sizeof(long long));
    printf("Size of sunTemperature data type is %dbytes.\n",sizeof(sunTemperature));
    printf("Size of size data type is %dbytes.\n",size);

    return 0;
}