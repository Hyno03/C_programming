#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int plus()
{
    static int count = 0;
    count++;
    return count;
}

int minus()
{
    static int count = 0;
    count++;
    return count;
}

int div()
{
    static int count = 0;
    count++;
    return count;
}

int multi()
{
    static int count = 0;
    count++;
    return count;
}

int main(void)
{
    printf("Enter the calculate : ");
    int num1,num2;
    char calculate;
    while(1)
    {
        if(scanf("%d %c %d",&num1,&calculate,&num2) < 3)
        {
            printf("Wrong input\n");
            return 0;
        }

        switch (calculate)
        {
        case '+':
            printf("Plus has run %d\n",plus());
            printf("Result is %d\n",num1 + num2);
            break;

        case '-':
            printf("Minus has run %d\n",minus());
            printf("Result is %d\n",num1 - num2);
            break;

        case '/':
            printf("Divide has run %d\n",div());
            printf("Result is %d\n",num1 / num2);
            break;

        case '*':
            printf("Multiple has run %d\n",multi());
            printf("Result is %d\n",num1 * num2);
            break;

        default:
            break;
        }
    }

    return 0;
}