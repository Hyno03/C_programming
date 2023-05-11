#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define line 10
#define row 10
#define bombPercent 30

int main(void)
{   
    srand(time(NULL));
    int minesweeper[line][row] = {0};
    int bombcount = 0;

    while (bombcount < bombPercent)
    {
        int bombLine = rand()%line;
        int bombRow = rand()%row;
        if(minesweeper[bombLine][bombRow] != -1)
        {
            minesweeper[bombLine][bombRow] = -1;
            bombcount++;   
        }     
    }
    
    while(1)
    {
        printf("Which cell would you like to open? : ");
        int linenum,rownum;
        if(scanf("%d %d",&linenum,&rownum) < 2)
        {
            printf("Wrong input\n");
            return 0;
        }
        
        if(minesweeper[linenum][rownum] != -1)
        {
            minesweeper[linenum][rownum] = 1;
        }

        for(int i = 0; i < line; i++)
        {
            for(int j = 0; j < row; j++)
            {
                if(i == linenum && j == rownum && minesweeper[linenum][rownum] == -1)
                {
                    printf("# ");   
                }
                else if(minesweeper[i][j] == 1)
                {
                    printf("* ");
                }
                else
                {
                    printf(". ");
                }
                
            }
            printf("\n");
        }
        if(minesweeper[linenum][rownum] == -1)
        {
            printf("Game Over\n");
            return 0;
        } 
    }
   


    return 0;
}