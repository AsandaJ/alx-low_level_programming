#include "main.h"
/**
 * _strlen - This function  returns the length of a string
 * @s:The input string
 * Return: length always
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
