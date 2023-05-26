#include <stdio.h>
#include <string.h>
#define SIZE 50

void alphabet_search(const char *string)
{
    char alphabet[26][2] = {0};
    for(int i = 0; i < 26; i++)
    {
        alphabet[i][0] = 'a' + i;
    }

    int stringLength = strlen(string);
    for(int i = 0; i < stringLength; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(string[i] == alphabet[j][0])
            {
                alphabet[j][1] += 1;
            }
        }
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%c : %d\n",alphabet[i][0], alphabet[i][1]);
    }
}

int main(void)
{
    printf("Enter the sentence : ");
    char string[50];
    fgets(string, SIZE, stdin);

    alphabet_search(string);

    return 0;
}