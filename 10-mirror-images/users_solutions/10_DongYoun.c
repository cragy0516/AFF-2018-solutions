#include <stdio.h>

int main()
{
        char s1[10], s2[10], s3[10], s4[10], s5[10];
        int s1_leng=0, s2_leng=0, s3_leng=0, s4_leng=0, s5_leng=0;
        scanf("%s", s1);
        scanf("%s", s2);
        scanf("%s", s3);
        scanf("%s", s4);
        scanf("%s", s5);
        while (s1[s1_leng] != '\0')
                s1_leng++;
        while (s2[s2_leng] != '\0')
                s2_leng++;
        while (s3[s3_leng] != '\0')
                s3_leng++;
        while (s4[s4_leng] != '\0')
                s4_leng++;
        while (s5[s5_leng] != '\0')
                s5_leng++;
        for(s1_leng; s1_leng>= 0; s1_leng--)
                printf("%c", s1[s1_leng]);
        printf("\n");
        for(s2_leng; s2_leng>= 0; s2_leng--)
                printf("%c", s2[s2_leng]);
        printf("\n");
        for(s3_leng; s3_leng>= 0; s3_leng--)
                printf("%c", s3[s3_leng]);
        printf("\n");
        for(s4_leng; s4_leng>= 0; s4_leng--)
                printf("%c", s4[s4_leng]);
        printf("\n");
        for(s5_leng; s5_leng>= 0; s5_leng--)
                printf("%c", s5[s5_leng]);
        printf("\n");
}
