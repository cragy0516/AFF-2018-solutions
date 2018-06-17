#include <stdio.h>
#include <string.h>
int main(){
	char a;	
	int i;
	int cnt=0;
	
	while(1){
		scanf("%c",&a);
		
		if(a=='\0'||a=='\n')
			break;
		
		if(a=='('){
			cnt++;
		}
		else if(a==')'){
			cnt--;
		}
		
		if(cnt<0){
			break;
		}
	}
	
	if(cnt==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}