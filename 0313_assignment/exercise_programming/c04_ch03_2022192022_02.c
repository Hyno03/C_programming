#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Write a mile : \n");

    float mile;
    if(scanf("%f", &mile) < 1)
    {
        printf("Not a correct input");
        return 0;
    }
    
    float meter = mile * 1609.0;
    printf("%.f mile is  %.2f meter.",mile, meter);

    return 0;
}