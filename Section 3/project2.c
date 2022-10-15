#include <stdio.h>

int main(void) 
{
	int a, i, j, k;
	float b;

	printf("Enter item number: ");
	scanf("%d", &a);
	printf("Enter unit price: ");
	scanf("%f", &b);
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &i, &j, &k);

	printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n%d\t$%7.2f\t%d%d%d", a, b, i, j, k);
}