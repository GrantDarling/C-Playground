#include <stdio.h>

#define N 99

int main(void)
{
	char message[N];
	char ch, *p = message;

	printf("Enter a message: ");
	while((ch = getchar()) != '\n' && p < &message[0] + N)
		*p++ = ch;
	p--;

	printf("Reversal is: ");
	while(p >= &message[0]) // shows how it could be done normally
		putchar(*p--);

	printf("\n");

	return 0;
}