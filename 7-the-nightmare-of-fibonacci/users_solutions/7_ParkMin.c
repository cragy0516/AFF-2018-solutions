#include <stdio.h>

int main() {

  unsigned long long a = 0;
  unsigned long long b = 1;
  unsigned long long temp;
  int input, n;
  
  scanf("%d", &input);


  for (n = 0; n < input; n++) {
    temp = a;
    a = b;
    b = temp + b;
  }
  
  printf("%llu",a);


  return 0;
}