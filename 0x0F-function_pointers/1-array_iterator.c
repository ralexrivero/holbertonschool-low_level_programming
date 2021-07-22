#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - the iterator
 * @array: the array
 * @size: the size
 * @action: one value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
}
