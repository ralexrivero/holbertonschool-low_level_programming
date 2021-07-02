#include "holberton.h"

/**
 * reverse_array - reverse array
 * Description: of integers
 * Return: reversed array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
int swap, i, j = n - 1;

for (i = 0; i < n / 2; i++)
{
	swap = a[i];
	a[i] = a[j];
	a[j--] = swap;
}
}
