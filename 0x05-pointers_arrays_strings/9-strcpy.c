#include "main.h"

/**
 * char *_strcpy - Copies the content of one string to another
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int y = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; y < k ; y++)
	{
		dest[y] = src[y];
	}
	dest[k] = '\0';
	return (dest);
}
