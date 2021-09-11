#include "lists.h"

/**
 * reverse_listint - reverses a linked list using 1 loop
 * @head: pointer to the head of the list
 * Return: the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
