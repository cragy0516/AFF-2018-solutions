#include <stdio.h>

int main(void) {
	int year, month, day, month1, day1;
	scanf("%d-%d-%d", &year, &month, &day);
	if(month<10){
		month1=0;
		month=month%10;
	}
	else{
		month1=1;
		month=month%10;
	}
	
	if(day<10){
		day1=0;
		day=day%10;
	}
	else if(day>=10 && day<20){
		day1=1;
		day=day%10;
	}
	else if(day>=20 && day<30){
		day1=2;
		day=day%10;
	}	
	else{
		day1=3;
		day=day%10;
	}
	printf("%d년 %d%d월 %d%d일 \n", year, month1, month, day1, day);
}