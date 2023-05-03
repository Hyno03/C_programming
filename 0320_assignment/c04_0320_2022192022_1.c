#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("Price : \n");
	int price;
	if (scanf("%d", &price) < 1)
	{
		printf("Wrong input");
		return 0;
	}

	printf("Money : \n");
	int money;
	if (scanf("%d", &money) < 1)
	{
		printf("Wrong input");
		return 0;
	}

	int change = money - price;
	
	int c10000 = change / 10000;
	change %= 10000;
	
	int c5000 = change / 5000;
	change %= 5000;

	int c1000 = change / 1000;
	change %= 1000;

	int c500 = change / 500;
	change %= 500;

	int c100 = change / 100;
	change %= 100;

	int c50 = change / 50;
	change %= 50;

	int c10 = change / 10;
	change %= 10;

	int c1 = change;

	printf("10000 = %d, 5000 = %d, 1000 = %d, 500 = %d, 100 = %d, 50 = %d, 10 = %d, 1 = %d", c10000, c5000, c1000, c500, c100, c50, c10, c1);

	return 0;
}