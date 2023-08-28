#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 *@s: the string input
 *@c: Input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
