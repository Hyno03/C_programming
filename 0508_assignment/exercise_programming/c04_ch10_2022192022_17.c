#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define line 20
#define row 10
#define startLine 0
#define startRow 5

//Gold
#define goldLine 19
#define goldRow 8

//Monster
#define monsterStartLine 17
#define monsterStartRow 4

//Line && Row Change integer
int moveLine = startLine;
int moveRow = startRow;
int monsterLine = monsterStartLine;
int monsterRow = monsterStartRow;

void gameBoard(int board[][row])
{
    for (int i = 0; i < line; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if(board[i][j] == 1)
            {
                printf("# ");
            }
            else if(board[i][j] == 3)
            {
                printf("G ");
            }
            else if(board[i][j] == 2)
            {
                printf("M ");
            }
            else
            {
                printf(". ");
            }
        }
        printf("\n");
    }
}

int gameOver(int moveLine,int moveRow)
{
    if(moveLine == goldLine && moveRow == goldRow)
    {
        printf("You got the gold!!!!\n");
        printf("Game Over\n");
        return 0;
    }
    if(moveLine == monsterLine && moveRow == monsterRow)
    {
        printf("You have attacked by monster!!!\n");
        printf("Game Over\n");
        return 0;
    }

    return 1;
}

void playerMove(int board[][row])
{
    printf("Left(a), Right(d), Top(w), Bottom(s) : ");
    char inputArrow = getchar();
    printf("\n");
    switch (inputArrow)
    {
    case 'a':
        board[moveLine][moveRow] = 0;
        moveRow -= 1;
        board[moveLine][moveRow] = 1;
        break;

    case 'd':
        board[moveLine][moveRow] = 0;
        moveRow += 1;
        board[moveLine][moveRow] = 1;
        break;
    
    case 'w':
        board[moveLine][moveRow] = 0;
        moveLine -= 1;
        board[moveLine][moveRow] = 1;
        break;
    
    case 's':
        board[moveLine][moveRow] = 0;
        moveLine += 1;
        board[moveLine][moveRow] = 1;
        break;        
    
    default:
        break;
    }
}

void monsterMove(int board[][row])
{
    int randomMove = rand()%4;
    switch (randomMove)
    {
    case 0:
        board[monsterLine][monsterRow] = 0;
        monsterLine += 1;
        board[monsterLine][monsterRow] = 2;
        break;

    case 1:
        board[monsterLine][monsterRow] = 0;
        monsterRow += 1;
        board[monsterLine][monsterRow] = 2;
        break;

    case 2:
        board[monsterLine][monsterRow] = 0;
        monsterLine -= 1;
        board[monsterLine][monsterRow] = 2;
        break;
        
    case 3:
        board[monsterLine][monsterRow] = 0;
        monsterRow -= 1;
        board[monsterLine][monsterRow] = 2;
        break;
    
    default:
        break;
    }
}

int main(void)
{
    int board[line][row] = {0};
    // int monsterStartLine = rand()%line;
    // int monsterStartRow = rand()%row; 

    board[startLine][startRow] = 1;
    board[monsterStartLine][monsterStartRow] = 2; 
    board[goldLine][goldRow] = 3;

    while (1)
    {   
        gameBoard(board);
        monsterMove(board);
        playerMove(board);
        if(gameOver(moveLine,moveRow) == 0)
        {
            return 0;
        } 
    }    
    
    return 0;
}