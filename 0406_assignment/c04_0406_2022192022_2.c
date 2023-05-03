#include <stdio.h>

int main(void)
{
    int fac = 1;
    long long fac2 = 1;

    int n = 1;

    while(1)
    {
        fac *= n;
        printf("32bit ) %d! = %d\n",n,fac);
        n++;
        if(fac <= 0)
        {
            break;
        }
    }
    
    while(1)
    {
        fac2 *= n;
        printf("64bit ) %d! = %lld\n",n,fac2);
        n++;
        if(fac2 <= 0)
        {
            break;
        }
    }
    
    return 0;
}