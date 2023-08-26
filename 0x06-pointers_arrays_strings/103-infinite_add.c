#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int x = 0;
	int y = 0;
	char press;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		press = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = press;
	}
}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ovrflw = 0, x = 0, y = 0, digits = 0;
	int num1 = 0, num2 = 0, press_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || y >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || overflow == 1)
	{
		if (x < 0)
			num1 = 0;
		else
			num1 = *(n1 + x) - '0';
		if (y < 0)
			num2 = 0;
		else
			num2 = *(n2 + y) - '0';
		press_tot = num1 + num2 + ovrflw;
		if (press_tot >= 10)
			ovrflw = 1;
		else
			ovrflw = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (press_tot % 10) + '0';
		digits++;
		y--;
		x--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
