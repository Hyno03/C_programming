#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter actual number and power times : \n");
    
    int actual_num, power_time;
    if(scanf("%d %d",&actual_num,&power_time) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }

    double result = 1;
    for(int i = 1; i <= power_time; i++)
    {
        result *= actual_num;
    }
    printf("Result is %lf\n",result);
    return 0;
}