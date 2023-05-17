#include <stdio.h>

double *get_max(double *A, int size)
{
    double *maxNumber = &A[0];
    for(int i = 0; i < size; i++)
    {
        for (int f = i; f < size; f++)
        {
            if(A[i] < A[f])
            {
                maxNumber = &A[f];
         }
        }
        
    }
    return maxNumber;
}

int main(void)
{
    double A[] = {1.23, 3.14, 9.16, 100.90};
    int A_size = sizeof(A)/sizeof(A[0]);
    
    printf("Max number is %.2lf\n",*(double*)get_max(A,A_size));

    return 0;
}