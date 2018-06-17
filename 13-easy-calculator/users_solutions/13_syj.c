#include <stdio.h>
int main()
{
    float num1=0;
    float num2=0;
    char oper='0';
    scanf("%f%c%f",&num1,&oper,&num2);
        
    if(oper=='+'){
        float result_plus=num1+num2;
        printf("%.6f",result_plus);
    }   
    else if (oper=='-'){
        float result_minus=num1-num2;
        printf("%.6f",result_minus);
    }   
    else if (oper=='*'){
        float result_multi=num1*num2;
        printf("%.6f",result_multi);
    }   
    else if(oper=='/'){
        float  result_div=(float)num1/(float)num2;
        printf("%.6f",result_div);
    }
}
