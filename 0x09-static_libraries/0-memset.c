#include "main.h"
/**
 * _memset - the block to be filled with specific value
 * starting address of the memory to be filled : @s
 * The desired value: @b
 * @n: Byte count
 *
 * Return: reinitialised
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;


	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
