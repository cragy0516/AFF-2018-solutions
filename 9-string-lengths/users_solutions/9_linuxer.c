#include <stdio.h>

int main(void)
{
   char st1[10];
   char st2[10];

   scanf("%s", st1);
   scanf("%s", st2);
   printf("%d\n", strlen(st1)+strlen(st2));

   return 0;

}
