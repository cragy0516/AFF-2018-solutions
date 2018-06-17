#include<stdio.h>
#include<string.h>

int main(){
	char a[51];
	scanf("%s",a);
	int num = strlen(a);
	int hap=0, ka=0;
	for(int i = 0;i<num;i++){
		switch(a[i]){
			case 'O':ka++;hap+=ka;break;
			case 'X':ka=0;break;
		}
	}
	printf("%d",hap);
}