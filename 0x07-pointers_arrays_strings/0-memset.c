#include "main.h"
/**
 * _memset - A function that fills the memory with a constant byte
 * Fill memory fron s
 * Desired output value is b
 * Number of arrays to be changed is n
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
