#include <stdio.h>

int main(void)
{
    int no_of_digits_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        no_of_digits_seen[digit]++;
        n /= 10;
    }

		printf("Digit:          ");
		for(int i = 0; i < 10; i++) {
			printf("%d ", i);
		}
		printf("\n");

    printf("Occurrences:    ");
    for (n = 0; n < 10; n++) {
			printf("%d ", no_of_digits_seen[n]);
    }
		printf("\n");

    return 0;
}