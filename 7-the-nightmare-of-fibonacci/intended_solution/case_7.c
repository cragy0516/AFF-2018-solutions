#include <stdio.h>

int main ()
{
	int n,i;
	unsigned long long int fibo[100];
	scanf("%d",&n);
	fibo[0] = 0;
	fibo[1] = 1;
	for (i=2; i<=n; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	printf("%llu\n", fibo[n]);
	return 0;
}
