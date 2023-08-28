
#include "main.h"
/**
 *_memcpy - Function to duplicate memory
 *@dest: Memory is stored
 *@src: Memory is copied
 *@n: Number of bytes represented
 *
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int k = n;

	for (; p < k; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
