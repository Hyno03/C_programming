#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 1.0;
    double b = 0.9;
    printf("(%f - %f) == 0.1 is %d.\n",a,b,(fabs(a-b)) < 0.1001);

    return 0;
}