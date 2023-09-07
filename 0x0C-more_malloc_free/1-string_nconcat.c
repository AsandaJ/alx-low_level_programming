#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - combine 'n'bytes of one string with another string
 * @s1: string for appending to
 * @s2: string for merging data from
 * @n: the quantity of bytes frm s2 to join with s1
 *
 * Return: pointer to the newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, l = 0, a = 0, b = 0;

	while (s1 && s1[a])
		b++;
	while (s2 && s2[b])
		b++;

	if (n < b)
		s = malloc(sizeof(char) * (a + n + 1));
	else
		s = malloc(sizeof(char) * (a + b + 1));

	if (!s)
		return (NULL);

	while (k < a)
	{
		s[k] = s1[k];
		k++;
	}

	while (n < b && k < (a + n))
	{
		s[l] = s2[l];
		l++;
	}

	while (n >= b && k < (a + b))
	{
		s[k] = s2[l];
		k++;
		l++;
	}

	s[k] = '\0';

	return (s);
}
