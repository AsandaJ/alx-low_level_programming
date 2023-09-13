#include "function_pointers.h"
/**
 * int_index - return index if true, else -1
 * @array: array
 * @size: Element size in array.
 * @cmp: Pointer to one main function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
