#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define MAX_COUNT 100
#define DEGREE_STEP 15

int main(void)
{
    for(int degree = 0; degree <= 360; degree += DEGREE_STEP)
    {
        double radian = degree * M_PI / 180;
        double v = cos(radian);
        int count = (int)((v+1) * (MAX_COUNT -1 -0) / (1 - -1)+ 0 + 0.5); 
        printf("%*c\n",count+1,'*');  
    }
    return 0;
}