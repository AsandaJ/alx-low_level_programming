#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Checks for non-digit characters in a string.
 * @s: The string to be inspected
 *
 * Return: 0 if a non-digit character is discovered, and 1 otherwise
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - Provides the size of characters in a string
 * @s: The string to assess
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Performs the multiplication operation on 2 numbers, bot +
 * @argc: quantity of arguments.
 * @argv: list of arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int b, c, len, k, carry, d, e, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	b = _strlen(s1);
	c = _strlen(s2);
	len = b + c + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (k = 0; k <= b + c; k++)
		result[k] = 0;
	for (b = b - 1; b >= 0; b--)
	{
		d = s1[b] - '0';
		carry = 0;
		for (e = _strlen(s2) - 1; c >= 0; c--)
		{
			e = s2[c] - '0';
			carry += result[b + c + 1] + (d * e);
			result[b + c + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[b + c + 1] += carry;
	}
	for (k = 0; k < len - 1; k++)
	{
		if (result[k])
			a = 1;
		if (a)
			_putchar(result[k] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
