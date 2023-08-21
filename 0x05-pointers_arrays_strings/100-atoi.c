#include "main.h"

/**
 * _atoi - This is a function that converts a string to an integer
 * @s: string to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int index, negative_count, number, length, found_digit, digit;

	index = 0;
	negative_count = 0;
	number = 0;
	length = 0;
	found_digit = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && found_digit == 0)
	{
		if (s[index] == '-')
			++negative_count;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (negative_count % 2)
				digit = -digit;
			number = number * 10 + digit;
			found_digit = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			found_digit = 0;
		}
		index++;
	}

	if (found_digit == 0)
		return (0);

	return (number);
}
