#include <stdio.h>

char arr[200]; //스택
int top = -1;
int size = 0;
void push(char v);
char pop();

void main() {
	int n = 0;
	int i = 0;
	char num[300];
	int cnt = 0;
	scanf("%s", num);

	while (num[i] != '\0') { //자릿수 계산
		n++;
		i++;
	}

	for (i = n - 1; i >= 0; i--) { //스택에 일의 자리부터 push
		if (cnt % 3 == 0 && cnt != 0) { //이 때, 3번 마다 스택에 ,를 삽입해줌
			push(',');
		}
		char data = num[i];
		push(data);
		cnt++;
	}

	for (int i = 0; i < size; i++) { //맨 윗자리부터 pop
		printf("%c", pop());
	}
}
void push(char v) { //푸쉬
	arr[++top] = v;
	size++;
}

char pop() { //팝
	return arr[top--];
	size--;
}
