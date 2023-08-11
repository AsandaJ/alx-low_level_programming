#include <stdio.h>
/**
 * main - Lowercase alphabet printing
 *
 * Return: Success is consistently at 0.
 */
int main(void)
{
	char qh;

	for (qh = 'z'; qh >= 'a'; qh--)
	{
		putchar(qh);
	}
	putchar('\n');
	return (0);
}

