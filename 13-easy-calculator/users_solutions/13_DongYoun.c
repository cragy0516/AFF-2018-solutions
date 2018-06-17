#include <stdio.h>

int main()
{
        float a, b;
        char c;
        float fin;
        scanf("%f%c%f",&a,&c,&b);
        if(c == '+')
                fin = a + b;
        else if (c == '-')
                fin = a - b;
        else if (c == '*')
                fin = a * b;
        else if (c == '/')
                fin = a / b;

        printf("%f", fin);
}
