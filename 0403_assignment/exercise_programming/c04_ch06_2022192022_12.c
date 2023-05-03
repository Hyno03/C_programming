#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("Enter the number between 0~99 : \n");

    int lotto;
    if(scanf("%d",&lotto)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    srand((unsigned int)time(NULL));
    int com_lotto_ten = rand()%9;
    int com_lotto_one = rand()%9;
    printf("Lotto is %d%d\n",com_lotto_ten,com_lotto_one);

    int ten = lotto / 10;
    int one = lotto % 10;
    if(ten == com_lotto_ten && one == com_lotto_one)
    {
        printf("You got 100 dollars!\n");
        return 0;
    }
    else if(ten == com_lotto_ten || one == com_lotto_one)
    {
        printf("You got 50 dollars!\n");
        return 0;
    }
    else
    {
        printf("Try again~\n");
        return 0;
    }

    return 0;
}