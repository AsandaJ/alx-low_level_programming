#include "main.h"
/**
 * _strpbrk - a function that checks a string for first ocr
 * @s: input value
 * @accept: input value
 * Return: 0 always
 */
char *_strpbrk(char *s, char *accept)
{
	int a;


	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}


return ('\0');
}
