#include "lists.h"

/**
 * sum_listint - listnt_t sum calculated
 * @head: initial linked node
 *
 * Return: sum of the result
 */
int sum_listint(listint_t *head)
{
	int sm = 0;
	listint_t *tp = head;

	while (tp)
	{
		sm += tp->n;
		tp = tp->next;
	}

	return (sm);
}
