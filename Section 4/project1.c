#include <stdio.h>

int main() 
{
	int i;

	printf("Enter a two-digit number: ");
	scanf("%d", &i);

	int j = i / 10;
	int k = i % 10;

	printf("Your number is %d%d\n", k,j);
}