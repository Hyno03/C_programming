#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter x coordinate and y coordinate : \n");

    int x,y;
    if(scanf("%d %d",&x,&y)<2)
    {
        printf("Wrong input\n");
        return 0;
    }

    if(x>0 && y>0)
    {
        printf("1\n");
        return 0;
    }
    else if(x<0 && y>0)
    {
        printf("2\n");
        return 0;
    }
    else if(x<0 && y<0)
    {
        printf("3\n");
        return 0;
    }
    else if(x>0 && y<0)
    {
        printf("4\n");
        return 0;
    }
    else
    {
        printf("center\n");
        return 0;
    }
    return 0;
}