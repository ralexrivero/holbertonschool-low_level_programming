#include "lists.h"

/**
 * free_list - frees list
 * @head: list_t to freed
 */
void free_list(list_t *head)
{
	list_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
