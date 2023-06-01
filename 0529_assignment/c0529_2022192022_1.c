#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pitcher.h"


//num 7
int Pitcher_cmp_ip(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    if(p1->inningsPitched < p2->inningsPitched)
    {
        return 1;
    }
    else if (p1->inningsPitched > p2->inningsPitched)
    {
        return -1;
    }
    else
    {
        return 0;
    }

}

//num 6
int Pitcher_cmp_avg(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    if(p1->battingAverage < p2->battingAverage)
    {
        return -1;
    }
    else if (p1->battingAverage > p2->battingAverage)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//num 5
int Pitcher_cmp_team(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    return strcmp(p1->team, p2->team);
}

//num 4
int Pitcher_cmp_name(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    return strcmp(p1->lastName, p2->lastName);
}

//num 3
int Pitcher_cmp_era(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    if(p1->era < p2->era)
    {
        return -1;
    }
    else if (p1->era > p2->era)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//num 2
int Pitcher_cmp_whip(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    if(p1->whip < p2->whip)
    {
        return -1;
    }
    else if (p1->whip > p2->whip)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//num 1
int Pitcher_cmp_win_lose(const void *a, const void *b)
{
    const Pitcher *p1 = (const Pitcher *)a;
    const Pitcher *p2 = (const Pitcher *)b;

    int win_diff = p2 ->win - p1 ->win;
    if(win_diff != 0)
    {
        return win_diff;
    }

    int lose_diff = p1->lose -p2->lose;
    if(lose_diff != 0)
    {
        return lose_diff;
    }

    return Pitcher_cmp_era(p1,p2);
}

typedef int (*Pitcher_cmp)(const void *a, const void *b);


int main(int argc, char const *argv[])
{
    Pitcher_cmp pitcher_cmp[] =
    {
        Pitcher_cmp_win_lose,
        Pitcher_cmp_whip,
        Pitcher_cmp_era,
        Pitcher_cmp_name,
        Pitcher_cmp_team,
        Pitcher_cmp_avg,
        Pitcher_cmp_ip
    };

    while(1)
    {
        printf("-----Menu-----\n");
        printf(" 0 . End \n");
        printf(" 1. Win / Lose / Era \n");
        printf(" 2. Whip \n");
        printf(" 3. Era \n");  
        printf(" 4. Name \n"); 
        printf(" 5. Team \n"); 
        printf(" 6. Avg \n");
        printf(" 7. Ip \n"); 
        printf("------------\n");
    
        printf("Select menu number : ");
        int inputNum;
        if(scanf("%d",&inputNum) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
        
        if(inputNum >= 1 && inputNum <= 7)
        {
            printf("\n\n");
            qsort(pitchers, pitcher_count, sizeof(pitchers[0]), pitcher_cmp[inputNum - 1]);
            Pitcher_printAll(10);
        }
        else if(inputNum == 0)
        {
            return 0;
        }
    }
    
    return 0;
}