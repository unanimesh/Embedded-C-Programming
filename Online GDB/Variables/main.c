/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Function prototype of Function myFun1
void myFun1(void);

int myScore; // Global varible

int main()
{
   
   
   myScore = 900;
   
   printf("001Value of varible myScore is %d\n",myScore);
   
   // function call
   myFun1();
   
   return 0;
}

// Function definiton
void myFun1(void) // void means not return anything and doesn't take any argument
{
    myScore=899;
    
     printf("002Value of varible myScore is %d\n",myScore);
}
     
     
     