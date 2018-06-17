#include<stdio.h>
#include<string.h>

int main(void){
	char str1[50];
	char str2[50];
	
	scanf("%s", str1);
	scanf("%s", str2);

	printf("%d", strlen(strcat(str1, str2)));

	return 0;
}
