#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 3

int isCaculate(char *string, int num1, int num2)
{
    int result = 0;
    if(strcmp(string, "add") == 0)
    {
        result = num1 + num2;
    }
    else if(strcmp(string, "sub") == 0)
    {
        result = num1 - num2;
    }
    else if(strcmp(string, "mul") == 0)
    {
        result = num1 * num2;
    }
    else if(strcmp(string, "div") == 0)
    {
        result = num1 / num2;
    }
    return result;
}

int main(void)
{
    printf("Choose the caculation from 'add, sub, mul, div' and enter the number : ");
    char caculate[SIZE];
    int num1, num2;
    if(scanf("%s %d %d",caculate, &num1, &num2) < 3)
    {
        printf("Wrong input\n");
        return 0;
    }
    getchar();

    printf("Result is %d\n",isCaculate(caculate, num1, num2));

    return 0;
}