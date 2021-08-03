#include "lists.h"

/**
 * listint_len - print the number of elements
 * @h: linked list to print
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}
