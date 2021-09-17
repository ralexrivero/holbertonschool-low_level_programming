#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: position to add node
 * @n: node data
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *lastnode = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL) /*empty list*/
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	else
	{
		while (lastnode->next)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new_node;
		new_node->prev = lastnode;
	return (new_node);
	}
}
