#include <stdio.h>

int main(void)
{
    int i = 255;
    printf("Octal integer : %o, Hexadecimal integer : %x\n",i, i);

    i = -1;
    printf("If Decimal integer is = -1, Hexadecimal integer : %x\n",i);

    i = -2;
    printf("If Decimal integer is = -2, Hexadecimal integer : %x\n",i);

    i = -3;
    printf("If Decimal integer is = -3, Hexadecimal integer : %x\n",i);


    return 0;
}