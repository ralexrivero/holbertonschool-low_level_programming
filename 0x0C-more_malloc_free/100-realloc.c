#include <stdlib.h>
#include "holberton.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: original pointer
 * @old_size: size of ptr
 * @new_size: new size
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *pointer2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);
	pointer2 = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer1[i] = pointer2[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer1[i] = pointer2[i];
	}
	free(ptr);
	return (pointer1);
}
