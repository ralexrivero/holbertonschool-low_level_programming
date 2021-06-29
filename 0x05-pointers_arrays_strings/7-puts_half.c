#include "holberton.h"

/**
 * puts_half - prints a string
 * Description: beginig in half of string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
