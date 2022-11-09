#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char i)
{
	if(is_full())
		return;
	else 
		contents[top++] = i;
}

int pop(void)
{
	if(is_empty())
		return top = -99;
	else
		return contents[--top];
}

int main(void)
{
	char ch;

	printf("Enter parentheses and/or braces: ");
	while((ch = getchar()) !='\n') {
		if(ch == '{' || ch == '(')
			push(ch);
		else if (ch == '}' && contents[top-1] == '{' 
		      || ch == ')' && contents[top-1] == '(') 
			pop();
		else if (ch == '}' && contents[top-1] != '{' 
		      || ch == ')' && contents[top-1] != '(') 
			top = -99;
	}

	is_empty()
	? printf("Parentheses/braces are nested properly")
	: printf("Parentheses/braces are NOT nested properly"); 
	return 0;
}