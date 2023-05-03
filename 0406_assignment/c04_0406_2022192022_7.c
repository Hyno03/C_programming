#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int num)
{
    int count = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }
    return (count == 2);
}
int main(int argc, const char *argv[])
{
    if(argc < 2)
    {
        printf("Wrong input");
        return 0;
    }
    
    clock_t start = clock(), end = clock();
    double cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    int input_num = atoi(argv[1]);
    if(isPrime(input_num))
    {
        printf("%d is prime\n",input_num);
        printf("use %lf sec\n",cpu_time);

        return 0;
    }
    else
    {
        printf("%d is not prime\n",input_num);
        printf("use %lf sec\n",cpu_time);

        return 0;
    }

    return 0;
}