#include "holberton.h"

/**
 * swap_int - swap values
 * @a: an integer
 * @b: an integer
 * Description: swap between integers
 * Return: zero
 */

void swap_int(int *a, int *b)
{
int swap = *a;

*a = *b;
*b = swap;
return;
}
