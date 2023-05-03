#include <stdio.h>

int main(void)
{
    printf("Enter the word : \n");

    char word = getchar();

    switch (word)
    {
    case 'R':
    case 'r':
        printf("Rectangle\n");
        break;
    case 'T':
    case 't':
        printf("Tringle\n");
        break;
    case 'C':
    case 'c':
        printf("Circle\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }
    return 0;
}