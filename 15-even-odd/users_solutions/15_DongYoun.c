#include <stdio.h>

int main()
{
        int integer;
        scanf("%d", &integer);
        if (integer%2 == 1)
                printf("odd\n");
        else if (integer%2 == 0)
                printf("even\n");
}
