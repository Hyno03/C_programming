#include <stdio.h>
#include <ctype.h>

int main(void)
{
    while(1)
    {
        int ch = getchar();
        if(ch == EOF)
        {
            break;
        }
        if(ch == '\t')
        {
            printf("    ");
            continue;
        }
        if(ch == ' ')
        {
            printf(".");
        }

        // if('a' <= ch && ch <= 'z')
        // {
        //     //'a' == 97
        //     //'A' == 65

        //     ch -= 'a' - 'A';
        // }
        if(islower(ch))
        {
            ch = toupper(ch);
        }
        putchar(ch);
    }
    return 0;
}