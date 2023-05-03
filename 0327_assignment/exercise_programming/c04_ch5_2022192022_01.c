#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter 2 integers : \n");

    int x,y;
    if(scanf("%d %d",&x,&y)<2)
    {
        printf("Wrong input\n");
        return 0;
    }
    
    printf("Share : %d\n",x/y);
    printf("Remainder : %d\n",x%y);

    return 0;
}