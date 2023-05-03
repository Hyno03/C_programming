#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 10000;

void start()
{
    printf("******** Welcome to Express ATM ********\n");
    printf("<1> Left Over\n");
    printf("<2> Deposit\n");
    printf("<3> Withdraw\n");
    printf("<4> End\n");
}

int leftOver(int money)
{
    sum += money;
    printf("You have %d left\n",sum);
    return sum;
}

int deposit()
{
    printf("Enter the price : ");
    int moneyInput;
    if(scanf("%d",&moneyInput) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }
    leftOver(moneyInput);
    return 0;
}

int withdraw()
{
    printf("Enter the price : ");
    int moneyOutput;
    if(scanf("%d",&moneyOutput) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }
    leftOver(-moneyOutput);
    return 0;
}

int main(void)
{
    start();
    while(1)
    {
        printf("Select the menu : ");
        int menuNum;
        if(scanf("%d",&menuNum) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
        if(menuNum == 1)
        {
            leftOver(0);
        }
        else if(menuNum == 2)
        {
            deposit();
        }
        else if(menuNum == 3)
        {
            withdraw();
        }
        else if(menuNum == 4)
        {
            return 0;
        }
    }  
    return 0;
}