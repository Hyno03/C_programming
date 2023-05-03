#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the ASCII CODE number : \n");

    int ascii_code_num;
    if(scanf("%d",&ascii_code_num) < 1)
    {
        printf("Not a correct input\n");
        return 0;
    }

    printf("It is : %c\n",ascii_code_num);

    return 0;
}