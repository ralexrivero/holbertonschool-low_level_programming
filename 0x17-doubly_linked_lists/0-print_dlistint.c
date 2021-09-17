#include "lists.h"
/**
 * print_dlistint - Function that prints
 * all the elements of a dlistint_t list.
 * @h: node
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
