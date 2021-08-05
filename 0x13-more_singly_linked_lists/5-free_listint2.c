#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *buffer;

	if (head == NULL)
		return;
	while (*head)
	{
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
	}
	*head = NULL;
}
