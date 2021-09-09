#include "lists.h"

size_t _listint_len_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * _listint_len_loop - number of nodes in a loop list
 * @head: A pointer to the head of the list
 * Return: 0 if looped or the unique nodes in loop
 */
size_t _listint_len_loop(listint_t *head)
{
	listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe -  free lists with a loop
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 * Description: The function sets the head to NULL
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = _listint_len_loop(*h);
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
