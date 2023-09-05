#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars is created by this function
 * @size:The size of the array to create.
 * @c: The character to fill the array with.
 * Description: Dynamically memory for an array of characters
 * Return: results, NULL if memory allocation fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int t;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		str[t] = c;
	return (str);
}
