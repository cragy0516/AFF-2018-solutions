#include <stdio.h>
int main(void){
	int i;
	int j;
	int n;
	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}
		printf("o");  // 알파벳 o
		for(j=n; j>i; j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
