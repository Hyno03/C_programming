#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
int main(void)
{
    int input_num;
    if(scanf("%d",&input_num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int count = 0;
    for(int i = 1; i <= input_num; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
        
    }    
    clock_t start = clock(), end = clock();
    double cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("1~%d prime is total %d\n",input_num,count);
    printf("use %lf sec\n",cpu_time);


    return 0;
}