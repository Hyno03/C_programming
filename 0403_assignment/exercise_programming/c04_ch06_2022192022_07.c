#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter your height and weight : \n");

    double h,w;
    if(scanf("%lf %lf",&h,&w) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }

    double normal = (h - 100) * 0.9;
    if(normal < 18.5)
    {
        printf("Low\n");
        return 0;
    }
    else if(normal >= 18.5 && normal < 23)
    {
        printf("Normal\n");
        return 0;
    }
    else
    {
        printf("Fat\n");
        return 0;
    }
    return 0;
}