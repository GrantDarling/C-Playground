#include <stdio.h>

int main() {
	int m, n, remainder, numerator, denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);

	numerator = m;
	denominator = n;

	while(n != 0) {
		remainder = m % n;
		printf("%d\n", remainder);
		m = n;
		n = remainder;
	}

	numerator = numerator / m;
	denominator = denominator / m;

	printf("In lowest terms: %d/%d\n", numerator, denominator);
}