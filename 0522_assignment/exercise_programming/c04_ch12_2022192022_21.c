#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50

void ismix(const char *word, char *mix)
{
    int stringLength = strlen(word);
    int numberOnce[stringLength];
    for(int i = 0; i < stringLength; i++)
    {
        numberOnce[i] = -1;
    }  
    
    for(int i = 0; i < stringLength; i++)
    {
        int randomNum;
        while (numberOnce[randomNum] != -1)
        {
            randomNum = rand() % stringLength;
        }
        mix[randomNum] = word[i];
        numberOnce[randomNum] = i;
    }
}

int iscmp(const char *word, const char *string)
{
    if(strcmp(word,string) == 0)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char word[] = "apple";
    char wordmix[sizeof(word)];
    ismix(word, wordmix);
    
    int cmp;
    while (cmp != 1)
    {
        printf("Guess the original word of %s -> ",wordmix);
        char string[SIZE];
        fgets(string, SIZE, stdin);
        string[(strlen(string) - 1)] = '\0';
        cmp = iscmp(word,string);
    }
    printf("Congratulation!\n");

    return 0;
}