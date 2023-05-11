#include <stdio.h>
#define size 3

double vector_dot_prod(double x[], double y[])
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += x[i]*y[i];
    }
    return sum;
}

int main(void)
{
    double vector[size] = {1, 2, 3};
    vector_dot_prod(vector,vector);
    for(int i = 0; i < 2; i++)
    {
        printf("[ ");
        for(int j = 0; j < size; j++)
        {
            printf("%.2lf ",vector[j]);
        }
        printf("]");
        if(i == 0)
        {
            printf(" * ");
        }
    }
    printf(" = %.2lf\n",vector_dot_prod(vector,vector));

    return 0;
}