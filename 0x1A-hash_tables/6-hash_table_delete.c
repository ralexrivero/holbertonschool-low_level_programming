#include "hash_tables.h"

/**
 * hash_table_delete - delete the entire hash table
 * @ht: pointer to hash table
 * Return: the index of the key
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *h;
	hash_node_t *p;

	for (i = 0 ; i < (ht->size) ; i++)
	{
		if (ht->array[i] != NULL)
		{
			h = ht->array[i];
			for (; h != NULL; )
			{
				p = h;
				h = h->next;
				free(p->key);
				free(p->value);
				free(p);
			}
		}
	}
	free(ht->array);
	free(ht);
}
