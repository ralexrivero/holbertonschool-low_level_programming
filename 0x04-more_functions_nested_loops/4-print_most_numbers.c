#include "holberton.h"

/**
 * print_most_numbers - print some digits
 * Description: do not print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
int i;

	for (i = 48; i <= 57; i++)
		while (i != 50 || i != 52)
		{
			_putchar (i);
		}
	_putchar ('\n');
}
