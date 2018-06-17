#include <stdio.h>

int main()
{
        int input = 0;
        scanf("%d", &input);
        int j = input;
        int o = 0;
        int k = 1;
        for (int i = 0; i<input; i++) {
                j -= k;
                for (j; j < input; j++)
                        printf("*");
                printf("o");
                j = input;
                for (o; o<input; o++)
                        printf("*");
                o = k;
                k++;
                printf("\n");
        }
}
