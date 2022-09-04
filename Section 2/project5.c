#include <stdio.h>

int main(void)
{
	float polynomial;

	printf("Input polynomial value: ");
	scanf("%f", &polynomial);

	int polynomial_squared = polynomial * polynomial;
	int polynomial_cubed = polynomial_squared * polynomial;
	int polynomial_quartic = polynomial_cubed * polynomial;
	int polynomial_quintic = polynomial_quartic * polynomial;

	printf("%.0f\n", (3 * polynomial_quintic) + (2 * polynomial_quartic) - (5 * polynomial_cubed) - polynomial_squared + (7 * polynomial) - 6);

	return 0;
}