#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double factorial(int num)
{
    double sum = 1.0;
    for(int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}

double factorial_result(int num)
{
    double sum = 1.0;
    for(int i = 1; i <= num; i++)
    {
        sum += 1.0/factorial(i);
    }
    return sum;
}

int main(void)
{
    printf("Enter the number you want to count : ");
    int num;
    if(scanf("%d",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Oiler count is %lf",factorial_result(num));
    return 0;
}