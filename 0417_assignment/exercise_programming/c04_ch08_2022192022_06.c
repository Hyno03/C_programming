#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year)
{
    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    printf("Enter the year : ");
    int year;
    if(scanf("%d",&year) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    if(is_leap(year))
    {
        printf("%d is a leap year\n", year);
        return 0;
    }
    else 
    {
        printf("%d is not a leap year\n",year);
        return 0;
    }
    return 0;
}