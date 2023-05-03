#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Write a actual number : \n");

    float x;
    if(scanf("%f", &x) < 1)
    {
        printf("Not a correct input");
        return 0;
    }

    float formula = (3 * x * x) + (7 * x) + 11;
    printf("The result of polynomial is %.2f",formula);

    return 0;
}