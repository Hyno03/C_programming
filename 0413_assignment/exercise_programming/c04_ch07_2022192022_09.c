#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter 2 integers : \n");

    int num1,num2;
    if(scanf("%d %d",&num1,&num2) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }
    int max_div;
    for(int i = 1; i < num1 && i < num2 ; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            max_div = i;
        }
    }
    int result = (num1 * num2) / max_div;
    printf("Least common multiple is %d\n",result);

    return 0;
}