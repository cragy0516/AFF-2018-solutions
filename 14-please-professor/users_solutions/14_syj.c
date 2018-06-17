#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(0.0<=x && x<1.0){
        printf("F");
    }   
    else if(1.0<=x && x<1.5){
        printf("D0");
    }   
    else if(1.5<=x && x<2.0){
        printf("D+");
    }   
    else if(2.0<=x && x<2.5){
        printf("C0");
    }   
    else if(2.5<=x && x<3.0){
        printf("C+");
    }   
    else if(3.0<=x && x<3.5){
        printf("B0");
    }
    else if(3.5<=x && x<4.0){
        printf("B+");
    }
    else if(4.0<=x && x< 4.5){
        printf("A0");
    }
    else if(4.5<=x){
        printf("A+");
    }
}
