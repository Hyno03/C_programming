#include <stdio.h>
#include <string.h>
#define SIZE 50

void classification(const char *string)
{
    int stringLength = strlen(string);
    int countPoint = 0;
    for(int i = 0; i < stringLength; i++)
    {
        if(string[i] == ',' || string[i] == '.')
        {
            countPoint++;
        }
    }
    printf("Point : %d\n",countPoint);
}

int main(void)
{
    char string[SIZE];
    fgets(string, SIZE, stdin);
    classification(string);

    return 0;
}