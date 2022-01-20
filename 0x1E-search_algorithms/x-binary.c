#include "search_algos.h"


/**
 * binary_recursion - Construct a new binary recursion object
 *
 * @array:
 * @left:
 * @right:
 * @value:
 *
 * Return:
 */

int binary_recursion(int *array, unsigned int left, unsigned int right, int value)
{
	unsigned int half = 0;

	half = right / 2;

	while (left < right)
	{
		if (value == *(array + half))
		{
			return (half);
		}
		else if (value < * (array + half))
		{
			/* left */
			right = half;
			return (binary_recursion(array, left, right, value));
		}
		else
		{
			/* right */
			left = half;
			return (binary_recursion(array, left, right, value));
		}
	}
	return (-1);
}

/**
 * binary_search - binary search algorithm in a sorted array in ascending order
 *
 * @array: pointer to array to search in
 * @size: number of elements in array
 * @value: value to search for, appears only once
 *
 * Return: index when value is located
 *	if not present -1
 *	if array NULL -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, right = 0;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size;

	return (binary_recursion(array, left, right, value));
}
