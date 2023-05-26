#include <stdio.h>
#include <string.h>
#define SIZE 100
#define WORDSIZE 20

void isWordChange(char *string, const char *findword, const char *changeword)
{   
    char newString[SIZE][SIZE];
    char *token;
    int count = 0;
    token = strtok(string, " ");

    while(token != NULL)
    {
        strcpy(newString[count], token);
        token = strtok(NULL, " ");
        count++;
    }
    for(int i = 0; i < count; i++)
    {
        if(strcmp(newString[i],findword) == 0)
        {
            strcpy(newString[i], changeword);
        }
    }
    for(int i = 0; i < count; i++)
    {  
        printf("%s ",newString[i]);
    }
    printf("\n");
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);
    string[(strlen(string) - 1)] = '\0';

    printf("Word to find : ");
    char findword[WORDSIZE];
    fgets(findword, WORDSIZE, stdin);
    findword[(strlen(findword) - 1)] = '\0';
    
    printf("Word to change : ");
    char changeword[WORDSIZE];
    fgets(changeword, WORDSIZE, stdin);
    changeword[(strlen(changeword) - 1)] = '\0';

    isWordChange(string, findword, changeword);

    return 0;
}