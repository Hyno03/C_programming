#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("Enter the month in number : \n");
    int month;
    if(scanf("%d",&month) < 1)
    {
        printf("Wrong input\n");
        return 0;
    }

    switch (month)
    {
    case 1:
        printf("Jan\n");
        break;
    case 2:
        printf("Feb\n");
        break;
    case 3:
        printf("Mar\n");
        break;
    case 4:
        printf("Apr\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("Jun\n");
        break;
    case 7:
        printf("Jul\n");
        break;
    case 8:
        printf("Aug\n");
        break;
    case 9:
        printf("Sep\n");
        break;
    case 10:
        printf("Oct\n");
        break;
    case 11:
        printf("Nov\n");
        break;
    case 12:
        printf("Dec\n");
        break;
    default:
        printf("Wrong number\n");
        break;
    }
    return 0;
}