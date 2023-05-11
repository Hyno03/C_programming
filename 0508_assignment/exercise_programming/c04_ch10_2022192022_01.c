#include <stdio.h>
#define size 12

int main(void)
{
    int days[size] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0; i < size; i++)
    {
        printf("%d month has %d days\n",i+1, days[i]);
    }

    return 0;
}