#include <stdio.h>
#include <string.h>
#define SIZE 50

//미완성
void iscount(const char *string, char alphabet[][2])
{
    int stringLength = strlen(string);
    for(int i = 0; i < stringLength; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(string[i] == alphabet[j][0])
            {
                alphabet[j][1]++;
            }
        }
    }
}

int main(void)
{
    printf("Enter the string : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);

    char alphabet[26][2] = {0};
    for(int i = 0; i < 26; i++)
    {
        alphabet[i][0] = 'a' + i;
    } 

    iscount(string,alphabet);
    
    return 0;
}