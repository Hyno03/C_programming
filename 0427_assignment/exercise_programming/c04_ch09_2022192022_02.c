#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get__dice_face()
{
    static int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;

    for(int i = 0; i < 100; i++)
    {
        int dice = rand()%6 + 1;
        switch (dice)
        {
        case 1:
            count1++;
            break;
        case 2: 
            count2++;
            break;
        case 3:
            count3++;
            break;
        case 4:
            count4++;
            break;
        case 5:
            count5++;
            break;
        case 6:
            count6++;
            break;
        default:
            break;
        }
    }

    printf("1 -> %d\n",count1);
    printf("2 -> %d\n",count2);
    printf("3 -> %d\n",count3);
    printf("4 -> %d\n",count4);
    printf("5 -> %d\n",count5);
    printf("6 -> %d\n",count6);

}


int main(void)
{
    //srand((unsigned int)time(NULL));
    get__dice_face();
    return 0;
}