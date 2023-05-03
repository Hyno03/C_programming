#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define password 1234

int check(int input)
{
    static int count = 0;
    if(input == password)
    {
        count++;
        return 1;
    }
    else
    {
        count++;
        //printf("%d\n",count);
        if(count >= 3)
        {
            printf("Login Failed\n"); 
            return count;
        }
        else
        {
            return 0;
        }
    }
}

int main(void)
{
    while (1)
    {
        printf("password : ");
        int passwordInput;
        if(scanf("%d",&passwordInput) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
        int checkPassword = check(passwordInput);
        if(checkPassword == 1)
        {
            printf("Login success!\n");
            return 0;
        }
        else if(checkPassword == 0)
        {
            continue;
        }
        else
        {
            return 0;
        }

    }
    
    return 0;
}