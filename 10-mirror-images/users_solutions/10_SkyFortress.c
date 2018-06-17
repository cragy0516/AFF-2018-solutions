#include <stdio.h>
#include <string.h>
char* str_reverse(char *k){
	int k1=strlen(k);
	char t;
	for(int i = 0;i<k1/2;i++){
		t=k[i];
		k[i]=k[k1-1-i];
		k[k1-1-i]=t;
	}
	k[k1]='\0';
	return k;
}
int main(void) {
	char a[51], b[51], c[51], d[51], e[51];
	scanf("%s",a);scanf("%s",b);scanf("%s",c);scanf("%s",d);scanf("%s",e);
	char *a1=str_reverse(a);
	char *b1=str_reverse(b);
	char *c1=str_reverse(c);
	char *d1=str_reverse(d);
	char *e1=str_reverse(e);
	printf("%s\n%s\n%s\n%s\n%s\n",a1,b1,c1,d1,e1);
}