#include <stdio.h>
#include <string.h>
#define SIZE 50

void countWord(char *string)
{
    int strtok_count = 0;
    char *s;
    s = strtok(string, " ");
    while(s != NULL)
    {
        strtok_count++;
        s = strtok(NULL , " ");
    }
    
    printf("Total word is %d\n",strtok_count);
}

int main(void)
{
    char string[SIZE];
    fgets(string, SIZE, stdin);
    countWord(string);

    return 0;
}