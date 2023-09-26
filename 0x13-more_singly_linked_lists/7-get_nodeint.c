#include "lists.h"

/**
 * get_nodeint_at_index - index-based node retrieval.
 * @head: linked list's start.
 * @index: node retrieval index
 *
 * Return: Node retrieval index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *tp = head;

	while (tp && k < index)
	{
		tp = tp->next;
		k++;
	}

	return (tp ? tp : NULL);
}
