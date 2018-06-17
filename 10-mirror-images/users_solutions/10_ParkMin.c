#include <stdio.h>
int check_length(char arr[]);
void reverse_arr(char arr[], int len);
int main()
{
	char s1[255], s2[255], s3[255], s4[255], s5[255];
	int length1,length2,length3,length4,length5;
	
	scanf("%s", &s1);
	scanf("%s", &s2);
	scanf("%s", &s3);
	scanf("%s", &s4);
	scanf("%s", &s5);
	
	length1 = check_length(s1);
	length2 = check_length(s2);
	length3 = check_length(s3);
	length4 = check_length(s4);
	length5 = check_length(s5);
	
	reverse_arr(s1,length1);
	reverse_arr(s2,length2);
	reverse_arr(s3,length3);
	reverse_arr(s4,length4);
	reverse_arr(s5,length5);
	
	
}

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

void reverse_arr(char arr[], int len)
{
	int i;
	for(i=len-1; i>=0; i--)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}