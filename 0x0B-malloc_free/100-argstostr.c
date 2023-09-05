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
			str_index++;
	}
	str_index += ac;

	str = malloc(sizeof(char) * str_index + 1);
	if (str == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
	for (s = 0; av[t][s]; s++)
	{
		str[total_length] = av[t][s];
		total_length++;
	}
	if (str[total_length] == '\0')
	{
		str[total_length++] = '\n';
	}
	}
	return (str);
}
