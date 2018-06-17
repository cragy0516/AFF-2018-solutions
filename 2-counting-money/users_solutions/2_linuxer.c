#include<stdio.h>
#include<string.h>
int main(void)
{
 int length, i;
 char buf[40];

 scanf("%s", buf);
 length=strlen(buf);
 for(i=length;i>0;i--)
 {
  if(i != length && i%3 == 0){
   printf(",");
  }
  printf("%c", buf[length-i]);
 }
 printf("\n");
 return 0;
}