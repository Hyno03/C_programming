#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int num)
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
    printf("Enter the positive integers : ");
    int num;
    if(scanf("%d",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int prime1,prime2;
    for(prime1 = 1; prime1 < num; prime1++)
    {
        for(prime2 = 1; prime2 < prime1; prime2++)
        {
            if(is_prime(prime1) && is_prime(prime2) && prime1+prime2 == num)
            {
                printf("%d = %d + %d\n",num,prime1,prime2);
                printf("%d = %d + %d\n",num,prime2,prime1);
            }
            else
            {
                printf("None\n");
                return 0;
            }
        }
    }
    return 0;
}