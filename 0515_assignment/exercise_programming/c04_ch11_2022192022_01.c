#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_frac(double f, int *pi, double *pd)
{
    printf("get_frac(%lf) was called\n",f);

    *pi = (int)f;
    *pd = f  - *pi;
    printf("Integral part is %d\n",*pi);
    printf("Real part is %lf\n",*pd);
}

int main(void)
{
    printf("Enter the real number : ");
    double inputNum;
    if(scanf("%lf",&inputNum) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int pi;
    double pd;
    get_frac(inputNum,&pi,&pd);
    return 0;
}