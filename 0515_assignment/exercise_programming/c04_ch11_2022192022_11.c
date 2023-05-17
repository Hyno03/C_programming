#include <stdio.h>
#define SIZE 10

void array_add(int *A, int *B, int *C, int size)
{
    printf("C[] = ");
    for(int i = 0; i < size; i++)
    {
        C[i] = A[i] + B[i];
        printf("%d ",C[i]);
    }
    printf("\n");
}

int main(void)
{
    int A[SIZE] = {1,2,3};
    int B[SIZE] = {4,5,6};
    int C[SIZE] = {0};

    printf("A[] = ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nB[] = ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
    array_add(A,B,C,SIZE);

    return 0;
}