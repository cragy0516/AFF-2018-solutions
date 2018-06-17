#include <stdio.h>

int main(void)
{
    char ch;
    float num1, num2;

    scanf("%f%c%f", &num1, &ch, &num2);

    switch(ch)
    {
       case '+':
          printf("%lf", num1+num2);
          break;
       case '/':
          printf("%lf", num1/num2);
          break;
       case '*':
          printf("%lf", num1*num2);
          break;
       case '-':
          printf("%lf", num1-num2);
          break;
     }

    return 0;

}
