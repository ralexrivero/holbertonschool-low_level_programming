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

if (n < 0) /* change number to positive */
{
	_putchar('-');
	n = -n;
}
if (n == 0)
{
	_putchar('0');
}
digits = 0; /*count digits of n*/
n_d = n;
while (n_d > 0)
{
n_d = n_d / 10;
digits++;
}
while(digits > 0){ /*power of ten according to number of digits */
power = 1;
for(i = 2; i <= (digits); i++)
{
power = (power * 10);
}
--digits;
n_obo = (n / power) % 10;
_putchar(n_obo + '0');
}
}
