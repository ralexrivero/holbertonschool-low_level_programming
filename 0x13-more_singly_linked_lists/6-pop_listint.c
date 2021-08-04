#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 * Return: head node’s data (n)
 * if empty 0
 */
int pop_listint(listint_t **head)
{
	listint_t *buffer;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	buffer = (*head)->next;
	free(*head);
	*head = buffer;
	return (num);
}
