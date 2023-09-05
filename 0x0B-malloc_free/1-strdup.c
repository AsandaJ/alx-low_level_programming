#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicate a string to a new memory space.
 * @str: The input string to duplicate
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *duplicate;
	int t, length = 0;

	if (str == NULL)
		return (NULL);
	t = 0;
	while (str[t] != '\0')
		t++;
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		duplicate[t] = str[t];

	return (duplicate);
}
