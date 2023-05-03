#define PROB 9

#if PROB ==1
#include <stdio.h>

void f(void);

int i;
int main(void)
{
    for(i = 0; i< 3; i++)
    {
        f();
    }
    return 0;
}

void f(void)
{
    for(i = 0; i < 5; i++)
    {
        printf("#");
    }
}
#elif PROB == 2

#include <stdio.h>
void f(void);
double radio;
extern counter;
int main(void)
{
    static int setting;
}
void f(void)
{
    int number;
    register int index;
}

#elif PROB == 3

#include <stdio.h>
void f(int);
int n = 10;

int main(void)
{
    f(n);
    printf("n=%d\n",n);
    return 0;
}
void f(int n)
{
    n = 20;
}

#elif PROB == 4

#include <stdio.h>
void f(void);
int x = 1;

int main(void)
{
    int x =2;
    {
        int x =3;
        printf("%d\n",x);
    }
    printf("%d\n",x);
    return 0;
}

#elif PROB == 5

#include <stdio.h>
void f(void);

int main(void)
{
    f();
    f();
    return 0;
}
void f(void)
{
    static int count = 0;
    printf("%d\n",count++);
}

#elif PROB == 6
#include <stdio.h>

int a;
static int b;
extern int c;

int main(void)
{
    int d;
    register int e;
    static int f;
    {
        int g;
    }
    return 0;
}

#elif PROB == 7
#include <stdio.h>

auto int x = 20;

int main(void)
{
    printf("%d\n",x);
    return 0;
}

#elif PROB == 8
#include <stdio.h>

int recursive(int n)
{
    if(n == 1)
    {
        return 0;
    }
    return n * recursive(n-1);
}

#elif PROB == 9
#include <stdio.h>

int recursive(int n)
{
    int sum = 0;
    for(int i = n; i >= 0; i--)
    {
        if(i == 0)
        {
            sum += 1;
        }
        else
        {
            sum += i;
        }
    }
}

#endif
