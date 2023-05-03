#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the hour and age : \n");

    int hour,age;
    if(scanf("%d %d",&hour,&age)<2)
    {
        printf("Wrong input\n");
        return 0;
    }
    
    if(hour<17)
    {
        if(age>=65 || (age>=3 && age <=12))
        {
            printf("Price is 25,000\n");
            return 0;
        }
        else
        {
            printf("Price is 34,000\n");
            return 0;
        }
    }
    else
    {
        printf("Price is 10,000\n");
        return 0;
    }

    return 0;
}