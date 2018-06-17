#include <stdio.h>

int main()
{
        double score;
        scanf("%lf", &score);
        if (score >= 0 & score < 1)
                printf("F");
        else if (score >= 1 & score < 1.5)
                printf("D0");
        else if (score >= 1.5 & score < 2.0)
                printf("D+");
        else if (score >= 2.0 & score < 2.5)
                printf("C0");
        else if (score >= 2.5 & score < 3.0)
                printf("C+");
        else if (score >= 3.0 & score < 3.5)
                printf("B0");
        else if (score >= 3.5 & score < 4.0)
                printf("B+");
        else if (score >= 4.0 & score < 4.5)
                printf("A0");
        else if (score >=4.5)
                printf("A+");
}
