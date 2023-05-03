#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power (int base, int power_raised)
{
    static int sum = 1;
    if(power_raised == 0)
    {
        return sum;
    }
    sum = base * power(base,power_raised - 1);
    return sum;
}

int main(void)
{
    printf("Enter the base and numerical index : ");
    int base,numerical_index;
    if(scanf("%d %d",&base,&numerical_index) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("%d^%d = %d\n",base,numerical_index,power(base,numerical_index));
    return 0;
}