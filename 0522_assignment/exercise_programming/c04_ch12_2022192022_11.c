#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

void sentence_modify(char *string)
{
    string[0] = toupper(string[0]);
    string[strlen(string)-1] = '.';
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);
    sentence_modify(string);

    int stringLength = strlen(string);
    for(int i = 0; i < stringLength; i++)
    {
        printf("%c",string[i]);
    }
    printf("\n");

    return 0;
}