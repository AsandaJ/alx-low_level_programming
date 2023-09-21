
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates
 * @head: free list
 */
void free_list(list_t *head)
{
	list_t *mp;

	while (head)
	{
		mp = head->next;
		free(head->str);
		free(head);
		head = mp;
	}
}
