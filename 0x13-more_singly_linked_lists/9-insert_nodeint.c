#include "lists.h"

/**
* insert_nodeint_at_index - inserts new node
* @head: pointer to head
* @index: node to insert
* @n: data of the new node
* Return:address of the new node, or NULL
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *var_lst_buffer, *var_lst_prev_node, *var_lst_next_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	var_lst_next_node = malloc(sizeof(listint_t));
	if (var_lst_next_node == NULL)
		return (NULL);
	(*var_lst_next_node).n = n;
	(*var_lst_next_node).next = NULL;

	if (index == 0)
	{
		(*var_lst_next_node).next = *head;
		*head = var_lst_next_node;
		return (var_lst_next_node);
	}
	i = 1;
	var_lst_prev_node = *head;
	var_lst_buffer = (*(*head)).next;
	while (var_lst_buffer != NULL)
	{
		if (i == index)
		{
			(*var_lst_prev_node).next = var_lst_next_node;
			(*var_lst_next_node).next = var_lst_buffer;
			return (var_lst_next_node);
		}
		var_lst_prev_node = var_lst_buffer;
		var_lst_buffer = (*var_lst_buffer).next;
		i++;
	}
	if (var_lst_buffer == NULL && i == index)
	{
		(*var_lst_prev_node).next = var_lst_next_node;
		return (var_lst_next_node);
	}
	free(var_lst_next_node); /* coud not find a place */
	return (NULL);
}
