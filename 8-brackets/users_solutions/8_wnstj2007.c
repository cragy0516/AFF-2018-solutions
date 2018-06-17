#include <stdio.h>

int main()
{
    char word[100];
    int open = 0;
    int close = 0;
    int gg = 0;
    
    for(int i=0;;i++)
    {   
        scanf("%c", &word[i]);
        if(word[i] == '\n')
        {   
            break;
        }   
    }   
    for(int i=0; i<100; i++)
    {   
        if(word[i] == '(')
        {   
            open++;
            gg = 1;
        }   
        if(word[i] == ')')
        {   
            close++;
            gg = 0;
        }   
    }   
    
    if(gg == 0)
    {
        if(open == close)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
}
