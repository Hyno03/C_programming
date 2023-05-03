#include <stdio.h>

int main(void)
{
    double light_speed = 300000;
    printf("Light speed is %lf\n", light_speed);

    double distance = 149600000;
    printf("The distance between the sun and the earth is %lf\n",distance);

    double time = distance / light_speed;
    int minute = time / 60;
    int second = (int) time % 60;
    printf("It takes %dmin %dsec",minute,second);

    return 0;
}