#include <stdio.h>

int main()
{
float a, b;
char oper;

scanf("%f%c%f",&a,&oper,&b);

switch(oper)
{
case '+':
printf("%f",a+b);
break;

case '-':
printf("%f",a-b);
break;

case '*':
printf("%f",a*b);
break;

case '/':
printf("%f",a/b);
break;
}
}