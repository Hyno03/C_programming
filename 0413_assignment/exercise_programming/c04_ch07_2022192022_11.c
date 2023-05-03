#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{  
    int fuel = 100;
    int charge;
    while(1)
    {
        printf("Fuel %d\n",fuel);
        printf("Enter the value (charge +, use - ) : ");
        if(scanf("%d",&charge) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
        fuel += charge;
        if(fuel < 20)
        {
            printf("Fuel %d\n",fuel);
            printf("Warning! \n");
            return 0;
        }
    }

    return 0;
}