#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
