#include <stdio.h>

int main()
{
	int highest = 0, i;

	for(;;) {
		printf("Enter a number: ");
		scanf("%d", &i);

		if(i <= 0)
			break;
			
		if(i > highest) {
			highest = i;
		}
	}

	printf("Highest Number: %d\n", highest);
}