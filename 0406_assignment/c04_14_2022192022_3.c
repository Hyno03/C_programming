#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand((unsigned)time(NULL)/3600);
    int com = rand()% 100 + 1;
    int ans;
    int try = 0;
    while (1)
    {
        if(scanf("%d",&ans)<1)
        {
            printf("invalid\n");
            break;
        }
        else if(ans > 1 && ans <= 100)
        {
            if(ans < com)
            {
                printf("up\n");
                try++;
                continue;
            }
            else if(ans > com)
            {
                printf("down\n");
                try++;
                continue;
            }
            else
            {   
                try++;
                printf("correct %d\n",try);
                break;
            }
        }
        else
        {
            printf("invalid\n");
            break;
        }
    }
    
    return 0;
}