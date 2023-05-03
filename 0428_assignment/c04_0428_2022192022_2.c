#include <stdio.h>

int main(void)
{
    int voteNum, total = 0;
    int vote[15] = {0};
    while (scanf("%d",&voteNum) != EOF || scanf("%d",&voteNum) > 1)
    {
        if(voteNum >= 1 && voteNum <= 15)
        {
            for(int i = 0; i < 15; i++)
            {
                if(voteNum == i+1)
                {
                    vote[i]++;
                    total++;
                    break;
                }
            }
        }
    }

    printf("Total votes: %d\n",total);
    for(int i = 0; i < 15; i++)
    {
        printf("# %2d %7d %6.3lf%%\n",i + 1, vote[i], vote[i] * 100.0 / total);
    }
    

    return 0;
}