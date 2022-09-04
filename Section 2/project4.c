#include <stdio.h>

int main(void)
{
	float amount, tax = 1.05;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	printf("With tax added: $%.2f\n", amount * tax);

	return 0;
}