#include <stdio.h>
#define size 7

int my_strlen(char *p)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(p[i] == 0)
        {
            return count;
        }
        count++;
    }
    return count;
}

int main(void)
{
    char array[size] = "Hello";
    for(int i = 0; i < size; i++)
    {
        printf("%c",array[i]);
    }
    printf("\n");
    printf("%d\n",my_strlen(array));

    return 0;
}