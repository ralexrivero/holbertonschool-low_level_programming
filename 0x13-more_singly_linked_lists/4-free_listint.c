#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to head list
 */

void free_listint(listint_t *head)
{
	listint_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}
}
