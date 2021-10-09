#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: a pointer to the newly created hash table
 *	if wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(hash_table_t));
		if (!t)
			return (NULL);
	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);
	if (!t->array)
	{
		free(t);
		return (NULL);
	}
	while (i < size)
		t->array[i++] = NULL;
	return (t);
}
