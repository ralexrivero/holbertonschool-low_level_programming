#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: a pointer to the newly created hash table
 * 	if wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j = 0;
	hash_table_t *t = NULL;

	for (; j < size; j++)
	{
		t -> array[j] = NULL;
		t -> size = 0;
	}

return (0);
}
