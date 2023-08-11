#include <stdio.h>
/**
 * main - print digit combinations
 * Return: Success is consistently at 0.
 */
int main(void)
{
	int k, l;

	for (k = 48; k <= 56; k++)
	{
		for (l = 49; l <= 57; l++)
		{
			if (l > k)
			{
				putchar(k);
				putchar(l);
				if (k != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

