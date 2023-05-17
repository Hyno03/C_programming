#include <stdio.h>
#define size 10

int main(void)
{
    int *A;
    printf("A[] = ");
    for(int i = 0; i < size; i++)
    {
        *A = i;
        printf("%d ",*A);
    }
    printf("\nA[] = ");
    for (int i = size - 1; i >= 0; i--)
    {
        *A = i;
        printf("%d ",*A);
    }
    

    return 0;
}