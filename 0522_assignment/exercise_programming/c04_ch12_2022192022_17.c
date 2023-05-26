#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 50

void getString(char *word)
{
    printf("Enter the word : ");
    fgets(word, SIZE, stdin);
    word[(strlen(word) - 1)] = '\0';

}

int main(void)
{
    printf("Enter the number of characters to write : ");
    int num;
    if(scanf("%d",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }
    getchar();
    
    char string[SIZE][SIZE];
    for(int i = 0; i < num; i++)
    {
        char word[SIZE];
        getString(word);
        strcpy(string[i],word);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%s ",string[i]);
    }
    

    return 0;
}