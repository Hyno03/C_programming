#include <stdio.h>

int main(void)
{
    int sum = 0;
    int i = 1;
    while(1)
    {
        sum += i;
        if(sum > 10000)
        {
            break;
        }
        i++;
    }
    printf("Sum 1 to %d is %d\n",i - 1, sum - i);

    return 0;
}