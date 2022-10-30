#include <stdio.h>

int main()
{
	int i;
	printf("Enter integer: ");
	scanf("%d", &i);

	for(int n = 2; n * n <= i; n++) {
		if(n*n % 2 == 0)
			printf("%d\n", n*n);
	}
}