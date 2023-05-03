#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.14


int main(void)
{
    printf("Enter the distance : \n");
    
    double distance;
    if(scanf("%lf",&distance) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Enter the angle : \n");

    double angle;
    if(scanf("%lf",&angle) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    double radius = distance * 360 / angle / (2 * pi);
    printf("Earth radius is %.2lf\n",radius);

    return 0;
}