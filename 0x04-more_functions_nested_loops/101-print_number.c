#include "holberton.h"
/**
 * print_number - print an integer
 * Description: print an integer by prototype
 * @n: integer to diplay
 * Return: zero
 */
void print_number(int n)
{
	unsigned int x, i = 1, y;

	if (n < 0)
	{
	_putchar('-');
	y = -n;
	x = y;
	}
	else
	{
	y = n;
	x = y;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (x > 9)
		{
			i *= 10;
			x /= 10;
		}
		while (i > 1)
		{
			_putchar((y / i) + '0');
			y %= i;
			i /= 10;
		}
		_putchar(y + '0');
	}
}
