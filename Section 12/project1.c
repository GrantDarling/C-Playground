#include <stdio.h>

#define N 99

int main(void)
{
	char ch, a[N], *p;
	int i = 0;

	printf("Enter input: ");
	while((ch = getchar()) != '\n') {
		if(ch != ' ') {
			a[i] = ch;
			i++;
		}
	}

	for (p = &a[i]; p >= &a[0]; p--) 
		printf("%c", *p);
	printf("\n");
}