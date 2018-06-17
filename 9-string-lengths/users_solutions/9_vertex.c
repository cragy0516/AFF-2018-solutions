#include <stdio.h>
#include <string.h>
int main(){
	char a[1000];
	char b[1000];
	scanf("%s\n%s",&a,&b);
	printf("%d",strlen(a)+strlen(b));
	return 0;
	
}