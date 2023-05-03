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

    printf("Enter the number : \n");

    int num;
    if(scanf("%d",&num)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int bita = a<<num;
    printf("%d<<%d is %d\n",a,num,bita);

    return 0;
}