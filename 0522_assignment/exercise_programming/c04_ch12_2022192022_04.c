#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 50

int str_chr(const char *s, int c)
{
    int stringLength = strlen(s);
    int cCount = 0;
    for(int i = 0; i < stringLength; i++)
    {
        if(s[i] == c)
        {
            cCount++;
        }
    }

    return cCount;
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);

    printf("Enter the word : ");
    char word;
    if(scanf("%c",&word) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("%c -> %d\n",word,str_chr(string, word));

    return 0;
}