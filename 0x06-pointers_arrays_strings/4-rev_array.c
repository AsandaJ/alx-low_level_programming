#include "main.h"
/**
 * reverse_array - Array of integers being reversed function
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int q;

	for (x = 0; x < n--; x++)
	{
		q = a[x];
		a[x] = a[n];
		a[n] = q;
	}
}
