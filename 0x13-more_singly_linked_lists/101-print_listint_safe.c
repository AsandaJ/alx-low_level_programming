#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - looped list unique count
 * @head:listint_t head pointer.
 *
 * Return: value options
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *se, *re;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	se = head->next;
	re = (head->next)->next;

	while (re)
	{
		if (se == re)
		{
			se = head;
			while (se != re)
			{
				nodes++;
				se = se->next;
				re = re->next;
			}

			se = se->next;
			while (se != re)
			{
				nodes++;
				se = se->next;
			}

			return (nodes);
		}

		se = se->next;
		re = (re->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - safely print listint_t
 * @head: listint_t head pointer
 *
 * Return: list node count.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, x = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (x = 0; x < nodes; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
