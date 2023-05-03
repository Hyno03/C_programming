#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int sum(int a)
{
    static int numSum = 0;
    if(a == 0)
    {
        return numSum;
    }   
    numSum = a + sum(a-1);
    return numSum;
}

int main(void)
{
    printf("Enter the integer : ");
    int inputNum;
    if(scanf("%d",&inputNum) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Sum is %d\n",sum(inputNum));

    return 0;
}