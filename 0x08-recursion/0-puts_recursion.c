#include "main.h"
/**
 * _puts_recursion - a function that prints a string;
 * input : @s
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
int main(void)
{
	char inputString[] = "Hello, recursion!";

	_puts_recursion(inputString);

	return(0);
}
