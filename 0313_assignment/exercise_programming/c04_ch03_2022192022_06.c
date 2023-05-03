#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Write your weight : \n");

    double weight_on_earth;
    if(scanf("%lf", &weight_on_earth) < 1)
    {
        printf("Not a correct input");
        return 0;
    }

    double weight_on_moon = weight_on_earth * 0.17;
    printf("Your weight on moon is %.2lfkg", weight_on_moon);

    return 0;
}