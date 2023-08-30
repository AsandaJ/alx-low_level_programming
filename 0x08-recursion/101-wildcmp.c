
#include "main.h"

/**
 * wildcmp - strings comparison
 * pointer to a string : @s1
 * pointer to a string : @s2
 * Return: 0 always
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (*s1 == '\0');

	if (*s2 == '*' && *(s2 + 1) != '\0')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
