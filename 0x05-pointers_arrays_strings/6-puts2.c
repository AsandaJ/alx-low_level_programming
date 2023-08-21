#include "main.h"
/**
 * puts2 - This function should print only one character out of two
 * beginning with the first one
 * @str: input
 * Return: print always
 */
void puts2(char *str)
{
	int length = 0;
	int p = 0;
	char *x = str;
	int q;

	while (*x != '\0')
	{
		x++;
		length++;
	}
	p = length - 1;
	for (q = 0 ; q <= p ; q++)
	{
		if (q % 2 == 0)
	{
		_putchar(str[q]);
	}
	}
	_putchar('\n');
}
