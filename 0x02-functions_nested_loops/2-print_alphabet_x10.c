#include "holberton.h"

/**
*print_alphabet_x10 - prints the alphabet in lowercase
*
 *Description: _putchar prototype
 *Return: - if the programming ran to completion
 */

void print_alphabet_x10(void)
{

int i, j;
for (j = 0; j <= 9; j++)
{
for (i = 97; i <= 122; i++)
{
	_putchar(i);
}
	_putchar('\n');
}
}
