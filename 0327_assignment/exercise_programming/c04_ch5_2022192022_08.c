#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.14159

int main(void)
{
    printf("Enter the radius of sphere : \n");

    double radius;
    if(scanf("%lf",&radius)<1)
    {
        printf("Wrong input\n");
        return 0;
    }
    
    double surface = 4 * pi * radius * radius;
    printf("Surface : %.2f\n",surface);
    double solidity = pi * radius * radius * radius * 4 / 3;
    printf("Solidity : %.2f\n",solidity);

    return 0;
}