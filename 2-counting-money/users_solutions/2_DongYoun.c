#include <stdio.h>

int main()
{
        char money[100];
        int money_len=0;
        scanf("%s", money);
        while (money[money_len] != '\0')
                money_len++;
        for (int i = 0; i < money_len; i++) {
                printf("%c", money[i]);
                if (money_len%3 == 1)
                        if(i%3 == 0 & i != money_len -1)
                                printf(",");
                if (money_len%3 == 2)
                        if(i%3 == 1 & i != money_len -1)
                                printf(",");
                if (money_len%3 == 0)
                        if(i%3 == 2 & i != money_len -1)
                                printf(",");
        }
}