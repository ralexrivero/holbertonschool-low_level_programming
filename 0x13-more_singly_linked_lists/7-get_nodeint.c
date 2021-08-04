#include "lists.h"

/**
 * get_nodeint_at_index - node at a certain index in a linked list
 * @head: first node
 * @index: index of the node
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *buffer = head;

	while (buffer && i < index)
	{
		buffer = buffer->next;
		i++;
	}
	return (buffer ? buffer : NULL);
}
