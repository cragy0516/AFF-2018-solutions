#include <stdio.h>
#include <string.h>
int main(){
	int n;
	int i,j;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("*");
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("o");
		for(j=0;j<n-i-1;j++){
			printf("*");
		}
			printf("*\n");
	}
}