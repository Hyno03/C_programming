#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice()
{
    int diceRoll = rand()%6 + 1;
    return diceRoll;
}

int userDiceSum()
{
    int x = dice();
    int y = dice();
    int z = dice();
    
    int sum = x+y+z;
    printf("user dice(%d %d %d) = %d\n",x,y,z,sum);

    return sum;
    
}

int comDiceSum()
{
    int x = dice();
    int y = dice();
    int z = dice();
    
    int sum = x+y+z;
    printf("com dice(%d %d %d) = %d\n",x,y,z,sum);

    return sum;
    
}

int main(void)
{
    srand((unsigned int)time(NULL));

    int user = userDiceSum();
    int com = comDiceSum();
    if(user > com)
    {
        printf("You win\n");
        return 0;
    }
    else if(user < com)
    {
        printf("You lose\n");
        return 0;
    }
    else
    {
        printf("Same\n");
        return 0;
    }

    return 0;
}