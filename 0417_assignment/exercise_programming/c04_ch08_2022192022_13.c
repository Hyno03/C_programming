#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2)
{
    double twoX = (x1-x2)*(x1-x2);
    double twoY = (y1-y2)*(y1-y2);
    double distance = sqrt(twoX+twoY);
    return distance;
}

int main(void)
{
    printf("Enter two of x and y coordinate : ");
    double x1,y1,x2,y2;
    if(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2) < 4)
    {
        printf("Wrong input\n");
        return 0;
    }

    printf("Distance between two coordinate is %lf\n",get_distance(x1,y1,x2,y2));
    return 0;
}