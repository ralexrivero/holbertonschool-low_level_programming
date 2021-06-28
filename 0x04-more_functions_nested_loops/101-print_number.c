#include "holberton.h"
/**
 * print_number - print an integer
 * Description: print an integer by prototype
 * @n: integer to diplay
 * Return: zero
 */
void print_number(int n)
{
int digits, n_d, i, power, n_obo;

if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar(n + '0');
}
digits = 0;
n_d = n;
while (n_d > 0)
{
n_d = n_d / 10;
digits++;
}
while (digits > 0)
{
power = 1;
for (i = 1; i <= (digits -1); i++)
{
power = (power * 10);
}
--digits;
n_obo = (n / power) % 10;
_putchar(n_obo + '0');
}
}
