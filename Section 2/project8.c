#include <stdio.h>

int main(void)
{
	float loan, first_payment, second_payment, third_payment;
	float interest_rate, interest_rate_percentage, monthly_payment;

	printf("Enter amount of loan: ");
	scanf(" %f", &loan);

	printf("Enter interest rate: ");
	scanf(" %f", &interest_rate);
	interest_rate_percentage = ((interest_rate / 100) / 12);

	printf("Enter monthly payment: ");
	scanf(" %f", &monthly_payment);

	first_payment  = (loan * (1 + interest_rate_percentage) - monthly_payment);
	second_payment = (first_payment * (1 + interest_rate_percentage) - monthly_payment);
	third_payment  = (second_payment * (1 + interest_rate_percentage) - monthly_payment);

	printf("Balance remaining after first payment:  %.2f\n", first_payment);
	printf("Balance remaining after second payment: %.2f\n", second_payment);
	printf("Balance remaining after third payment:  %.2f\n", third_payment);

	return 0;
}