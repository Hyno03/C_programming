#include <stdio.h>
#define SIZE 4

void merge(int *A, int *B, int *C, int size)
{
    int a=0,b=0;
    printf("C[] = ");
    for(int i = 0; i < size * 2; i++)
    {
        if(a<size && b<size)
        {
			if(A[a] <= B[b])
            {
				C[i] = A[a];
				a++;
			}
			else if(A[a] > B[b])
            {
				C[i] = B[b];
				b++;
			}

		}
		else if(a == size)
        {
			C[i] = B[b];
			b++;
		}
		else if(b == size)
        {
			C[i] = A[a]; 
			a++;
		}
        printf("%d ",C[i]);
    }
}

int main(void)
{
    int A[SIZE] = {2, 5, 7, 8};
    printf("A[] = ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");

    printf("B[] = ");
    int B[SIZE] = {1, 3, 4, 6};
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");

    int C[SIZE*2] = {0};
    merge(A,B,C,SIZE);

    return 0;
}