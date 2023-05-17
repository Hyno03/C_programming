#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

void array_fill(int A[], int sizeA)
{
    for(int i = 0; i < sizeA; i++)
    {
        A[i] = rand();
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(void)
{
    srand(time(NULL));
    int pointA[size] = {0};
    array_fill(pointA,size);
}