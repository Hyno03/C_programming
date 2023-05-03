#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c)
{
    if(c >= 97 && c <= 122)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    printf("Enter the word : ");
    char word;
    if(scanf("%c",&word) < 1)
    {
        return 0;
    }

    if(check_alpha(word))
    {
        printf("%c is an alphabet\n",word);
        return 0;
    }
    else
    {
        printf("%c is not an alphabet\n",word);
        return 0;
    }
    return 0;
}