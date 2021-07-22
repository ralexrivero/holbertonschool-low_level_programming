#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the function to compare
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
