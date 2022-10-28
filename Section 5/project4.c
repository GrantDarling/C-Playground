#include <stdio.h>

int main()
{
	int knots;

	printf("Enter the wind speed (knots): ");
	scanf("%d", &knots);

	if(knots > 63) {
		printf("Wind Speed: Hurricane\n");
	} else if(knots > 47) {
		printf("Wind Speed: Storm\n");
	} else if(knots > 27) {
		printf("Wind Speed: Gale\n");
	} else if(knots >  3) {
		printf("Wind Speed: Breeze\n");
	} else if(knots <  1) {
		printf("Wind Speed: Calm\n");
	} else {
		printf("Wind Speed: Light air\n");
	}
}