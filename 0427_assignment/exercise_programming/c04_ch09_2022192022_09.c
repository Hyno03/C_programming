#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse()
{
    char c;
    if(scanf("%c", &c) < 1)
    {
        printf("Wrong input\n");
    }
    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}

int main(void)
{
    printf("Enter a sentence : ");
    reverse();
    printf("\n");
    return 0;
}
