#include <stdio.h>

double recursive(int n)
{
    if(n != 1)
    {
        return 1.0/n + recursive(n-1);
    }
    else
    {
        return n;
    }
}

int main(void)
{
    printf("Enter the integer : ");
    int num;
    if(scanf("%d",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }
    printf("%lf",recursive(num));
    return 0;
}