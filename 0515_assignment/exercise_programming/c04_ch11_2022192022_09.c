#include <stdio.h>
#define students 10

void convert(double *grades, double *scores, int size)
{
    for(int i = 0; i < size; i++)
    {
        scores[i] = grades[i]/4.3*100;
        printf("%6.2lf ",scores[i]);
    }
}

int main(void)
{
    double scores[students] = {0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.3};
    double scores_outof100[students] = {0};
    for(int i = 0; i < students; i++)
    {
        printf("%6.2lf ",scores[i]);
    }
    printf("\n");
    convert(scores,scores_outof100,students);

    return 0;
}