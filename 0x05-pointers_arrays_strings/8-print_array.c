#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prototype that prints n elements
 * Description: over an array
 * @n: elements of the array
 * @a: name of array
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
{
	printf("%i ,", a[i]);
}
printf("%i\n", a[n - 1]);
}
