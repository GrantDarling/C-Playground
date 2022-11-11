#include <stdio.h>

#define N 200

int main(void)
{
	char ch, sentence[N] = {0}, terminating_char = '?', *p, *q;

	for(p = sentence; (ch = getchar()) != '\n' && p < sentence + N; p++) {
		if(ch == '.' || ch == '?' || ch == '!') {
			terminating_char = ch;
			break;
		} else {
			*p = ch;
		}
	}

	printf("Reversal of sentence: ");
	while (p >= sentence) {
			while (*--p != ' ' && p != sentence)
					;
			q = p == sentence ? sentence : p + 1;
			while (*q != ' ' && *q != '\0')
					putchar(*q++);
			if (p >= sentence)
					putchar(' ');
	}
	printf("%c", terminating_char);

	return 0;
}