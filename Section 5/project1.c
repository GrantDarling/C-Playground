#include <stdio.h>

int main() 
{
	int i;

	printf("Enter Digit: ");
	scanf("%d", &i);

	if(i < 10) {
		printf("your number is one digit\n");
	} else if(i < 100) {
		printf("your number is two digit\n");
	} else if(i < 1000) {
		printf("your number is three digit\n");
	} else {
		printf("number is too large\n");
	}
}