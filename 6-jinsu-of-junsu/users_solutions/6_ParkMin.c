#include<stdio.h> 

//  
//8 20 ... 4
//  16 ... 2

//num_10 % n 을 num_10 / n이 n보다 작을때까지? 
//몫 -> 나머지 나머지 나머지,,,
//넣고 역순????
 
int main() 
{ 
	int base, num_10, i=99; 
	char buf[17]="0123456789ABCDEF"; //문자선택 
	char result[100]; 

	scanf("%d",&base); 
	scanf("%d",&num_10);  

	result[i]='\0'; //result의 end인덱스에 널넣 기 
	
	while(num_10!=0) { 
		result[--i]=buf[num_10%base]; 
		num_10 /= base; 
	}	 
	printf("%s",&result[i]); 
}