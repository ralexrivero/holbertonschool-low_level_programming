#include <stdio.h>

/**
 * print_triangle
 * Description: prints a triangle
 * @size: the size, if greater than 0
 * Return: when ran complete
 */
void main(int size)
{
int height, base, ind;

size = 0;
if (size > 0)
for (height = 1; height <= size; height++)
{
for (ind = 1; ind <= (size - height); ind++)
putchar(32);
for (base = 1; base <= (height); base++)
putchar(35);
putchar('\n');
}
else
putchar('\n');
}
