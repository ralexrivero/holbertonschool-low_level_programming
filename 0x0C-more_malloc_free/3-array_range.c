#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - creates an array of integers
 * @min: minimim value of the array
 * @max: maximum value of the array
 * Return: pointer to the array,
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int a, *array;

	if (min > max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
	{
		array[a] = min++;
	}
	return (array);
}
