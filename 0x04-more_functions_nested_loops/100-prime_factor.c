#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor 
 * followed by a new line
 * Return: On success 0
 */
int main(void)
{
	long int m;
	long int max;
	long int d;

	m = 612852475143;
	max = -1;

	while (m % 2 == 0)
	{
		max = 2;
		m /= 2;
	}

	for (d = 3; d <= sqrt(m); d = d + 2)
	{
		while (m % d == 0)
		{
			max = d;
			m = m / d;
		}
	}

	if (m > 2)
		max = m;

	printf("%ld\n", max);

	return (0);
}
