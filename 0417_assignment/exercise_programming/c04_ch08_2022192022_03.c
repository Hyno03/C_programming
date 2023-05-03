#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_bigger(double a, double b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    printf("Enter two actual number : ");
    double num1,num2;
    if(scanf("%lf %lf",&num1,&num2) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("%lf is bigger\n",get_bigger(num1,num2));
    return 0;
}