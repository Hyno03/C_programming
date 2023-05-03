#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter integers : \n");

    int a;
    if(scanf("%d",&a)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int ten = a/10;
    int one = a%10;
    if(a<100)
    {
        printf("Ten : %d\n",ten);
        printf("One : %d\n",one);
        return 0;
    }
    else
    {
        printf("Wrong input\n");
        return 0;
    }

    return 0;
}