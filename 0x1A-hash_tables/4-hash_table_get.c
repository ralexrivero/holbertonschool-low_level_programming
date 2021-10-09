#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *@ht: pointer to hash table
 *@key: the key to get the value
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *l;
	int size;
/*	hash_table_t *head;*/
	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
	{
		return (NULL);
	}
/*	head = ht;*/
	size = ht->size;
	hash = key_index((const unsigned char *)key, size);
	l = ht->array[hash];
	while (l != NULL)
	{
		if (!strcmp(l->key, key))
			return (l->value);
		l = l->next;
	}
	return (NULL);
}
