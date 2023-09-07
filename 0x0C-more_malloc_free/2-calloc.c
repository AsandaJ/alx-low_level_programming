#include <stdlib.h>
#include "main.h"

/**
 * *_memset - allocation of memory with a constant byte
 * @s: The memory region that needs to be populated
 * @b: Character to duplicate
 * @n: The count of repetitions for copying 'b'
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

/**
 * *_calloc - Reserve memory for an array
 * @nmemb: The quantity of items within the array
 * @size: The dimension of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
