/*문자열 두 개를 각각 입력받고, 두 문자열의 총 길이를 출력해주는 프로그램을 작성하시오.
출력에는 \n이 없음에 유의하시오.*/

#include <stdio.h>

int main()
{
	char a[255];
	char b[255];
	
	scanf("%s",&a);
	scanf("%s",&b);
	
	int count_a = 0,count_b = 0;
	int i;
	
	for(i=0; a[i] != '\0'; i++)
	{
		count_a++;
	}
	
		for(i=0; b[i] != '\0'; i++)
	{
		count_b++;
	}
	
	printf("%d",count_a+count_b);
}