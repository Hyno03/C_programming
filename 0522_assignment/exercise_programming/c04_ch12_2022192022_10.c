#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int find_word(const char *s, const char *c)
{
    int count = 0;
    const char *found = s;

    while ((found = strstr(found, c)) != NULL) {
        count++;
        found += strlen(c);
    }

    return count;
}

int main(void)
{
    printf("Enter the sentence: ");
    char string[SIZE];
    fgets(string, SIZE, stdin);

    printf("Enter the word: ");
    char word[SIZE];
    if(scanf("%s", word) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int count = find_word(string, word);
    printf("%s -> %d\n", word, count);

    return 0;
}
