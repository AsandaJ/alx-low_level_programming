#include <stdio.h>
/**
 * main - print hexidecimal numbers
 *
 * Return: Success is consistently at 0.
 */
int main(void)
{
	int p;
	char qh;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
	}
	for (qh = 'a'; qh <= 'f'; qh++)
	{
		putchar(qh);
	}
	putchar('\n');
	return (0);
}

