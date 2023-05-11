#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define line 6
#define row 6

int main(void)
{
    srand(time(NULL));
    int oil[line][row] = {0};
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < row; j++)
        {
            oil[i][j] = rand()%6;
            printf("%d ",oil[i][j]);
        }
        printf("\n");
    }


    int maxSum = 0;
    int useline = 3, userow = 3;
    for(int i = 0; i <= line - useline; i++)
    {
        for(int j = 0; j <= row - userow; j++)
        {
            int sum = 0;
            for(int l = i; l < i+3; l++)
            {
                for(int r = j; r < j+3; r++)
                {
                    sum += oil[l][r];
                }
            }
            if(sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    printf("The place with the most oil is %d\n",maxSum);

    return 0;
}