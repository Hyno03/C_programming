#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("Choose the number (1: scissor, 2: rock, 3: paper) : \n");

    int rsp;
    if(scanf("%d",&rsp)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    srand((unsigned int)time(NULL));
    int com_rsp = rand()%3 +1;
    printf("Computer chose %d. (1: scissor, 2: rock, 3: paper)\n",com_rsp);
    if((com_rsp == 1 && rsp == 2) || (com_rsp == 2 && rsp == 3) || (com_rsp == 3 && rsp == 1))
    {
        printf("You win\n");
        return 0;
    }
    else if((rsp == 1 && com_rsp == 2) || (rsp == 2 && com_rsp == 3) || (rsp == 3 && com_rsp == 1))
    {
        printf("Computer win\n");
        return 0;
    }
    else
    {
        printf("Both chose same num\n");
        return 0;
    }


    return 0;
}