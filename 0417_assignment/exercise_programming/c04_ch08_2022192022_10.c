#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint()
{ 
    int random = rand()%81 +10;
    return random;
}

int main(void)
{
    srand((unsigned int)time(NULL));
    for(int i = 1; i <= 10; i++)
    {  
        printf("%d\n",randint());
    }
    return 0;
}