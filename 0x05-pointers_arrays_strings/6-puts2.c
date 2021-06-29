#include "holberton.h"

/**
 * puts2 - print characters
 * Description: start with the first and every other
 * @str: the string
 */

void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
