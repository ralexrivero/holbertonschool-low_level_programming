#include "lists.h"

/**
 * reverse_listint - reverses a linked list using 1 loop
 * @head: pointer to the head of the list
 * Return: the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}