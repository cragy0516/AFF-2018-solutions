
#include <stdio.h>

int main(void)
{
   int a, b=2, i;
   long long result = 1;

   scanf("%d", &a);

   for(i=0; i < b; i++){
      result *= a;
   }

   printf("%ld", result);

   return 0;

}
