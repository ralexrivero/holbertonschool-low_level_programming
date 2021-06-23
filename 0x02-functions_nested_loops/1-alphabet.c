#include "holberton.h"

/**
*main - prints the alphabet in lowercase
*
 *Description: _putchar prototype
 *Return: - if the programming ran to completion
 */

void print_alphabet(void)
{

int i;

for (i = 97; i <= 122; i++)
{
	_putchar(i);
}
	_putchar('\n');

	return (0);
}
