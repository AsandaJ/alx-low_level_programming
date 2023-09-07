
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Generate an integer array
 * @min: The smallest range of values stored
 * @max: The upper limit of the value range stored and the count of elements
 *
 * Return: pointer to the newly array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		ptr[k] = min++;

	return (ptr);
}
