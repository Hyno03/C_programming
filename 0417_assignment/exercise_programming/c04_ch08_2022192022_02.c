#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n,int m)
{
    if(n%m == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main(void)
{
    printf("Enter two integers : ");
    int num1,num2;
    if(scanf("%d %d",&num1,&num2) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }

    if(is_multiple(num1,num2))
    {
        printf("%d is %d's multiple.\n",num1,num2);
        return 0;
    }
    else
    {
        printf("None\n");
        return 0;
    }
    
    return 0;
}