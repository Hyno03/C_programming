#include <stdio.h>

int main(void)
{
    printf("Enter the word : \n");

    char word = getchar();
    switch (word)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("It is vowel\n");
        break;
    default:
        printf("It is consonant\n");
        break;
    }
    return 0;
}