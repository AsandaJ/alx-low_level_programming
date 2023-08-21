#include "main.h"
/**
 * puts_half - This function that prints half of a string
 * if the length is odd, n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: half of input
 */
void puts_half(char *str)
{
	int b, n, length;

	length = 0;

	for (b = 0; str[b] != '\0'; b++)
		length++;

	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
