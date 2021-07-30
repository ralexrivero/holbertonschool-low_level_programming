#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: nomber of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		(!h->str) ? printf("[0] (nil)\n") :
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
