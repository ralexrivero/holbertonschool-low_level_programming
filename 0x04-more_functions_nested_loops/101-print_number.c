#include "holberton.h"
/**
 * print_number - print an integer
 * Description: print an integer by prototype
 * @n: integer to diplay
 * Return: zero
 */
void print_number(int n)
{
unsigned int x;

if (n < 0)
{
x = -n;
_putchar('-');
}
else
{
x = n;
}
if (x / 10)
{
print_number(x / 10);
}
_putchar((x % 10) + '0');
}
