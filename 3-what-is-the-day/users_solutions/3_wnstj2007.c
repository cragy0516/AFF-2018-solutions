
#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;
    char a1; 
    char a2; 

    scanf("%d %c %d %c %d", &year, &a1, &month, &a2, &day);
    if(month >= 10 && day >= 10) 
    {   
        printf("%d년 %d월 %d일 \n", year, month, day);
    }   
    else if(month >= 10) 
    {   
        printf("%d년 %d월 %d%d일 \n", year, month, 0, day);
    }   
    else if(day >= 10) 
    {   
        printf("%d년 %d%d월 %d일 \n", year, 0, month, day);
    }   
    else if(month <10 && day < 10) 
    {   
        printf("%d년 %d%d월 %d%d일 \n", year, 0, month, 0, day);
    }   
}
