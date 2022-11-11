#include <stdio.h>

#define N 99

int main(void)
{
	char message[N];
	char ch, *p = message;

	printf("Enter a message: ");
	while((ch = getchar()) != '\n' && p < message + N)
		*p++ = ch;

	p--;
	printf("Reversal is: ");
	while(p >= message)
		putchar(*p--);

	printf("\n");

	return 0;
}