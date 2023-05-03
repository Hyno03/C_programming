#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Write yout salary : \n");

    double salary;
    if(scanf("%lf", &salary) < 1)
    {
        printf("Not a correct input");
        return 0;
    }

    double year = 100000 / salary;
    printf("Time to raise a billion : %.2lf", year);

    return 0;
}