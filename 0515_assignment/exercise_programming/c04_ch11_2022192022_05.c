#include <stdio.h>
#define size 1000

int main(void)
{
    char memory[size];
    char *charMemory = memory;
    *charMemory = 'a';
    charMemory += 1;

    int *intMemory = (int *)charMemory;
    *intMemory = 100;
    charMemory += sizeof(int);

    float *floatMemory = (float *)charMemory;
    *floatMemory = 3.14;

    printf("'%c' %d %.2f\n",memory[0], *(int*)(memory + 1), *(float *)(memory + 5));

    return 0;
}