#include <stdio.h>

int main(void)
{
	float polynomial;

	printf("Input polynomial value: ");
	scanf("%f", &polynomial);

	printf("%.0f\n", ((((3 * polynomial) + 2) * polynomial - 5) * polynomial + 7) * polynomial - 6);

	return 0;
}