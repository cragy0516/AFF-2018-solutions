#include <stdio.h>

int main()
{
    char word[50];
    int s=1;
    int score = 0;
    
    scanf("%s", &word);
    for(int i=0; i<50; i++)
    {   
        if(i==0)
        {   
            if(word[i] == 'O')
            {   
                score++;
            }   
        }   
        else
        {   
            if(word[i] == 'X')
            {   
                s = 1;
            }   
            if(word[i] == 'O' && word[i-1] == 'O')
            {   
                s++;
                score += s;
            }   
            else if(word[i] == 'O')
            {   
                score++;
            }
        }
    }
    printf("%d", score);
}
