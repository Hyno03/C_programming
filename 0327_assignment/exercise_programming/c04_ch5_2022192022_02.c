#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter a actual number : \n");

    double x,y;
    if(scanf("%lf %lf",&x,&y)<2)
    {
        printf("Wrong input\n");
        return 0;
    }

    double sum = x+y;
    printf("%.2f\n",sum);

    double min = x-y;
    printf("%.2f\n",min);

    double mul = x*y;
    printf("%.2f\n",mul);

    double div = x/y;
    printf("%.2f\n",div);
    return 0;
}