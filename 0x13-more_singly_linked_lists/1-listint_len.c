#include "lists.h"

/**
 * listint_len - linked list element count
 * @h: Traverse listint_t
 *
 * Return: node quantity count
 */
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}

	return (nm);
}
