#include <stdio.h>
#include <string.h>
#define SIZE 50

void classification(const char *string)
{
    int stringLength = strlen(string);
    int countAlphabet = 0, countNumber = 0, countElse = 0;
    for(int i = 0; i < stringLength; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
        {
            countAlphabet++;
        }
        else if(string[i] >= '0' && string[i] <= '9')
        {
            countNumber++;
        }
        else
        {
            countElse++;
        }
    }
    printf("Word : %d\n",countAlphabet);
    printf("Number : %d\n",countNumber);
    printf("Else : %d\n",countElse);
}

int main(void)
{
    char string[SIZE];
    fgets(string, SIZE, stdin);
    classification(string);

    return 0;
}