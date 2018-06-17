#include <stdio.h>

int main()
{
    char word1[100];
    char word2[100];
    int length1 = 0;
    int length2 = 0;

    scanf("%s", &word1);
    scanf("%s", &word2);
    for(int i=0; i<100; i++)
    {   
        if(word1[i] != '\0')
        {   
            length1++;
        }   
        else
        {   
            break;
        }   
    }   
    for(int i=0; i<100; i++)
    {   
        if(word2[i] != '\0')
        {   
            length2++;
        }   
        else
        {   
            break;
        }   
 }   
    printf("%d", length1+length2);
}   
