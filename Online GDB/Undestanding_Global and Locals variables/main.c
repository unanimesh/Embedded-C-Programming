#include <stdio.h>


int myScore = 345; // Global varible

int main()
{
   
   {
   int myScore = 900; // Local varible
   
   // this varible dies with this range
   }
   
   
   printf("001Value of varible myScore is %d\n",myScore);
   
   return 0;
}