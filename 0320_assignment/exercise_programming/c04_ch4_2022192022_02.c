#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Write hexadecimal integer : \n");
    
    int data;
    if(scanf("%x",&data) <1)
    {
        printf("Not a correct input\n");
        return 0;
    }

    printf("Octal integer : %#o\n", data);
    printf("Decimal integer : %d\n", data);
    printf("Hexadecimal integer : %#x\n", data);

    return 0;
}