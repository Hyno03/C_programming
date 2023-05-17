#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_two_int(int *px, int *py)
{
    printf("Enter two integers : ");
    if(scanf("%d %d",px,py) < 2)
    {
        printf("Wrong input\n");
    }
}

int main(void)
{
    int num1,num2;
    get_two_int(&num1,&num2);
    int sum = num1 + num2;
    printf("Sum is %d\n",sum);

    return 0;
}