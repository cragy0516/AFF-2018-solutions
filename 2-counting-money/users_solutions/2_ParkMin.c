//입력 >> 문자열
//100 000 000 3%length == 0
//10 000 000 == 2
//1 000 000 == 1
//100 000 

#include <stdio.h>

int check_length(char arr[])
{
	int length = 0;
	int i;
	for(i=0; arr[i] != '\0'; i++)
	{
		length++;
	}
	
	return length;
}


int main() {
	char money[255];
	
	scanf("%s", &money);
	int len = check_length(money);
	
	int i;
	if(len<4) {
		printf("%s",money);
	}
	
	else if(len>=4 && len%3 == 0)
	{
		for(i=0; money[i] != '\0'; i++) {
			printf("%c", money[i]);
			
			if((i+1)%3 == 0 && i != len-1) {
				printf(",");
			}
		}
	}
	
		else if(len>=4 && len%3 == 1)
	{
		printf("%c,",money[0]);
		for(i=1; money[i] != '\0'; i++) {
			printf("%c", money[i]);
			
			if(i%3 == 0 && i != len-1) {
				printf(",");
			}
		}
	}
	
		else if(len>=4 && len%3 == 2)
	{
		printf("%c%c,",money[0],money[1]);
		
		for(i=2; money[i] != '\0'; i++) {
			printf("%c", money[i]);
			
			if((i-1)%3 == 0 && i != len-1) {
				printf(",");
			}
		}
	}
	
}