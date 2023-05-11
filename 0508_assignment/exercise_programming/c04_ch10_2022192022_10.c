#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define students 5
#define test 3

int main(void)
{
    srand(time(NULL));
    int testScore[students][test] = {0};
    for(int i = 0; i < students; i++)
    {
        for(int j = 0; j < test; j++)
        {
            testScore[i][j] = rand()% 101;
            printf("Student %d's score is %d\n",i,testScore[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < students; i++)
    {
        int max = 0;
        int min = 0;
        for(int j = 0; j< test; j++)
        {
            if(testScore[i][max] < testScore[i][j])
            {
                max = j;
            }
            if(testScore[i][min] > testScore[i][j])
            {
                min = j;
            }
        }

        printf("Student %d's best score is %d\n",i,testScore[i][max]);
        printf("Student %d's worst score is %d\n",i,testScore[i][min]);
        printf("\n");
    }

    return 0;
}