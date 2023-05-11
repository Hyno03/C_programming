#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 45
#define times 6

int main(void)
{
    srand((unsigned int)time(NULL));
    int rottoNum[size] = {0};
    for(int i = 0; i < size; i++)
    {
        rottoNum[i] = i + 1;
    }

    int pickedNum[times] = {0};
    for(int i = 0; i < times; i++)
    {
        int randomNum = rand()%size;
        pickedNum[i] = rottoNum[randomNum];
        for(int j = 0; j < times; j++)
        {
            if(i != j && pickedNum[i] == pickedNum[j])
            {
                randomNum = rand()%size;
                pickedNum[i] = rottoNum[randomNum];
            }
        }
        printf("%d ",pickedNum[i]);
    }

    return 0;
}