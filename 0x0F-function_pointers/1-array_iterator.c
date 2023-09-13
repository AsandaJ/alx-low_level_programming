#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Display each array element individually
 * @array: array
 * @size: How many elements to print
 * @action: Print pointer in regular/hex format.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
