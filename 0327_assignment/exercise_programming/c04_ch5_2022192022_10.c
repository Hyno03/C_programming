#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the x coordinate : \n");

    int x;
    if(scanf("%d",&x)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Enter the y coordinate : \n");

    int y;
    if(scanf("%d",&y)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    (x>0 && y>0) ? printf("1\n") : (x<0 && y>0) ? printf("2\n") : (x<0 && y<0) ? printf("3\n") : printf("4\n");
    
    return 0;
}