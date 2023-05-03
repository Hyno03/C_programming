#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int count = 0;
    int count_max = 10000000;
    srand(time(NULL));

    for(int i = 0; i < count_max; i++)
    {
        double x = (double)rand() / RAND_MAX * 2 - 1;
        double y = (double)rand() / RAND_MAX * 2 - 1;

        double circle = x*x + y*y;
        if(circle <= 1)
        {
            count++;
        }
    }

    double pi = 4.0*count/count_max;
    printf("%lf\n",pi);

    return 0;
}