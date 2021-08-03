#include "lists.h"

/**
 * add_nodeint - add node at list
 * Return: address of new element of NULL if fail
 * @head: first node in list
 * @n: data to add
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (!add_node)
		return (NULL);
	add_node->n = n;
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
