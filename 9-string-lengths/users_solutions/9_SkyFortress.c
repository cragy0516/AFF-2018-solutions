#include<stdio.h>

int main(){
    char a[50];
    char b[50];
    int kay=0;
    scanf("%s",a);
    scanf("%s",b);
    for(int i = 0;a[i]!='\0';i++){
        kay+=1;
    }
    for(int i = 0;b[i]!='\0';i++){
        kay+=1;
    }
    printf("%d",kay);
}