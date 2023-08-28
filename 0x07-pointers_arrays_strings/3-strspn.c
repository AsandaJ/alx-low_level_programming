#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * Input are as follow s and accept
 * 
 * Return: the number of bytes in the intial segment of s 
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				a++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
