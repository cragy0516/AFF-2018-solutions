#include <stdio.h>
/*
*o********** 0 9
**o********* 1 8
***o******** 2 7
****o*******
*****o******
******o*****
*******o****
********o***
*********o**
**********o*
*/

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	
	for(i=n; i>0; i--)
	{
		for(j=0; j<n-i; j++)
		{
			printf("*");
		}
		
		printf("*o*");
		
		for(k=0; k<i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
