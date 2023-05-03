#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Write a real number\n");

    double x;
    if(scanf("%lf",&x) < 1)
    {
       printf("Not a correct input\n");
        return 0;
    }
    printf("Real number format is : %f\n",x);
    printf("Exponential format is %e\n",x);

    return 0;
}