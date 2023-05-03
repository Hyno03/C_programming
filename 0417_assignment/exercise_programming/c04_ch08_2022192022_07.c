#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round(double f)
{
    return (int)(f+0.5);
}

int main(void)
{
    printf("Enter the actual number : ");
    double num;
    if(scanf("%lf",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("%lf's round is %d\n",num,round(num));
    return 0;
}