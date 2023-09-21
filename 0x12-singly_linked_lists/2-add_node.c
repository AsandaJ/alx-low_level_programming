#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts node at start
 * @head: List_t List Doubler pointers
 * @str: String for node
 *
 * Return: new element address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ew;
	unsigned int len = 0;

	while (str[len])
		len++;

	ew = malloc(sizeof(list_t));
	if (!ew)
		return (NULL);

	ew->str = strdup(str);
	ew->len = len;
	ew->next = (*head);
	(*head) = ew;

	return (*head);
}
