#include <stdio.h>

int main()
{
        char s1[10];
        char s2[10];
        int s1_leng=0;
        int s2_leng=0;
        scanf("%s", s1);
        scanf("%s", s2);
        while (s1[s1_leng] != '\0')
                s1_leng++;
        while (s2[s2_leng] != '\0')
                s2_leng++;

        printf("%d", s1_leng + s2_leng);
}
