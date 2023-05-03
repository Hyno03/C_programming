#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }
    
}

int main(void)
{
    printf("Enter the integer : ");
    int num;
    if(scanf("%d",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    for(int i = 0; i <= num; i ++)
    {
        printf("fib(%d) = %d\n",i,fib(i));
    }
    return 0;
}