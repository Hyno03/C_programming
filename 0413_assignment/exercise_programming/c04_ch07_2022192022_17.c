#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    printf("\n**************************\n");
    printf("A ---- Add\n");
    printf("S ---- Subtract\n");
    printf("M ---- Multiply\n");
    printf("D ---- Divide\n");
    printf("Q ---- Quit\n");
    printf("**************************\n\n");

    do
    {
        printf("Choose one : \n");       
        char math;
        if(scanf("%c",&math) < 1)
        {
            printf("Wrong input\n");
            return 0;
        }
        if(math == 'Q')
        {
            break;
        }

        int num1,num2;
        printf("Enter the two number : \n");
        if(scanf("%d %d",&num1,&num2) < 2)
        {
            printf("Wrong input\n");
            return 0;
        }

        switch (math)
        {
        case 'A':
            printf("%d\n",num1 + num2);
            break;

        case 'S':
            printf("%d\n",num1 - num2);
            break;   
        
        case 'M':
            printf("%d\n",num1 * num2);
            break;
        
        case 'D':
            printf("%d\n",num1 / num2);
            break;

        default:
            break;
        }
    } while(1);

    return 0;
}