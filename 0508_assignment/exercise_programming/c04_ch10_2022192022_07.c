#include <stdio.h>
#define line 5
#define row 3
int main(void)
{
    int array[row][line] = { {12, 56, 32, 16, 98}, {99, 56, 34, 41, 3}, {65, 3, 87, 78, 21}};
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < line; j++)
        {
            printf("%2d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i = 0; i < row; i++)
    {
        int lineSum = 0;
        for(int j = 0; j < line; j++)
        {
            lineSum += array[i][j];
        }
        printf("Line %d's sum is %d\n",i,lineSum);
    }

    printf("\n");

    for(int i = 0; i < line; i++)
    {
        int rowSum = 0;
        for(int j = 0; j < row; j++)
        {
            rowSum += array[j][i];
        }
        printf("Row %d's sum is %d\n",i,rowSum);
    }

    return 0;
}