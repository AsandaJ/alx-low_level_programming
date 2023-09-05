#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate strings in 2D pointer array into 1D.
 * @ac: The number of strings in the array.
 * @av: The array of strings
 * Return: Concatenated string with newline separators.
 */
char *argstostr(int ac, char **av)
{
	int t, s, total_length = 0, str_index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (s = 0; av[t][s]; s++)
			total_length++;
	}
	total_length += ac;

	str = malloc(sizeof(char) * str_index + 1);
	if (str == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
	for (s = 0; av[t][s]; s++)
	{
		str[str_index] = av[t][s];
		str_index++;
	}
	if (str[str_index] == '\0')
	{
		str[str_index++] = '\n';
	}
	}
	return (str);
}
