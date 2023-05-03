#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income)
{
    if(income <= 1000)
    {
        int tax = income * 0.08;
        return tax;
    }
    else
    {
        int tax = 1000 * 0.08 + (income - 1000) * 0.1;
        return tax;
    }
}

int main(void)
{
    printf("Enter your income : ");
    int income;
    if(scanf("%d",&income) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Your tax is %d\n",get_tax(income));
    return 0;
}