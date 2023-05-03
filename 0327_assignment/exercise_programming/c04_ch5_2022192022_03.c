#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("Enter 3 integers :\n");

    int x,y,z;
    if(scanf("%d %d %d",&x,&y,&z)<3)
    {
        printf("Wrong input\n");
        return 0;
    }
    
    int max;
    max = (x>y)?x:(y>z)?y:z;
    printf("%d\n",max);

    return 0;
}