#include "lists.h"

/**
 * print_listint_safe - print a list
 * Description: prints list structure
 * Returns: number of nodes
 * Exit 98 if fails
 * @head: pointer to head
 * Return: the number of nodes in the list
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
