#include <stdio.h>
#define SIZE 10
#define SEARCH 200

int search(int *A, int size, int search_value)
{
    for(int i = 0; i < size; i++)
    {
        if(A[i] == search_value)
        {
            return i;
        }
    }

    return 0;
}

int main(void)
{
    int A[SIZE] = {0, 73, 35, 200, 100};
    printf("Index %d have %d salary\n",search(A,SIZE,SEARCH), SEARCH);

    return 0;
}