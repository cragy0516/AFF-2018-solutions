#include<stdio.h>
#include<string.h>

int main(){
	int ka=0, ke=0;
	char a[501];
	gets(a);
	int num=strlen(a);
	for(int i = 0;i<num;i++){
		if(a[i]=='('){
			ka++;
		}
		else if(a[i]==')'){
			ke++;
		}
	}
	if(ka==ke && a[num-1]==')'){
		printf("YES");
	}
	else{
		printf("NO");
	}
}