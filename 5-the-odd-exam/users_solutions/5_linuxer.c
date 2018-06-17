#include <stdio.h>
#include <string.h>
char s[100];

int main() {
    int d, cont = 0, re = 0;
    int a, b;
    scanf("%d", &d);
       scanf("%s", s);
       re = 0;
       cont = 0;
       for(b = 0; b < strlen(s); b++) {
          if(s[b] == 'O') {
            ++cont;
            re = re + cont;
          }
          else if(s[b] == 'X'){
              cont = 0;
          }
       }
       printf("%d", re);


     return 0;

}
