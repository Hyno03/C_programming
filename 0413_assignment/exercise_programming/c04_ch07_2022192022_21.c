#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("This is a game that the computer guess the number you think\n");
    printf("Think a number in 0~100 and don't change the number\n");
    printf("Enter 1 if the number is high or -1 if the number is low\n");
    printf("And enter 0 if the number is correct\n\n\n");

    int hint;
    int com_ans = rand()%100;
    int user_think = com_ans;
    while (1)
    {
        printf("Is the number %d?\n",user_think);
        if(scanf("%d",&hint)<1)
        {
            printf("Wrong input\n");
            return 0;
        }
        if(hint == 1)
        {   
            user_think = rand()%100 + com_ans;
        }
        if(hint == -1)
        {
            user_think = rand()%com_ans;
        }
        if(hint == 0)
        {
            printf("Your number was %d !!\n",user_think);
            return 0;
        }
    }
    

    return 0;
}