#include <stdio.h>

int main() 
{
	int i,j,k;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &i,&j,&k);

	printf("Your number is %d%d%d\n", k,j,i);
}