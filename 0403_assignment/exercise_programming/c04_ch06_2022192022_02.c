#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter 3 integers : \n");

    int x,y,z;
    if(scanf("%d %d %d",&x,&y,&z)<3)
    {
        printf("Wrong input\n");
        return 0;
    }

    if (x>y)
    {
        if(y>z)
        {
            printf("The smallest integer is %d\n",z);
            return 0;
        }
        else
        {
            printf("The smallest integer is %d\n",y);
            return 0;
        }
    }
    else if(x>z)
    {
        printf("The smallest integer is %d\n",z);
        return 0;
    }
    else
    {
        printf("The smallest integer is %d\n",x);
        return 0;
    }

    return 0;
}