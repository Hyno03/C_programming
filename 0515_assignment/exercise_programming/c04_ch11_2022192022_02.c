#include <stdio.h>
#define size 3

int main(void)
{
    int array[size] = {0};
    for(int i = 0; i < size; i++)
    {
        if(scanf("%d",&array[i]) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
    }
    printf("============================\n");
    printf("Address          Value\n");
    printf("============================\n");
    for(int i = 0; i < size; i++)
    {
        printf("%08X\t%3d\n",*(array+i),array[i]);
    }
    
    return 0;
}