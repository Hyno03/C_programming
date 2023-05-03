#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter your height and age : \n");
    
    double height;
    int age;
    if(scanf("%lf %d",&height,&age) < 2)
    {
        printf("Wrong input\n");
        return 0;
    }
    if(height >= 140 && age >= 10)
    {
        printf("Ok\n");
        return 0;
    }
    else
    {
        printf("Sorry\n");
        return 0;
    }

    return 0;
}