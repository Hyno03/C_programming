#include <stdio.h>
#include <string.h>
 
void cmp(const char *s1, const char *s2)
{
    int r = strcmp(s1, s2);
    int ch = ((r == 0) ? '=' : ((r < 0) ? '<' : '>'));
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    printf("%s(%d) %c %s(%d) -> %d\n", s1, l1, ch, s2, l2,r);
}
 
int main(void)
{
    cmp("abc", "def");
    cmp("apple", "abroad");
    cmp("가나다", "한글");
    cmp("교생", "고생");
    cmp("굥샘", "고등어");
    cmp("또래", "똑똑하다");
    cmp("또치", "똠방각하");
    return 0;
}