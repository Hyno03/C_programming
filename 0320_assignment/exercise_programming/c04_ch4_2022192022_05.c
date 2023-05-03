#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter area : \n");

    double pyeong;
    if(scanf("%lf",&pyeong) < 1)
    {
        printf("Not a correct input\n");
        return 0;
    }

    const double SQMETER_PER_PYEONG = 3.3058;
    double result = pyeong * SQMETER_PER_PYEONG;
    printf("It is %lf per pyeong meter.\n",result);

    return 0;
}