#include <stdio.h>

float sum(float _a, float _b);
float sub(float _a, float _b);
float mul(float _a, float _b);
float div(float _a, float _b);

int main () {
	float a, b;
	float result = 0;
	char oper;
	scanf("%f%c%f", &a, &oper, &b);
	if (oper == '+') {
		result = sum(a, b); 
	} else if (oper == '-') {
		result = sub(a, b); 
	} else if (oper == '*') {
		result = mul(a, b); 
	} else if (oper == '/') {
		result = div(a, b); 
	}   
	printf("%f", result);

	return 0;
}

float sum(float _a, float _b) { return _a + _b; }
float sub(float _a, float _b) { return _a - _b; }
float mul(float _a, float _b) { return _a * _b; }
float div(float _a, float _b) { return _a / _b; }

