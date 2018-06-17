#include <stdio.h>

int main(void)
{
   int num1;
    
   scanf("%d", &num1);
    
   if((num1%2)==0)
      printf("even\n");
   else
      printf("odd\n");
   
   return 0;
}