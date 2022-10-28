#include <stdio.h>

int main()
{
	int i, j;

	printf("Enter a 24-hour time: ");
	scanf("%d:%2d", &i, &j);

	int k = i % 12;

	if(i == 24){
		printf("Equivalent 12-hour time: 12:00 AM\n", k, j);
	} else if (i < 12) {
		printf("Equivalent 12-hour time: %d:%02d AM\n", k, j);
	} else if (i > 12) {
		printf("Equivalent 12-hour time: %d:%02d PM\n", k, j);
	} else {
		printf("Equivalent 12-hour time: 12:00 PM\n");
	}
};

