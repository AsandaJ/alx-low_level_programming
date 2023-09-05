#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int word_detected, b, word_count;

	word_detected = 0;
	word_count = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			word_detected = 0;
		else if (word_detected == 0)
		{
			word_detected = 1;
			word_count++;
		}
	}

	return (word_count);
}
/**
 * **strtow - Split a string into words and store them in an array of strings.
 * @str: The string to split.
 *
 * Return: Array of strings
 */
char **strtow(char *str)
{
	char **word_array, *tmp;
	int t, l = 0, len = 0, word_count, b = 0, start, end;

	while (*(str + len))
		len++;
	word_count = count_word(str);
	if (word_count == 0)
		return (NULL);

	word_array = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (word_array == NULL)
		return (NULL);

	for (t = 0; t <= len; t++)
	{
		if (str[t] == ' ' || str[t] == '\0')
		{
			if (b)
			{
				end = t;
				tmp = (char *) malloc(sizeof(char) * (b + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				word_array[l] = tmp - b;
				l++;
				b = 0;
			}
		}
		else if (b++ == 0)
			start = t;
	}

	word_array[l] = NULL;

	return (word_array);
}
