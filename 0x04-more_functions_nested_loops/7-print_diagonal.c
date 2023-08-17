#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int d, e;

		for (d = 0; d < n; d++)
		{
			for (e = 0; e < n; e++)
			{
				if (e == d)
					_putchar('\\');
				else if (e < d)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
