#include <stdio.h>

int main(void) {
    float a,b,d;
    char c;
    scanf("%f %c %f",&a,&c,&b);
    switch(c){
    	case '+':d=a+b;break;
    	case '-':d=a-b;break;
    	case '*':d=a*b;break;
    	case '/':d=a/b;break;
    }
    printf("%f",d);
}
