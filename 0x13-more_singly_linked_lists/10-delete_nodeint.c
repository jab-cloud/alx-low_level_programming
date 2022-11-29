#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *del;
	listint_t *next;

	del = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && del != NULL; i++)
		{
			del = del->next;
		}
	}

	if (del == NULL || (del->next == NULL && index != 0))
	{
		return (-1);
	}

	next = del->next;

	if (index != 0)
	{
		del->next = next->next;
		free(next);
	}
	else
	{
		free(del);
		*head = next;
	}
	return (1);
}
