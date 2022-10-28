#include <stdio.h>

int main()
{
	int taxableIncome;
	float tax;

	printf("Enter taxable income: ");
	scanf("%d", &taxableIncome);

	if(taxableIncome > 7000) {
		tax = taxableIncome * 0.06;
	} else if(taxableIncome > 5250) {
		tax = taxableIncome * 0.05;
	} else if(taxableIncome > 3750) {
		tax = taxableIncome * 0.04;
	} else if(taxableIncome >  2250) {
		tax = taxableIncome * 0.03;
	} else if(taxableIncome >  750) {
		tax = taxableIncome * 0.02;
	} else {
		tax = taxableIncome * 0.01;
	}

	printf("Your taxes due: $%.2f\n", tax);

	return 0;
}