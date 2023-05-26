#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

void isLower(char *string)
{
    int stringLength = strlen(string);
    for(int i = 0; i < stringLength; i++)
    {
        string[i] = tolower(string[i]);
    }
}

void reverse(char *string)
{
    char name[2][SIZE];
    char *token;
    isLower(string);
    token = strtok(string, " ");
    for(int i = 0; token != NULL; i++)
    {
        strcpy(name[i],token);
        token = strtok(NULL, " ");
    }
    printf("%s, %s\n ", name[1], name[0]);
}

int main(void)
{
    printf("Enter your name in capital letter : ");
    char string[SIZE] = {0};
    fgets(string, SIZE, stdin);
    string[(strlen(string) - 1)] = '\0';
    reverse(string);
    return 0;
}