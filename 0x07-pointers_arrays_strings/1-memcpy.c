
#include "main.h"
/**
 *_memcpy - Function to duplicate memory
 *Memory is stored at @dest
 *Memory is copied to src
 *Number of bytes represented by n
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
