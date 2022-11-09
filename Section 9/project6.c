#include <stdio.h>
#include <math.h>

#define INT 5

int computePolynomial(int x) 
{
	return pow((3*3), 5) + pow((2*x), 4) - pow((5*x), 3) - pow(x,2) + (7*x) - 6;
}

int main(void)
{
	int x;
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("%d", computePolynomial(x));

	return 0;
}