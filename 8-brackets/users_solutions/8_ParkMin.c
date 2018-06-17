#include <stdio.h>

int main()
{
	char code[255];
	gets(code);
	int i;
	int head =0, tail =0;
	for(i=0; code[i] != '\0'; i++) {
		if(code[i] == '(')
		{
			head++;
		}
		
		else if(code[i] == ')')
		{
			head--;
		}
		
		if(head<0) {
			break;
		}
	}
	if(head == 0)
	{
		printf("YES");
	}
	
	else if(head != 0)
	{
		printf("NO");
	}	
}