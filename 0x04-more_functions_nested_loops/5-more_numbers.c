#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int d, e;

	for (d = 1; d <= 10; d++)
	{
		for (e = 0; e <= 14; e++)
		{
			if (e >= 10)
				_putchar('1');
			_putchar (e % 10 + '0');
		}
		_putchar('\n');
	}
}
