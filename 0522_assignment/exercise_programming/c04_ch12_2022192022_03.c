#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 50

void deleteChar(const char *string, char deleteWord)
{
    int stringLength = strlen(string);
    for(int i = 0; i <stringLength; i++)
    {
        if(string[i] != deleteWord)
        {
            printf("%c",string[i]);
        }
    }
    printf("\n");
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);

    printf("Enter the word to remove : ");
    char deleteWord;
    if(scanf("%c",&deleteWord) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    deleteChar(string, deleteWord);

    return 0;
}