#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the mass : \n");
    double mass;
    if(scanf("%lf",&mass) < 1)
    {
        printf("Not a correct input\n");
        return 0;
    }

    printf("Enter the speed : \n");
    double speed;
    if(scanf("%lf",&speed) < 1)
    {
        printf("Not a correct input\n");
        return 0;
    }

    double kenergy = 0.5 * mass * speed * speed;
    printf("%lf\n",kenergy);

    return 0;
}