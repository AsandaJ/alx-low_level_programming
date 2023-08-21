#include "main.h"
/**
 * swap_int - This function swaps the values of two integers
 * @a: integer being swapped
 * @b: integer being swappped
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
