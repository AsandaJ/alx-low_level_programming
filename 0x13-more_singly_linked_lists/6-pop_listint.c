#include "lists.h"

/**
 * pop_listint - Head node deletion.
 * @head: linked list's initial pointer
 *
 * Return: deleted element data
 */
int pop_listint(listint_t **head)
{
	listint_t *tp;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (nm);
}
