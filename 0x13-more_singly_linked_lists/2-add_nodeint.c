#include "lists.h"

/**
 * add_nodeint - prepends linked list
 * @head: List's initial node pointer
 * @n: new node's data.
 *
 * Return: new node pointer or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
