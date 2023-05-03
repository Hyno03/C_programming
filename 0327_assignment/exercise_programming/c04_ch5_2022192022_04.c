#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter your height : \n");

    int height;
    if(scanf("%d",&height)<1)
    {
        printf("Wrong input\n");
        return 0;
    }

    float height_fit = 12*2.54;
    int fit = height/height_fit;
    float inch = (height - fit * height_fit)/2.54;
    printf("%dcm is %dfit %.2finch\n",height,fit,inch);

    return 0;
}