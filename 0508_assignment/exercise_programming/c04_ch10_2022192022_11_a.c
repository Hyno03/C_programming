#include <stdio.h>
#define size 3

double vector_add(double x[], double y[], double z[])
{
    for(int i = 0; i< size; i++)
    {
        z[i] = x[i] + y[i];
    }

    return z[size];
}

int main(void)
{
    double vector[size] = {1, 2, 3};
    double vector_result[size] = {0};

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
            printf(" + ");
        }
    }
    printf(" = ");

    vector_add(vector,vector,vector_result);
    printf("[ ");
    for(int j = 0; j < size; j++)
    {
        printf("%.2lf ",vector_result[j]);
    }
    printf("]\n");

    return 0;
}