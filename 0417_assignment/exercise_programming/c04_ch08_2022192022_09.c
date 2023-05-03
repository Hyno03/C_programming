#include <stdio.h>
#include <math.h>

double sin_degree(double degree)
{
    double degree_angle = (M_PI * degree) / 180.0;
    return sin(degree_angle);
}

int main(void)
{
    for(double angle = 0; angle <= 180; angle += 10)
    {
        printf("sin(%lf) is %lf\n",angle,sin_degree(angle));
    }

    return 0;
}