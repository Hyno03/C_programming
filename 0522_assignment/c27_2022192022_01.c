#include <stdio.h>

struct vector
{
    double x;
    double y;
};

void get_vector_sum(struct vector *sum, const struct vector *a, const struct vector *b)
{
    sum -> x = a -> x + b -> x;
    sum -> y = a -> y + b -> y;
}

int main(void)
{
    struct vector a = {2, 3};
    struct vector b = {5, 6};
    struct vector sum;

    get_vector_sum(&sum, &a, &b);
    printf("Vector's sum is (%.1lf, %.1lf)\n",sum.x,sum.y);

    return 0;
}