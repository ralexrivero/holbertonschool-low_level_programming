#include "holberton.h"

/**
 * print_number - print an integer
 * Description: print an integer by prototype
 * @n: integer to diplay
 * Return: zero
 */
void print_number(int n)
{
	int a, b;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
		a = n;
	b = a / 10000000000;
	if (b)
		_putchar(b + '0');
	b = ((a / 1000000000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 100000000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 10000000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 1000000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 100000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 10000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 1000) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 100) % 10);
	if (b)
		_putchar(b + '0');
	b = ((a / 10) % 10);
	if (b)
		_putchar(b + '0');
	_putchar((a % 10) + '0');
	_putchar('\n');
}
