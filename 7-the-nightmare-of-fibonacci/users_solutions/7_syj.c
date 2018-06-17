#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    unsigned long  num1=0;
    unsigned long  num2=1;
    for(int i=0;i<n;i++){
        num1+=num2;
        num2=num1-num2;
    }   
    printf("%lu",num1);
}
