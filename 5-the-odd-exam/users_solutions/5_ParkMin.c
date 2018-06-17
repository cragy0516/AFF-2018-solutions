/*
특이한 시험 문제가 있다. 이 문제에 대한 결과는 "OOXXOXXXOOO"과 같은 형식으로 제공된다.
O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제에 대한 점수는 그 문제까지 연속된 O의 개수가 된다.
즉, 위의 예시에서 1번 문제의 점수는 1점이고, 2번 문제의 점수는 2점이 된다.
결과 "OOXXOXXXOOO"에 대한 점수는 1+2+0+0+1+0+0+0+1+2+3 = 10 점이 된다.
문제의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오. (출력에 \n이 없음에 유의하시오.)
*/
// OXOO
#include <stdio.h>

int main()
{
	int score = 0; // 총점
	char arr[255];
	scanf("%s", &arr);
	int i;
	int temp = 0, seq = 0;
	
	for(i=0; arr[i] != '\0'; i++)
	{
		if(arr[i] == 'O') {
			seq++;
			score = score + seq;
		}
		
		else {
			seq = 0;
			temp = 0;
		}
	}
	
	printf("%d",score);
}