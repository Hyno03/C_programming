#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

int main(void)
{
    srand(time(NULL));
    printf("Enter the product code : ");
    int code;
    if(scanf("%d",&code) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int codeNum[size] = {0};
    for(int i = 0; i < size; i++)
    {
        codeNum[i] = rand()%100 + 1;
        for(int j = 0; j < size; j++)
        {
            if(i != j && codeNum[i] == codeNum[j])
            {
                codeNum[i] = rand()%100 + 1;
            }
        }
        // printf("%d ",codeNum[i]);
    }
    // printf("\n");

    printf("Product %d is in %d\n",code,codeNum[code -1]);
    return 0;
}