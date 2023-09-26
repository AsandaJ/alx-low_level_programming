#include "lists.h"

/**
 * add_nodeint_end - appends linked list
 * @head: list's initial element pointer
 * @n: new element's data
 *
 * Return: new node pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = nw;

	return (nw);
}
