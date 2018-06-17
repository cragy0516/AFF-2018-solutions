#include <stdio.h>

int main(){
	float a;
	
	scanf("%f",&a);
	
	if(0<=a && a<1)
	{
		printf("F");
	}
	else if(1<=a && a<1.5)
	{
		printf("D0");
	}
	else if(1.5<=a && a<2.0)
	{
		printf("D+");
	}
	else if(2.0<=a && a<2.5)
	{
		printf("C0");
	}
	else if(2.5<=a && a<3.0)
	{
		printf("C+");
	}
	else if(3.0<=a && a<3.5)
	{
		printf("B0");
	}
	else if(3.5<=a && a<4.0)
	{
		printf("B+");
	}
	else if(4.0<=a && a<4.5)
	{
		printf("A0");
	}
	else if(4.5<=a )
	{
		printf("A+");
	}
	return 0;
	
}