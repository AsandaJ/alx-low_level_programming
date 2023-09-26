#include "lists.h"

/**
 * free_listint2 - list memory deallocation
 * @head: listint_t list pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}

	*head = NULL;
}
