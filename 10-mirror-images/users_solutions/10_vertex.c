#include <stdio.h>
#include <string.h>
int main(){
	char a[5][1000];
	int i,j,s;
	
	for(i=0;i<5;i++){
		scanf("%s",&a[i]);
		s=strlen(a[i]);
	}
	
	for(i=0;i<5;i++){
		s=strlen(a[i]);
		for(j=s-1;j>=0;j--)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	
}