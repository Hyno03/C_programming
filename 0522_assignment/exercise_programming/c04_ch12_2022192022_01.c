#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void reverse(const char *string)
{
    if(*string == '\0')
    {
        return;
    }
    reverse(string + 1);
    printf("%c",*string);
}

int main(void)
{
    printf("Enter the string : ");
    char *string;
    if(scanf("%s",string) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }
    reverse(string);
    printf("\n");

    return 0;
}