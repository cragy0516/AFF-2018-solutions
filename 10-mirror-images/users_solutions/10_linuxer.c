#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, k;
    char str1[30];
    char str2[30];
    char str3[30];
    char str4[30];
    char str5[30];

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    scanf("%s", str4);
    scanf("%s", str5);

    k = strlen(str1);
    for(i=k-1; i>=0; i--)
    {
       printf("%c", str1[i]);
    }
    printf("\n");

    k = strlen(str2);
    for(i=k-1; i>=0; i--)
    {
       printf("%c", str2[i]);
    }
    printf("\n");

    k = strlen(str3);
    for(i=k-1; i>=0; i--)
    {
       printf("%c", str3[i]);
    }
    printf("\n");

    k = strlen(str4);
    for(i=k-1; i>=0; i--)
    {
       printf("%c", str4[i]);
    }
    printf("\n");

    k = strlen(str5);
    for(i=k-1; i>=0; i--)
    {
       printf("%c", str5[i]);
    }
    printf("\n");

    return 0;

}