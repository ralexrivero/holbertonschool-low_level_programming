#include "holberton.h"

/**
 * print_square - print a square
 * Description: using #
 * @size: the size of saquare if greater than zero
 * Return: zero
 */

void print_square(int size)
{
int w, h;

if (size > 0)
for (h = 1; h <= size; h++)
{
	for (w = 1; w <= size; w++)
	_putchar(35);
	_putchar('\n');
}
}
