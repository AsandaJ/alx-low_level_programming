#include "lists.h"

/**
 * delete_nodeint_at_index - index-based node removal
 * @head: List's start pointer
 * @index:Node deletion index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = *head;
	listint_t *crrnt = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (x == 0)
	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}

	while (k < x - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		k++;
	}


	crrnt = tp->next;
	tp->next = crrnt->next;
	free(crrnt);

	return (1);
}
