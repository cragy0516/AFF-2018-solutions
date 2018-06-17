#include<stdio.h>
#include<string.h>

int main(){
	char time[30];
	scanf("%s",time);
	char *ptr = strtok(time,"-");
	int i=0;
	while(ptr != NULL ){
		if( i == 0 ){
			printf("%s년 ",ptr);
		}
		else if( i== 1) {
			printf("%s월 ",ptr);
		}
		else if( i==2 ){
			printf("%s일 ",ptr);
		}
		ptr = strtok(NULL,"-");
		i++;
	}
	printf("\n");
	return 0;
}
