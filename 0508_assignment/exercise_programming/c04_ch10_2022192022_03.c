#include <stdio.h>
#define arraySize 10

int array_equal(int a[], int b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int a[arraySize] = {1,2,3};
    int b[arraySize] = {0};
    
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

    if(array_equal(a,b,arraySize))
    {
        printf("Array same\n");
    }
    else
    {
        printf("Array different\n");
    }

    return 0;
}