#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three display "Fizz"
 * and for the multiples of five display Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if (d % 3 == 0 && d % 5 != 0)
		{
			printf(" Fizz");
		} else if (d % 5 == 0 && d % 3 != 0)
		{
			printf(" Buzz");
		} else if (d % 3 == 0 && d % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (d == 1)
		{
			printf("%d", d);
		} else
		{
			printf(" %d", d);
		}
	}
	printf("\n");

	return (0);
}
