#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;	
	if(scanf("%d %d", &num1, &num2) < 2)
	{
		printf("Not a number");
		return 0;
	}

	int sum = num1 + num2;
	printf("%d + %d = %d\n",num1, num2, sum);

	int diff;
	if (num1 >= num2)
	{
		diff = num1 - num2;
		printf("%d - %d = %d\n", num1, num2, diff);
	}
	if (num2 >= num1)
	{
		diff = num2 - num1;
		printf("%d - %d = %d\n", num2, num1, diff);
	}

	int mul = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, mul);

	int div = num1 / num2;
	printf("%d / %d = %d\n", num1, num2, div);

	return 0;
}