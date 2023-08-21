#include "main.h"
/**
 * print_rev - This function imprime en reversa
 * @s:The input string
 * Return: None
 */
void print_rev(char *s)
{
	int length = 0;
	int position;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (position = length; position > 0; position--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
