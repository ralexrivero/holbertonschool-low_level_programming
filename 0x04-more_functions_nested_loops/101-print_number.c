#include "holberton.h"
/**
 * print_number - print an integer
 * Description: print an integer by prototype
 * @n: integer to diplay
 * Return: zero
 */
void print_number(int n)
{
int digits, n_d, n_obo;

/* If n is smaller than 0, put a - sign */
/* and change number to positive */
if (n < 0)
{
	_putchar('-');
	n = -n;
}
/* count digits of n */
digits = 0;
n_d = n;
while (n_d > 0)
{
n_d = n_d / 10;
digits++;
}
/* iterate from first digit until last */
n_obo = n;
while (digits > 0)
{
n_obo = (n_obo / (10 ^ (digits - 1)));
--digits;
_putchar(digits + '0');
_putchar('-');
}
return;
}
