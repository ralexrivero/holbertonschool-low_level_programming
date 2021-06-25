#include <stdio.h>

/**
 * main - print a square
 * Description: using #
 * @size: the size of saquare if greater than zero
 * Return: zero
 */

void main(int size)
{
size = 4;
int w, h;

if (size > 0)
for (h = 1; h <= size; h++)
{
	for (w = 1; w <= size; w++)
	putchar(35);
	putchar('\n');
}
}
