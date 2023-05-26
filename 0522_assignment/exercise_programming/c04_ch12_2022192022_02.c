#include <stdio.h>
#include <string.h>
#define SIZE 50

void spaceDelete(const char *string)
{
    int stringLength = strlen(string);
    for(int i = 0; i < stringLength; i++)
    {
        if(string[i] != ' ')
        {
            printf("%c",string[i]);
        }
    }
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);

    spaceDelete(string);

    return 0;
}