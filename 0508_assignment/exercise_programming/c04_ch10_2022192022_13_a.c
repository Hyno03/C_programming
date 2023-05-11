#include <stdio.h>
#define line 3
#define row 3

void scalar_mult(int a[][3], int scalar)
{
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < row; j++)
        {
            a[i][j] *= scalar;
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }

}

int main(void)
{
    int array[line][row] = {{1,2,3}, {4,5,6}, {7,8,9},};
    scalar_mult(array,2);

    return 0;
}