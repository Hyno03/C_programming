#define PROB 3

#if PROB == 1

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "Hi! ";
    char *s2 = "Programmers";
    char s3[50];
    strcat(s3, s1);
    strcat(s3,s2);
    
    printf("%s",s3);

    return 0;
}

#elif PROB == 2

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p;
    char s[] = "Hello";
    p = s + strlen(s) - 1;
    while(p >= s)
    {
        printf("%s\n",p);
        p--;
    }
    
    return 0;
}

#elif PROB == 3

#include <stdio.h>
#define SIZE 50

int main(void)
{
    char input[SIZE];
    char *p = input;
    scanf("%s", p);
}

#endif