#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double cal_area(double radius)
{
    double circle_area = M_PI * radius * radius;
    return circle_area;
}

int main(void)
{
    printf("Enter the radius : ");
    double r;
    if(scanf("%lf",&r) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Circle area is %.2lf\n",cal_area(r));

    return 0;
}