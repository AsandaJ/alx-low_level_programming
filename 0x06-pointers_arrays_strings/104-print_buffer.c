#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int q,yj, x;

	q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (q < size)
	{
		y = size - q < 10 ? size - q : 10;
		printf("%08x: ", q);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + q + x));
			else
				printf("  ");
			if (x % 2)
			{
				printf(" ");
			}
		}
		for (x = 0; x < y; x++)
		{
			int c = *(b + q + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		q += 10;
	}
}
