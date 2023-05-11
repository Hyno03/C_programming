#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

int sort(int randNum[], int sortSize)
{
    int least,empty;
    for(int i = 0; i < sortSize - 1; i++)
    {
        least = i;
        for(int j = i + 1; j < sortSize; j++)
        {
            if(randNum[j] < randNum[least])
            {
                least = j;
            }
        }
        empty = randNum[i];
        randNum[i] = randNum[least];
        randNum[least] = empty;
    }
    
    return randNum[sortSize];
}

int main(void)
{
    int randNum[size] = {0};
    srand((unsigned int)time(NULL));
    for(int i = 0; i < size; i++)
    {
        randNum[i] = rand()% 100;
    }

    sort(randNum,size);
    printf("Biggest number is %d\n",randNum[size - 1]);
    printf("Smallest number is %d\n",randNum[0]);

    return 0;
}