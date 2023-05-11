#include <stdio.h>
#define line 3
#define row 3

void transpose(int a[][3], int b[][3])
{
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < row; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int array[line][row] = {{1,2,3}, {4,5,6}, {7,8,9},};
    int transarray[line][row] = {0};

    transpose(array,transarray);

    return 0;
}