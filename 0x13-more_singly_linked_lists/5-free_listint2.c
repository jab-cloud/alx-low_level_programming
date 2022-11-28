#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *node;

	if (head != NULL)
	{
		node = *head;
		while ((list = node) != NULL)
		{
			node = node->next;
			free(list);
		}
		*head = NULL;
	}
}
