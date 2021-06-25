#include "holberton.h"

/**
 * print_triangle
 * Description: prints a triangle
 * @size: the size, if greater than 0
 * Return: when ran complete
 */

void print_triangle(int size)
{
int height, base, ind;

if (size > 0)
	for (height = 1; height <= size; height++)
	{
		for (ind = 1; ind <= (size - height); ind++)
			_putchar(32);
		for (base = 1; base <= height; base++)
			_putchar(35);
			_putchar('\n');
}
