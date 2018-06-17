#include <stdio.h>

int main()
{
    char a;
    float n1; 
    float n2; 

    scanf("%f %c %f", &n1, &a, &n2);
    if(a == '+')
    {   
        printf("%f", n1+n2);
    }   
    else if(a == '*')
    {   
        printf("%f", n1*n2);
    }   
    else if(a == '/')
    {   
        printf("%f", n1/n2);
    }   
    else if(a == '-')
    {   
        printf("%f", n1-n2);
    }   
}
