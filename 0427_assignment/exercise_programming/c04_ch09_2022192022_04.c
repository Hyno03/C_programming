#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_random()
{
    static int inited = 0;
    if(inited == 0)
    {
        srand(time(NULL));
        printf("Reset\n");
        inited = 1;
    }
    else
    {
        printf("%d\n",rand());
    }
}

int main(void)
{
    for(int i = 0; i < 4; i++)
    {
        get_random();
    }
    return 0;
}