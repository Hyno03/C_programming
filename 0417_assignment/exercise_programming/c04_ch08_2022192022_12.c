#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_first_digit(int n)
{
    while(n>=10)
    {
        n /= 10;
    }
    return n;
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
    printf("The most high number is %d\n",get_first_digit(num));
}