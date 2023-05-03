#include <stdio.h>

int main(void)
{
    printf("Enter the value of 'n' and 'r' : \n");
    int n,r;
    if(scanf("%d %d",&n,&r) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }

    int sum = 1;
    for(int i = 0; i <= r-1; i++)
    {
        sum *= (n-i);
    }
    printf("%d\n",sum);

    return 0;
}