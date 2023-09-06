#include <stdio.h>
#include "main.h"
/**
 * _atoi - a string being converted into an integer
 * @s: string to be converted
 *
 * Return: int
 */
int _atoi(char *s)
{
	int a = 0, digit = 0, num = 0, len = 0, dashCount = 0, foundigit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && dashCount == 0)
	{
		if (s[a] == '-')
			++digit;

		if (s[a] >= '0' && s[a] <= '9')
		{
			foundigit = s[a] - '0';
			if (foundigit % 2)
				foundigit = -foundigit;
			num = num * 10 + foundigit;
			dashCount = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			dashCount = 0;
		}
		a++;
	}

	if (dashCount == 0)
		return (0);

	return (num);
}

/**
 * main - multiplication of 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 otherwise 1
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = (atoi(argv[1] * atoi(argv[2]));
		printf("%d\n", result);
	}
		result = (atoi(argv[1] * atoi(argv[2]));
		printf("%d\n", result);

	return (0);
}
