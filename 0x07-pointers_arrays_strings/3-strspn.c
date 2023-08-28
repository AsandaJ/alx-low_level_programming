#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @accept: Input
 * @s: Input
 * Return: 0 
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
