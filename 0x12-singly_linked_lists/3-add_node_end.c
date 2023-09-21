#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - appends node end
 * @head: List_t List Double
 * @str: string to put in the new node
 *
 * Return: new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ew;
	list_t *mp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	ew = malloc(sizeof(list_t));
	if (!ew)
		return (NULL);

	ew->str = strdup(str);
	ew->len = len;
	ew->next = NULL;

	if (*head == NULL)
	{
		*head = ew;
		return (ew);
	}

	while (mp->next)
		mp = mp->next;

	mp->next = ew;

	return (ew);
}
