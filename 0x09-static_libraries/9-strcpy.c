#include "main.h"
/**
 * char *_strcpy - copy of string from src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int m = 0;


	while (*(src + n) != '\0')
	{
		n++;
	}
	for ( ; m < n ; m++)
	{
		dest[m] = src[m];
	}
	dest[n] = '\0';
	return (dest);
}
