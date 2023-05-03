#define _CRT_SECURE_NO_WARNIINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the 4 word : \n");
    char a,b,c,d;
    if(scanf("%c %c %c %c",&a,&b,&c,&d) < 4)
    {
        printf("Wrong input\n");
        return 0;
    }
    unsigned int result = a;
    result = b<<8 | result;
    result = c<<16 | result;
    result = d<<24 | result;
    printf("%x\n",result);
    return 0;
}