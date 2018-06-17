#include <stdio.h>

#define min(x,y) (x<y ? x:y)

int main(void)
{
	int n, soju, min, half;
	scanf("%d",&n);
	scanf("%d",&soju);
	int amount[n][3];
	amount[0][0] = soju/2;
	amount[0][1] = 0;
	amount[0][2] = 0;
	for(int i=1 ; i<n ; i++){
		scanf("%d",&soju);
		half=soju/2;
		min = min(amount[i-1][1],amount[i-1][2]);
		min = min(amount[i-1][0]+half,min+soju);
		amount[i][0] = min;
		min = min(amount[i-1][0],amount[i-1][1]+half);
		amount[i][1] = min;
		min = min(amount[i-1][1],amount[i-1][2]+half);
		amount[i][2] = min;
	}
	min = min(amount[n-1][0], amount[n-1][1]);
	min = min(amount[n-1][2], min);
	printf("%d\n",min);
	return 0;
}
