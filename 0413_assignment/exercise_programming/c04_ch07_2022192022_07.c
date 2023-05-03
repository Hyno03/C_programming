#include <stdio.h>

int main(void)
{
    const int line = 7;
    for (int height = 1; height <= line; height++)
    {
        for (int empty = 1; empty <= line - height; empty++)
        {
            printf(" ");
        }
        for(int star = 1; star <= height; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}