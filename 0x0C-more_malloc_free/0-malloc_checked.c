#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: if fails, normal status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

p = malloc(b);
if (p == NULL)
	{
	exit(98);
	}
return (p);
}
