#include <stdio.h>

int main(void)
{
    printf("Enter 3 positive integer : \n");

    int num1, num2, num3;
    if(scanf("%d %d %d",&num1,&num2,&num3) < 3)
    {
        printf("Wrong input");
        return 0;
    }

    while (1)
    {
        if(num1 < 0)
        {
            if(scanf("%d",&num1) < 1)
            {
                printf("Wrong input\n");
                return 0;
            }
            continue;
        }
        if(num2 < 0)
        {
            if(scanf("%d",&num2) < 1)
            {
                printf("Wrong input\n");
                return 0;
            }
            continue;
        }
        if(num3 < 0)
        {
            if(scanf("%d",&num3) < 1)
            {
                printf("Wrong input\n");
                return 0;
            }
            continue;
        }
        else
        {
            int sum = num1 + num2 + num3;
            printf("Sum is %d\n",sum);
            break;
        }
    }

    return 0;
}