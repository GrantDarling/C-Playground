#include <stdio.h>

int main() 
{
	int i, j, k;

	printf("Enter a two-digit number: ");
	scanf("%d", &i);

do {
		j = i / 10;
		k = i % 10;
		i = j;
	}	while(i >= 10); 

	printf("Your number is %d%d\n", k,j);
}