#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 50

void isStringFlow(char *string)
{
    int length = strlen(string);
    char temp[SIZE];

    while (1)
    {
        for (int i = length - 1; i >= 0; i--)
        {
            strcpy(temp, string + i);
            printf("%s\n", temp);
            usleep(500000);
            system("clear"); 
        }
        for (int i = 1; i < length; i++)
        {
            strcpy(temp, string + i);
            printf("%s\n", temp);
            usleep(500000); 
            system("clear");
        }
    }
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);
    string[(strlen(string) - 1)] = '\0';

    isStringFlow(string);

    return 0;
}
