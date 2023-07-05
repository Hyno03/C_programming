#define PROB 8

#if PROB ==1
#include <stdio.h>
#define MAX_SIZE 4

int main(void)
{
    int a[MAX_SIZE] = {0,1,2,3};
    int b[MAX_SIZE] = {0};

    for(int i = 0; i < MAX_SIZE; i++)
    {
        b[i] = a[i];
    }
    return 0;
}

#elif PROB == 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 3

int main(void)
{
    float scores[size] = {0};
    float average;

    printf("Enter 3 students score : ");
    for(int i = 0; i <size; i++)
    {
        if(scanf("%f",&scores[i]) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
        average += scores[i];
    }
    average /= size;

    return 0;
}

#elif PROB == 3
#include <stdio.h>
#define size 3

int main(void)
{
    float scores[size] = {10.0, 20.0, 30.0};
    float average;

    for(int i = 0; i <size; i++)
    {
        average += scores[i];
    }
    average /= size;

    return 0;
}

#elif PROB == 4
#include <stdio.h>
#define size 3

float get_average(float a[],int n)
{
    float average = 0;
    for(int i = 0; i < n; i++)
    {
        average += a[i];
    }
    average /= n;
    return average;
}

int main(void)
{
    float scores[size] = {10.0, 20.0, 30.0};
    get_average(scores,size);
    return 0;
}

#elif PROB == 5
#include <stdio.h>
#include <stdlib.h>
#define size 3
#define students 10

int main(void)
{
    float scores[size] = {10, 20, 30};
    int scorecount[size] = {0};
    int studentsScore;

    for(int i = 0; i < students; i++)
    {
        studentsScore = rand()%3 + 1;
        switch (studentsScore)
        {
        case 1:
            scorecount[0]++;
            break;

        case 2:
            scorecount[1]++;
            break;

        case 3:
            scorecount[2]++;
            break;
        
        default:
            break;
        }
    }
    
    for(int i = 0; i < size; i++)
    {
        printf("%d students have %.2f score\n",scorecount[i],scores[i]);
    }

    return 0;
}

#elif PROB == 6
#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p = &i;

    printf("i = %d, p = %p\n",i,p);
    *p++;
    printf("i = %d, p = %p\n",i,p);
    (*p)++;
    printf("i = %d, p = %p\n",i,p);
    *++p;
    printf("i = %d, p = %p\n",i,p);
    ++*p;
    printf("i = %d, p = %p\n",i,p);

    return 0;
}

#elif PROB ==7
#include <stdio.h>

int main(void)
{
    int i = 80;
    int *p = &i;
    int **dp = &p;

    **dp = 90;
    *p = 100;
    printf("%d %d %d",i,*p,**dp);
    
    return 0;
}

#elif PROB ==8
#include <stdio.h>

int main(void)
{
    int m[3][2] = {1,2,3,4,5,6};

    printf("%d\n",**m);
    printf("%d\n",*m[1]); 

    return 0;
}
#endif