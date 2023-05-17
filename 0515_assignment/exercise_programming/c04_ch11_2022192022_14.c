#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
    *p_sum = x + y;
    *p_diff = x - y;
}

int main(void)
{
    int num1 = 100;
    int num2 = 200;
    int sum, diff;

    get_sum_diff(num1, num2, &sum, &diff);
    printf("Sum is %d\n",sum);
    printf("Difference is %d\n",diff);

    return 0;
}