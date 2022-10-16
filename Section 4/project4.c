#include <stdio.h>

int main()
{
	int i, j1, j2, j3, j4, j5, k1, k2, k3, k4, k5;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &i);

	k1 = (i  /  8);
	k2 = (k1 /  8);
	k3 = (k2 /  8);
	k4 = (k3 /  8);

	j1 = i  % 8;
	j2 = k1 % 8;
	j3 = k2 % 8;
	j4 = k3 % 8;
	j5 = k4 % 8;

	printf("In octal, your number is: %d%d%d%d%d\n", j5,j4,j3,j2,j1);
}