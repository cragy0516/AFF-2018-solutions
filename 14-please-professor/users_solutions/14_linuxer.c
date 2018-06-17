#include <stdio.h>

int main(void)
{
   double grade;
   
   scanf("%lf", &grade);
   
   if(grade >= 0.0 && grade < 1.0)
      printf("F");
   else if(grade >= 1.0 && grade < 1.5)
      printf("D0");
   else if(grade >= 1.5 && grade < 2.0)
      printf("D+");
   else if(grade >= 2.0 && grade < 2.5)
      printf("C0");
   else if(grade >= 2.5 && grade < 3.0)
      printf("C+");
   else if(grade >= 3.0 && grade < 3.5)
      printf("B0");
   else if(grade >= 3.5 && grade < 4.0)
      printf("B+");
   else if(grade >= 4.0 && grade <4.5)
      printf("A0");
   else
      printf("A+");

   return 0;

}