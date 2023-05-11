#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define line 10
#define row 10

int main(void)
{
    int tile[line][row] = {0};
    tile[5][5] = 1;

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if(tile[i][j] == 0)
            {
                printf(". ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    srand(time(NULL));
    int currentLine = 5, currentRow = 5;
    for(int i = 0; i < 10; i++)
    {
        int number = rand()%8;
        switch (number)
        {
        case 0:
            currentLine -= 1;
            tile[currentLine][currentRow] = 1;
            break;

        case 1:
            currentLine -= 1;
            currentRow += 1;
            tile[currentLine][currentRow] = 1;
            break;
    
        case 2:
            currentRow += 1;
            tile[currentLine][currentRow] = 1;
            break;
    
        case 3:
            currentLine += 1;
            currentRow += 1;
            tile[currentLine][currentRow] = 1;
            break;
        
        case 4:
            currentLine += 1;
            tile[currentLine][currentRow] = 1;
            break;
        
        case 5:
            currentLine += 1;
            tile[currentLine][currentRow] = 1;
            break;
        
        case 6:
            currentRow -= 1;
            tile[currentLine][currentRow] = 1;
            break;
        
        case 7:
            currentLine -= 1;
            currentRow -= 1;
            tile[currentLine][currentRow] = 1;
            break;  

        default:
            break;
        }
    }


    printf("\n\n\n\n\n\n");
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if(tile[i][j] == 0)
            {
                printf(". ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}