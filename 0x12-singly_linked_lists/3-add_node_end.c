#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to the list
 * @str: string to put in the new node
 * Return: the address of the new element, or NULL if it failed
 * Description: str needs to be duplicated
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *buffer = *head;
	unsigned int length = 0;

	while (str[length])
		length++;
	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = length;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}
	while (buffer->next)
		buffer = buffer->next;
	buffer->next = new_list;
	return (new_list);
}
