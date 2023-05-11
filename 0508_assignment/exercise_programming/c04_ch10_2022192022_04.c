#include <stdio.h>
#define arraySize 10

int array_copy(int a[], int b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    return b[size];
}

int main(void)
{
    int a[arraySize] = {1,2,3};
    int b[arraySize] = {0};

    array_copy(a,b,arraySize);
    for(int i = 0; i < arraySize; i++)
    {  
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < arraySize; i++)
    {  
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("Copy finished\n");
    return 0;
}