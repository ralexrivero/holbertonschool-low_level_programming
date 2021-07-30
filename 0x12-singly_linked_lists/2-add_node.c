#include "lists.h"

/**
 * add_node - add node to the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: to duplicate
 * Return: address of the new element
 * NULL if it failed
 * Description: using strdup
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = length;
	new_list->next = (*head);
	(*head) = new_list;

	return (*head);
}
