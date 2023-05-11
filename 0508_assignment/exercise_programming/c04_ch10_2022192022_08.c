#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define integer 10
#define cubic 2

int main(void)
{
    printf("Enter the integer : ");
    int num;
    if(scanf("%d",&num) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    int array[integer][cubic] = {0};
    for(int i = 0; i < integer; i++)
    {
       array[i][0] = i + 1;
       array[i][1] = (i + 1) * (i + 1) * (i + 1);
    }

    for(int i = 0; i <integer; i++)
    {
        if(num == array[i][1])
        {
            printf("%d's cube root is %d\n",num, array[i][0]);
            return 0 ;
        }
    }
    printf("Doesn't exist\n");

    return 0;
}