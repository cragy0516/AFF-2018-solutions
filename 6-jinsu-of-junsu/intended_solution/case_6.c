#include <stdio.h>

int cal(int n, int a);

int main ()
{
	int n, a;
	scanf("%d",&n);
	scanf("%d",&a);
	cal(n, a);
}

int cal (int n, int a)
{
  	int quotient, remainder;
	remainder = a%n;
	quotient = a;
	a = a/n;
	if (quotient >= 2) {
		cal(n, a);
		if(remainder>9) {
			remainder = remainder+55;
			printf("%c", remainder);
		} else printf("%d", remainder);
	} else if (quotient != 0) {
		printf("%d", quotient);
	}
	return 0;
}
