#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int show_digit(int x)
{
    if(x/10 > 0)
    {
        show_digit(x/10);
    }
    printf("%d ",x%10);
    return 0;
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
    
    show_digit(num);
    printf("\n");
    return 0;
}