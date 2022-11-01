#include <stdio.h>

int main(void)
{
	int i_fac, i = 1, j;
	float e, curr_term = 10000;
	float euler_number = 1;

	printf("Enter a small floating point number: ");
	scanf("%f", &e);

	while (e < curr_term) {
		for (i_fac = i, j = i; j > 1; j--) {
			i_fac *= j - 1;
		}

		curr_term = 1.0f/i_fac;
		euler_number += curr_term;
		i++;
	}

	printf("The first euler term less than the given number was 1/%d!\n", i - 1);
	printf("e = %f\n", euler_number);

	return 0;
}