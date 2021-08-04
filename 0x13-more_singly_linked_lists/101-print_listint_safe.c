#include "lists.h"

/**
 * print_listint_safe - print a list
 * Returns: number of nodes
 * Exit 98 if fails
 * @head: pointer to head
 */

size_t print_listint_safe(const listint_t *head)
{

	size_t nodes_qnt = 0;
	long int buffer;

	while (head)
	{
		buffer = head - head->next;
		nodes_qnt++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (buffer > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nodes_qnt);
}
