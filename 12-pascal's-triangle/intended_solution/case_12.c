#include <stdio.h>

int main(void)
{
	int n, x, y, T, divisor=1000000007;
	unsigned long long PascalTriangle[1000][1000];
	unsigned int A, B, C;
	PascalTriangle[0][0] = 1;
	for(int i=1 ; i<1000 ; i++){
		PascalTriangle[i][0] = 1;
		PascalTriangle[i][i] = 1;
		for(int j=1 ; j<i ; j++){
			PascalTriangle[i][j]=(PascalTriangle[i-1][j] + PascalTriangle[i-1][j-1])%divisor;
		}
	}
	scanf("%d", &T);
	int answer[T+1];
	for(int k=1 ; k<=T ; k++){
		scanf("%d %d %d", &n, &x, &y);
		A=PascalTriangle[x][y];
		B=PascalTriangle[(n-1)-(x-y)][(n-1)-x];
		C=PascalTriangle[(n-1)-y][x-y];
		answer[k] = (A+B+C)%divisor;
	}
	for(int testCase=1 ; testCase<=T ; testCase++){
		printf("Case %d\n", testCase);
		printf("%d\n", answer[testCase]);
	}
	return 0;
}

