#include "holberton.h"

/**
 * print_sign - evaluate sign of n
 * Description: 0, + ir -
 * @n: the number to evaluate
 * Return: 0 if 0, + if greate than zero, - if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
