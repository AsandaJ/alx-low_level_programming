#include "main.h"

int actual_prime(int n, int r);

/**
 * is_prime_number - verifies integer's primality
 * Number to evaluate : @n
 *
 * Return: actuak_prime(n, n - 1);
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - a function that recursively checks prime number.
 * Number to evaluate : @n
 * Iterator : @r
 *
 * Return: actual_prime(n, n - 1);
 */
int actual_prime(int n, int r)
{
	if (r == 1)
		return (1);
	return (n % r == 0 && r > 0)? 0 : actual_prime(n, r - 1);
}
