#include <stdio.h>
/**
 * main - prints triple combinations
 * Return: Success is consistently at 0.
 */
int main(void)
{
	int p, o, q;

	for (p = 48; p < 58; p++)
	{
		for (o = 49; o < 58; o++)
		{
			for (q = 50; q < 58; q++)
			{
				if (q > o && o > p)
				{
					putchar(p);
					putchar(o);
					putchar(q);
					if (p != 55 || o != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

