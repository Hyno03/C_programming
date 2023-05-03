#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1,num2;
    char cal;
    if(scanf("%d %c %d",&num1,&cal,&num2)<3)
    {
        printf("invalid\n");
        return 0;
    }

    switch (cal)
    {
    case '+':
    case 'P':
        printf("%d %c %d = %d\n",num1,cal,num2,num1 + num2);
        break;
    case '-':
    case 'M':
        printf("%d %c %d = %d\n",num1,cal,num2,num1 - num2);
        break;
    case '*':
    case 'U':
        printf("%d %c %d = %d\n",num1,cal, num2, num1 * num2);
        break;
    case '/':
    case 'D':
    if(num2 == 0)
    {
        printf("div_zero\n");
        break;
    }
    else
    {
        printf("%d %c %d = %d\n",num1,cal, num2, num1 / num2);
        break;
    }       
    case '&':
    case 'a':
        printf("%d %c %d = %d\n",num1,cal, num2, num1 & num2);
        break;
    case '|':
    case 'o':
        printf("%d %c %d = %d\n",num1,cal, num2, num1 | num2);
        break;
    case '^':
    case 'x':
        printf("%d %c %d = %d\n",num1,cal, num2, num1 ^ num2);
        break;
    case 'L':
        printf("%d %c %d = %d\n",num1,cal,num2, num1 << num2);
        break;
    case 'R':
        printf("%d %c %d = %d\n",num1,cal,num2, num1 >> num2);
        break;
    case '%':
        printf("%d %c %d = %d\n",num1,cal,num2,num1 % num2);
        break;
    case '=':
        printf("%d %c %d = %d\n",num1,cal,num2, num1 == num2);
        break;
    case '!':
        printf("%d %c %d = %d\n",num1,cal,num2, num1 != num2);
        break;
    case 'A':
        printf("%d %c %d = %d\n",num1,cal,num2, num1 && num2);
        break;
    case 'O':
        printf("%d %c %d = %d\n",num1,cal,num2,num1 || num2);
        break;
    default:
        printf("undefined\n");
        break;
    }

    return 0;
}