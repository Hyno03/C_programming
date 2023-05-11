#include <stdio.h>
#include <stdlib.h>
#define size 10

int main(void)
{
    int randNum[size] = {0};
    
    for(int i = 0; i < 100; i++)
    {
        randNum[rand()%10]++;
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d = %d time\n",i,randNum[i]);
    }

    int mostNum;
    for(int i = 0; i < size; i++)
    {
        mostNum = i;
        for(int j = 0; j < size; j++)
        {
            if(randNum[j] > randNum[mostNum])
            {
                mostNum = j;
            }
        }
    }

    printf("%d is the most common number\n",mostNum);
    return 0;
}