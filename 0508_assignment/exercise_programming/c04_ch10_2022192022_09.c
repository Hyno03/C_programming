#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define size 10

double sum = 0;
void average(double array[])
{
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    sum /= size;
    printf("Average is %lf\n",sum);
}

void standardDeviation(double array[])
{
    double arrayMinusSum = 0;
    for (int i = 0; i < size; i++)
    {
        arrayMinusSum += (array[i] - sum) * (array[i] - sum);
    }
    printf("Standard deviation is %lf\n",sqrt(arrayMinusSum/size));

}

int main(void)
{
    double number;
    double numberArray[size] = {0};

    for (int i = 0; i < size; i++)
    {
        if(scanf("%lf",&number) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
        numberArray[i] = number;
    }
    
    average(numberArray);
    standardDeviation(numberArray);

    return 0;
}