#include "lists.h"

/**
 * list_len - count the elements of a list_t list
 * @h: pointer to list
 * Return: number of elments
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
