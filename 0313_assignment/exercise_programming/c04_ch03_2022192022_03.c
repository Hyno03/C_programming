#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("The base and height of the triangle : \n");

    float base;
    float height;
    if(scanf("%f %f",&base, &height) < 2)
    {
        printf("Not a correct input");
        return 0;
    }

    float area = 0.5 * height* base;
    printf("Area of tringle : %.2f",area);

    return 0;
}