#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>

int get_response(const char *prompt)
{
    if(strcmp(prompt, "Yes") == 0 || strcmp(prompt, "YES") == 0 || strcmp(prompt, "yes") == 0 || strcmp(prompt, "OK") == 0 || strcmp(prompt, "ok") == 0 || strcmp(prompt, "Ok") == 0)
    {
        return 1;
    }
    else if(strcmp(prompt, "NO") == 0 || strcmp(prompt, "No") == 0 || strcmp(prompt, "no") == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
    
}

int main(void)
{
    char *string;
    if(scanf("%s",string) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }
    int response = get_response(string);

    if (response == 1)
    {
        printf("Positive answer\n");
    }
    else if (response == 0)
    {
        printf("Negative answer\n");
    }
    else
    {
        printf("Wrong input\n");
    }

    return 0;
}
