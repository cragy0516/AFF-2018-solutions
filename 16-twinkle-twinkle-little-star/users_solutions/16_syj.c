#include<stdio.h>
#include<string.h>

int main()
{
    int num=0;
    int i,j,h;
    scanf("%d",&num);
    char a[num+2];
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }   
        printf("o");
        for(h=num;h>=i;h--){
            printf("*");
        }printf("\n");
    }   

}
