#include <stdio.h>

int main ()
{
	float n;
	scanf("%f", &n);
	if (n >= 4.5) {
		printf("A+");
	} else if (n >= 4.0) {
		printf("A0");
	} else if (n >= 3.5) {
		printf("B+");
	} else if (n >= 3.0) {
		printf("B0");
	} else if (n >= 2.5) {
		printf("C+");
	} else if (n >= 2.0) {
		printf("C0");
	} else if (n >= 1.5) {
		printf("D+");
	} else if (n >= 1.0) {
		printf("D0");
	} else printf("F");
}
