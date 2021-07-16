#include <stdlib.h>
#include "holberton.h"

/**
 **_calloc -  allocates memory for an array, using malloc
 * @nmemb: elements of size
 * @size: size
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int cnt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (cnt = 0; cnt < nmemb * size; cnt++)
	{
		ptr[cnt] = 0;
	}
	return (ptr);
}
