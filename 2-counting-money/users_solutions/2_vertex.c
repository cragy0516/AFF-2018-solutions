#include <stdio.h>
#include <string.h>
int main(){
	char a[1000];
	int l;
	scanf("%s",&a);
	
	l = strlen(a);
	for(int i=0;i<l;i++){
		printf("%c",a[i]);
		if((l-i-1)%3==0 && i!=l-1)
			printf(",");
	}
}