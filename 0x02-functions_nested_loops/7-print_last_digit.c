#include "holberton.h"

/**
 *print_last_digit - print the last digit of a number
 *@n: number to evaluate
 *Description: print the last digit of number
 *Return: 0 when ran complete
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
