#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 99

int main(void)
{
	char message[N];
	char ch, *p = message, *j, *q;
	bool isPalindrome = true; 

	printf("Enter a message: ");
	while((ch = toupper(getchar())) != '\n' && p < message + N)
		if(ch != ' ')
			*p++ = ch;
	p--;


	for(j = message; j < p; j++, p-- ) {
		if(*j != *p) {
			isPalindrome = false;
			break;
		}
	}

	isPalindrome 
	? printf("This IS a palindrome")
	: printf("This IS NOT a palinrome");

	printf("\n");
	return 0;
}