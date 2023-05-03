#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int roop;
    if(scanf("%d",&roop) <1)
    {
        printf("Wrong input\n");
        return 0;
    }

    double sum = 0;
    double div_up = 4.0;
    double div_down = 1.0;
    while(roop > 0)
    {
        sum += div_up / div_down;
        div_up *= -1;
        div_down += 2;
        roop--;
    }

    printf("pi = %.15f\n",sum);

    return 0;
}