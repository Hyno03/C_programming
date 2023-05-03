#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Write a Fahrenheit : \n");

    double f;
    if(scanf ("%lf", &f) < 1)
    {
        printf("Not a correct input");
        return 0;
    }

    double c = (f - 32.0) * 5.0 / 9.0;
    printf ("Celsius is %.2lf", c);

    return 0;
}