#include <stdio.h>

int main(void)
{
	int amount, amount_minus_20s, amount_minus_10s, amount_minus_5s;
	int _20bills, _10bills, _5bills, _1bills;

	printf("Enter USD dollar amount: ");
	scanf("%d", &amount);

	_20bills = amount / 20;
	amount_minus_20s   = amount - (20 * _20bills);

	_10bills = amount_minus_20s / 10;
	amount_minus_10s   = amount_minus_20s - (10 * _10bills);

	_5bills =  amount_minus_10s / 5;
	amount_minus_5s   = amount_minus_10s - (5 * _5bills);

	_1bills =  amount_minus_5s / 1;

	printf("$20 bills: %d\n", _20bills);
	printf("$10 bills: %d\n", _10bills);
	printf("$5  bills: %d\n", _5bills);
	printf("$1  bills: %d\n", _1bills);

	return 0;
}