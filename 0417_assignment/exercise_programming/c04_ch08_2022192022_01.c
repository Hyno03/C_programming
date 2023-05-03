#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int even(int n)
{
    if(n%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int absolute(int n)
{
    return (abs(n));
}

int sign(int n)
{
    if(n > 0)
    {
        return 1;
    }
    else if(n < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    printf("Enter the integers : ");
    int num;
    if(scanf("%d",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }
    
    printf("Result of even() : %d\n",even(num));
    printf("Result of absolute() : %d\n",absolute(num));
    printf("Result of sign() : %d\n",sign(num));

    return 0;
}
