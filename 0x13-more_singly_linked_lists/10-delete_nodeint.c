#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node with index condition
* @head: pointer to head
* @index: node to be deleted
* Return: 1 if it succeeded, -1 if it failed
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *var_lst_buffer, *var_lst_prev_node;
	unsigned int i;

	if (*head != NULL)
	{
		if (index == 0)
		{
			var_lst_buffer = *head;
			*head = (*(*head)).next;
			free(var_lst_buffer);
			return (1);
		}
		i = 1;
		var_lst_prev_node = *head;
		var_lst_buffer = (*(*head)).next;
		while (var_lst_buffer != NULL)
		{
			if (i == index)
			{
				(*var_lst_prev_node).next = (*var_lst_buffer).next;
				free(var_lst_buffer);
				return (1);
			}
			var_lst_prev_node = var_lst_buffer;
			var_lst_buffer = (*var_lst_buffer).next;
			i++;
		}
	}
	return (-1);
}
