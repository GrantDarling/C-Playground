#include <stdio.h>
#include <ctype.h>

#define SIZE (int) (sizeof(message) / sizeof(message[0]))

int main(void)
{
	int i, msg_len;
	char ch, message[100] = {0};

	printf("Enter message: ");

	for (msg_len = 0; (message[msg_len] = toupper(getchar())) != '\n'; msg_len++) 
		{}

	for(i = 0; i < msg_len; i++) {
		switch(message[i])
		{
			case 'A':
				putchar('4');
				break;
			case 'B':
				putchar('8');
				break;
			case 'E':
				putchar('3');
				break;
			case 'I':
				putchar('1');
				break;
			case 'O':
				putchar('0');
				break;
			case 'S':
				putchar('5');
				break;
			default:
				putchar(message[i]);
				break;
		}
	}
	printf("!!!!!!!!!!\n");

	return 0;
}