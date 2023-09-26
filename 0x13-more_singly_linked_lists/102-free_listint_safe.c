#include "lists.h"

/**
 * free_listint_safe - list deallocation performed
 * @h: linked list's initial pointer
 *
 * Return: freed list element count
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	int d;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			n++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n++;
			break;
		}
	}

	*h = NULL;

	return (n);
}
