#include <stdio.h>
#include <string.h>
#define SIZE 100

void reverse(char *string)
{
    char word[SIZE][SIZE];
    char *token;
    int count = 0;
    token = strtok(string, " ");
    while(token != NULL)
    {
        strcpy(word[count],token);
        count++;
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%s ", word[i]);
    }
    printf("\n");
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[SIZE] = {0};
    fgets(string, SIZE, stdin);
    string[(strlen(string) - 1)] = '\0';
    reverse(string);
    
    return 0;
}
