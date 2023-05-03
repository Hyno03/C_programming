#include <stdio.h>

int main(void)
{
    const int max = 100;
    int count = 0;
    for(int num1 = 3; num1 < max; num1++)
    {
        for(int num2 = 4; num2 < max; num2++)
        {
            for(int num3 = 5; num3 < max; num3++)
            {
                if(((num1<num2)&&(num3>num2)) && ((num1*num1 + num2*num2) == num3*num3))
                {
                    printf("%d %d %d\n",num1,num2,num3);
                    count++;
                }
            }
        }
    }
    printf("Max = %d, all = %d\n",max,count);
}