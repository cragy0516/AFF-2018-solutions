#include<stdio.h>
int main()
{
    int score=0;
    int count=0;
    char a[100];
    scanf("%s",a);
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='O'){
            count++;
            score=score+count;
        }
        if(a[i]=='X'){
            count=0;
        }
    }
    printf("%d",score);
}
