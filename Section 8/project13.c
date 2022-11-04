#include <stdio.h>

int main(void) 
{
	char ch, initial;
 	char l_name[20]; 

	printf("Enter a first and last name: ");
	scanf("%1c", &initial);

	while((ch = getchar()) != ' ')
		;

	int word_len = 0;
	while((ch = getchar()) != '\n') {
		l_name[word_len] = ch;
		word_len++;
	}

	for (int i = 0; i < word_len; i++)
			printf("%c", l_name[i]);
	printf(", %c. \n", initial);
}