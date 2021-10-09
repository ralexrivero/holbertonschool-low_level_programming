#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - create hash table
 * @size: the size of sorted table
 * Return: pointer to hed of hash table
 *	if error NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{

}

/**
 * shash_table_set - add element to the hash table
 * @ht: pointer to the hash table
 * @key: key to add (not empty)
 * @value: value of the key
 * Return: 0 or - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

}

/**
 * shash_table_get - return a key value
 * @ht: pointer to the hash table
 * @key: The key to get the value
 * Return: the match
 *	NULL: if no match
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{

}

/**
 * shash_table_print - prints sorted hash table in order
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{

}

/**
 * shash_table_print_rev - prints the reverse hash table
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{

}

/**
 * shash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{

}
