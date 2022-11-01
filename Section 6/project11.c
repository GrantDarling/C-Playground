#include <stdio.h> 

int main(void) 
{
	int n, i_fac, i, j;
	float e = 1;

	printf("Enter number for approximating e: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		for(i_fac = i, j = i; j > 1; j--) {
			i_fac *= j - 1;
		}
		e += 1.0f/i_fac;
	}

	printf("e = %f\n", e);

	return 0;
}