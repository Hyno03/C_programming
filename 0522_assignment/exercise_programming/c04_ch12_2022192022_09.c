#include <stdio.h>

int main(void) {
    char input;
    printf("Enter the password : ");

    while ((input = getchar()) != '\n')
    {
        if (input == '*')
        {
            break;
        }
        putchar('*');
    }

    return 0;
}
