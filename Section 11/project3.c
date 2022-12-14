#include <stdio.h>


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main() {
	int numerator, denominator, reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
}


void reduce(int m, int n, int *reduced_numerator, int *reduced_denominator) {
	int remainder;
	
	*reduced_numerator = m;
	*reduced_denominator = n;

	while(n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}
	
	*reduced_numerator /= m;
	*reduced_denominator /= m;
}