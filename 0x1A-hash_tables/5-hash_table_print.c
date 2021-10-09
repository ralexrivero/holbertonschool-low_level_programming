#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 *@ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}
	{
		hash_node_t *h;
		unsigned int i;
		int ver = 0;

		printf("{");
		for (i = 0; i < ht->size ; i++)
		{
			if (ht->array[i] != NULL)
			{
				h = ht->array[i];
				while (h != NULL)
				{
					if (ver == 1)
					{
						printf(", ");
					}
					printf("'%s': '%s'", h->key, h->value);
					ver = 1;
					h = h->next;
				}
			}
		}
		printf("}\n");
	}
}
