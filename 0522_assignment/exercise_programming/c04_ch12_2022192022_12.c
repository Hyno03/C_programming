#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 30

int isPalindrome(const char *string)
{
    char *string_reverse;
    int stringLength = strlen(string);
    for(int i = 0; i < stringLength; i++)
    {
        if(string[i] != string[stringLength -1 -i])
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    printf("Enter a string : ");
    char string[SIZE];
    fgets(string, SIZE, stdin);
    string[(strlen(string) - 1)] = '\0';

    if (isPalindrome(string))
    {
        printf("Palindrome\n");
    } 
    else
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}
