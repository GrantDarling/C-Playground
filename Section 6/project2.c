#include <stdio.h>

int main() {
	int m, n, remainder;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	while(n != 0) {
		remainder = m % n;
		printf("%d\n", remainder);
		m = n;
		n = remainder;
	}
	printf("GCD = %d\n", m);

}