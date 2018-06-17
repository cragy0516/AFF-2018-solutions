#include<stdio.h>
#include<string.h>

int main()
{
    char x[100];
    char y[100];
    scanf("%s",x);
    scanf("%s",y);
    int result=strlen(x)+strlen(y);
    printf("%d",result);
}
