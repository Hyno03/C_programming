#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//소수인지 판단하는 코드
int isPrime(int num)
{
    //루트 n까지만 확인할 수 있도록 개선
    //int div = 0;
    int root = (int)sqrt(num);
    for(int i = 2; i < root; i++)
    {
        if(num % i == 0)
        {
            //div++;
            return 0;
        }
    }
    //return div == 0;
    return 1;
}

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        printf("No number\n");
        return 0;
    }
    int number = atoi(argv[1]);

    int count = 0;
    for(int i = 1; i <= number; i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
    
    clock_t start = clock(), end = clock();
    double cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("In 1~%d, prim count = %d\n",number,count);
    printf("use %lf sec\n",cpu_time);

    return 0;
}