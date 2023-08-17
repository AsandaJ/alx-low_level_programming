#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d, e;

		for (d = 1; d <= size; d++)
		{
			for (e = d; e < size; e++)
			{
				_putchar(' ');
			}

			for (e = 1; e <= d; e++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
