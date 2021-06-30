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

if (n > 0)
{
for (i = 0; i < n - 1; i++)
{
	printf("%i, ", a[i]);
}
printf("%i", a[n - 1]);
}
printf("\n");
return;
}
