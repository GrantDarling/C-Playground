#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch, message[20];
	int i;

	printf("Enter message: ");

	for(i=0; (ch = getchar()) != '\n' && i < 20; i++) {
		//ch = ch - 'A';
		message[i] = (ch);

		switch(ch) {
			case 'A':
				printf("you added an A");
				break;
			case '+': case '3': 
				printf("fuck you");
				break;
			default:
				printf(".");
				break;
		}
	}

	// char c;
	// for(c='A';c<='Z';c++)
	// 	printf("%c %d\n",(c),(c - 'A'));

	for(i = 0; i < 20; i++) {
		printf("%c", message[i]);
	}
}