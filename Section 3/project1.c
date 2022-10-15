#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &i, &j, &k);
	printf("You entered the date %d%d%d\n", i, j, k);
}