#include <stdio.h>

int main(void) 
{
	int i, day;

	printf("Enter number of days in month: ");
	scanf("%d", &i);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day);
	day--;

	for(int i = 0; i<day; i++) {
		printf("   ");
	};
		
	for(int k = 1; k<=i; k++) {
		day++;
		printf("%2d ", k);

		if(day % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");

	return 0;
}