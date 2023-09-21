#include <stdlib.h>
#include "lists.h"

/**
 * list_len - count elements
 * @d: List pointer
 *
 * Return: count list_t elements
 */
size_t list_len(const list_t *d)
{
	size_t k = 0;

	while (d)
	{
		k++;
		d = d->next;
	}
	return (k);
}
