#include <stdio.h>

int main(void)
{
	float loan, payment;
	float interest_rate, interest_rate_percentage, monthly_payment;
	int numOfPayments;

	printf("Enter amount of loan: ");
	scanf(" %f", &loan);

	printf("Enter interest rate: ");
	scanf(" %f", &interest_rate);
	interest_rate_percentage = ((interest_rate / 100) / 12);

	printf("Enter monthly payment: ");
	scanf(" %f", &monthly_payment);

	printf("Enter # of payments: ");
	scanf(" %d", &numOfPayments);

	payment = loan;
	
	for(int i=0;i<numOfPayments; i++) {
		payment = (payment * (1 + interest_rate_percentage) - monthly_payment);
		printf("Balance remaining after payment number %d:  %.2f\n", i, payment); 
	}

	return 0;
}