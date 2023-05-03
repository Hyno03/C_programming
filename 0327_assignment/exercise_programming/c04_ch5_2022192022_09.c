#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{   
    printf("Enter the height : \n");
    
    double height;
    if(scanf("%lf",&height)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Enter the length of shadow : \n");

    double shadow;
    if(scanf("%lf",&shadow)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Enter the distance : \n");

    double distance;
    if(scanf("%lf",&distance)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    double pyramid_height = distance * height / shadow;
    printf("Pyramid's height is %lf\n",pyramid_height);
    
    return 0;
}