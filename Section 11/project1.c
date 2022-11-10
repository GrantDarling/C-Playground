#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int dollars, twenties, tens, fives, ones;

	printf("Enter USD dollar amount: ");
	scanf("%d", &dollars);

	pay_amount(dollars, &twenties, &tens, &fives, &ones);
	
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5  bills: %d\n", fives);
	printf("$1  bills: %d\n", ones);

	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {

	int amount_minus_20s, amount_minus_10s, amount_minus_5s;
	*twenties = dollars / 20;
	amount_minus_20s   = dollars - (20 * *twenties);

	*tens = amount_minus_20s / 10;
	amount_minus_10s   = amount_minus_20s - (10 * *tens);

	*fives =  amount_minus_10s / 5;
	amount_minus_5s   = amount_minus_10s - (5 * *fives);

	*ones =  amount_minus_5s / 1;

}