#include <stdio.h>

int main(void) {
    float a;
    scanf("%f",&a);
    if(a>=0.0 && a<1.0){
    	printf("F");
    }
    else if(a>=1.0 && a<1.5){
    	printf("D0");
    }
    else if(a>=1.5 && a<2.0){
    	printf("D+");
    }
    else if(a>=2.0 && a<2.5){
    	printf("C0");
    }
    else if(a>=2.5 && a<3.0){
    	printf("C+");
    }
    else if(a>=3.0 && a<3.5){
    	printf("B0");
    }
    else if(a>=3.5 && a<4.0){
    	printf("B+");
    }
    else if(a>=4.0 && a<4.5){
    	printf("A0");
    }
    else if(a>=4.5){
    	printf("A+");
    }
}
