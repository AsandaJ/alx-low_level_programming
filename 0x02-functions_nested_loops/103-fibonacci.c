#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	unsigned long int e, f, next, sum;

	e = 1;
	f = 2;
	sum = 0;

	for (d = 1; d <= 33; ++d)
	{
		if (e < 4000000 && (e % 2) == 0)
		{
			sum = sum + e;
		}
		next = e + f;
		e = f;
		f = next;
	}

	printf("%lu\n", sum);

	return (0);
}


