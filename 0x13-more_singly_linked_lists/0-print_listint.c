#include "lists.h"

/**
 * print_listint - List elements printed
 * @h: print listint_t
 *
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}

	return (m);
}
