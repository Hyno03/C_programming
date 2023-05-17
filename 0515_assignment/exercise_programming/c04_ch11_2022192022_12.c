#include <stdio.h>
#define SIZE 10

int array_sum(int *A, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += A[i];
    }

    return sum;
}

int main(void)
{
    int A[SIZE] = {1,2,3};
    printf("A[] = ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nSum is %d\n", array_sum(A, SIZE));

    return 0;
}