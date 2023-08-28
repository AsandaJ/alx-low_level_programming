#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * s and accept are inputs
 * 
 * Return: 
 */
char *_strpbrk(char *s, char *accept)
{
		int t;

		while (*s)
		{
			for (t = 0; accept[t]; t++)
			{
			if (*s == accept[t])
			return (s);
			}
		s++;
		}

	return ('\0');
}
