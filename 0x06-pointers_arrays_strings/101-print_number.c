#include "holberton.h"

/**
 * print_number - print number
 * Description: using _putchar
 * @n: the number to print
 * Return: when ran completelly
 */

void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
n1 = -n;
_putchar('-');
}
else
{
n1 = n;
}
if (n1 / 10)
print_number(n1 / 10);
_putchar((n1 % 10) + '0');
}
