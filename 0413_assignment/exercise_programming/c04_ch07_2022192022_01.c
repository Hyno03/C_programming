#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <windows.h>
#include <unistd.h>

int main(void)
{
    printf("Enter the initial value : \n");

    int initial;
    if(scanf("%d",&initial) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    for(int ini = initial; ini > 0; ini--)
    {
        printf("%d ",ini);
        //Sleep(1000);
        sleep(1);
    }
    printf("%c",'\a');

    return 0;
}