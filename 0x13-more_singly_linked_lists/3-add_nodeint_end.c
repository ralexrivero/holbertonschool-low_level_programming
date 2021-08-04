#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * @head: pointer to the first element
 * @n: data to insert
 * Return: address of new elemento or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	 listint_t *add_node, *buffer = *head;

add_node = malloc(sizeof(listint_t));
	if (!add_node)
	return (NULL);
	add_node->n = n;
	add_node->next = NULL;
	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
}
	while (buffer->next)
		buffer = buffer->next;
	buffer->next = add_node;
	return (add_node);
}
