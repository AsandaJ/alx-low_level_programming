#include "main.h"

int actual_sqrt_recursion(int n, int r);

/**
 * _sqrt_recursion - calculates the square root of a number.
 * Calculate square root of input number : @n
 *
 * Return: Final square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - uses recursion to discover the actual
 * Calculate square root of input number : @n
 * Iterator : @r
 *
 * Return: Final square root
 */
int actual_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
