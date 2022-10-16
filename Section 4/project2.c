#include <stdio.h>

int main() 
{
	int i;

	printf("Enter a three-digit number: ");
	scanf("%d", &i);

	int j = i % 100;
	int k = j % 10;
	int l = j / 10;
	int m = (i - (k + l)) / 100;

	printf("Your number is %d%d%d\n", k,l,m);
}