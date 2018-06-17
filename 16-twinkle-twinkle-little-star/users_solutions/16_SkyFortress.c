#include<stdio.h>

int main(){
	int a,t=0;
	scanf("%d", &a);
	for(int j = 0;j<a;j++){
		printf("*");
		for(int i = 0;i<a;i++){
			if(i==t){
				printf("o");
			}
			printf("*");
		}
		t+=1;
		printf("\n");
	}
}