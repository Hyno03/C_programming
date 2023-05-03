#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c;
    if(scanf("%lf %lf %lf",&a,&b,&c) < 3 )
    {
        printf("invalid");
        return 0;
    }

    double dis = b*b - 4*a*c;
    if(a!=0 && b!=0 && c!=0)
    {
        if(dis > 0)
        {
            printf("real %f %f",(-b + sqrt(dis))/(2*a),(-b - sqrt(dis))/(2*a));
            return 0;
        }
        else if(dis == 0)
        {
            printf("er %f",(-b + sqrt(dis))/(2*a));
            return 0;
        }
        else
        {
            printf("imaginary");
            return 0;
        }
    }
    else if(a==0 && b!=0 && c!=0)
    {
        printf("root %f",-c/b);
        return 0;
    }
    else if(a==0 && b==0 && c==0)
    {
        printf("all");
        return 0;
    }
    else
    {
        printf("none");
        return 0;
    }
    return 0;
}