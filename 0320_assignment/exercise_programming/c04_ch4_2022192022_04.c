#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the width, length and height of the box at once : \n");
    
    double width;
    double length;
    double height;
    if(scanf("%lf %lf %lf",&width,&length,&height) < 3)
    {
        printf("Not a correct input\n");
        return 0;
    }

    double volume = width*length*height;
    printf("Volume of the box is : %lf\n",volume);

    return 0;
}