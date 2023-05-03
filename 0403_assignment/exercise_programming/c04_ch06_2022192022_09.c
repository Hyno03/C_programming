#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the x : \n");

    int x;
    if(scanf("%d",&x)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    double minnus = x*x -9*x + 2;
    double plus = 7*x + 2;
    if(x<=0)
    {
        printf("f(x) is %lf",minnus);
        return 0;
    }
    else
    {
        printf("f(x) is %lf",plus);
        return 0;
    }

    return 0;
}