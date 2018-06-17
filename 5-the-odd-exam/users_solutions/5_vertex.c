#include <stdio.h>
#include <string.h>
int main(){
	char a[1000];
	int l;
	scanf("%s",&a);
	
	l = strlen(a);
	int score=0;
	int total_score=0;
	
	for(int i=0;i<l;i++){
		if(a[i]=='O'){
			score++;
		}
		else{
			score = 0;
		}
		total_score += score;
	}
	printf("%d",total_score);
}