#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEAT_START 101
#define SEAT_END 115

int main(void)
{
    char seat[SEAT_END - SEAT_START + 1] = {0};
    while(1)
    {
        for(int i = 0; i <= SEAT_END - SEAT_START; i++)
        {
            if(seat[i] == 0)
            {
                printf("%d[-]  ", 101+i);
            }
            else
            {
                printf("%d[O]  ", 101+i);
            }
        }
        printf("\n");
        
        int num;
        if(scanf("%d",&num) < 1)
        {
            return 0;
        }

        if(num >= 101 && num <= 115)
        {
            if(seat[num - 101] == 0)
            {
                seat[num - 101] = 1;
                printf("Booked: %d\n",num);
            }
            else
            {
                printf("Already reserved: %d\n",num);
            }
        }
        else
        {
            printf("Seat not exists: %d\n",num);
        }
        
    }
    
    return 0;
}