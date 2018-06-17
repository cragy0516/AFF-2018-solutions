
/*0.0보다 크거나 같고, 1.0보다 작다. : F
1.0보다 크거나 같고, 1.5보다 작다. : D0
1.5보다 크거나 같고, 2.0보다 작다. : D+
2.0보다 크거나 같고, 2.5보다 작다. : C0
2.5보다 크거나 같고, 3.0보다 작다. : C+
3.0보다 크거나 같고, 3.5보다 작다. : B0
3.5보다 크거나 같고, 4.0보다 작다. : B+
4.0보다 크거나 같고, 4.5보다 작다. : A0
4.0보다 크거나 같다. : A+*/

#include <stdio.h>

int main()
{
	float n;
	
	scanf("%f",&n);
	
	if(n>=0.0 && n<1.0)
	{
		printf("F");
	}
	
	else if(n>=1.0 && n<1.5)
	{
		printf("D0");
	}
	
	else if(n>=1.5 && n<2.0)
	{
		printf("D+");
	}
	
	else if(n>=2.0 && n<2.5)
	{
		printf("C0");
	}
	
	else if(n>=2.5 && n<3.0)
	{
		printf("C+");
	}
	else if(n>=3.0 && n<3.5)
	{
		printf("B0");
	}
	else if(n>=3.5 && n<4.0)
	{
		printf("B+");
	}
	
	else if(n>=4.0 && n<4.5)
	{
		printf("A0");
	}
	
	else {
		printf("A+");
	}

	
}