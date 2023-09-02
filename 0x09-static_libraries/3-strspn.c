#include "main.h"
/**
 * _strspn - a function that calculates length
 * @s: input value
 * @accept: input value
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int a;


	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				b++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
