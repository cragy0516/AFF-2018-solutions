#include<stdio.h>
#include<string.h>

int main(void){
	char str[5][30]; // 2차원 배열 선언
	int i, j;

	for(i = 0 ; i<5 ; i++){ // 2차원 배열 row에 i번째 문자열 입력
		scanf("%s", str[i]);
	}
	for(i=0 ; i<5 ; i++){ // row 배열의 i
		for(j = strlen(str[i]) ; j >=0 ; j--) // reverse를 수행하는 for
			printf("%c", str[i][j]); // str[i][j]를 캐릭터 형태로 reverse해서 출력
	printf("\n"); // 엔터
	}

	return 0;
}
