/*
 * main.c
 *
 *  Created on: Jun 7, 2026
 *      Author: animesh
 */

#ifndef MAIN_C_
#define MAIN_C_



#endif /* MAIN_C_ */

/*
 * main.c
 *
 *  Created on: Jun 7, 2026
 *      Author: animesh
 */

#include<stdio.h>
int main()
{
    char a1 = 'A';
    /*char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':';
    char a7 = ')';*/

    unsigned long int addressOfa1 = (unsigned long int)&a1;

    printf("The address of Varible a1 is:%lu\n",addressOfa1);
    printf("The address of Varible a1 is:%lX\n",addressOfa1);
    /*printf("The address of Varible a2 is:%p\n",&a2);
    printf("The address of Varible a3 is:%p\n",&a3);
    printf("The address of Varible a4 is:%p\n",&a4);
    printf("The address of Varible a5 is:%p\n",&a5);
    printf("The address of Varible a6 is:%p\n",&a6);
    printf("The address of Varible a7 is:%p\n",&a7);

    printf("%ld\n", (char *)&a1 - (char *)&a7);*/

    return 0;
}

