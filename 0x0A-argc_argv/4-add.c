#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check if a string contains only digits.
 * @str: array str
 *
 * Return: 0 always
 */
int check_num(char *str)
{
	unsigned int index = 0;
	index = 0;
	while (index < strlen(str))

	{
		if (!isdigit(str[index]))
		{
			return (0);
		}

		index++;
	}
	return (1);
}

/**
 * main - program name printed
 * @argc: Index arguments
 * @argv: Arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int index;
	int str_to_int;
	int sum = 0;

	index = 1;
	while (index < argc)
	{
		if (check_num(argv[index]))

		{
			str_to_int = atoi(argv[index]);;
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		index++;
	}

	printf("%d\n", sum);

	return (0);
}
