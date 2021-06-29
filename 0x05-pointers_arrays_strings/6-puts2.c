#include "holberton.h"

/**
 * puts2 - print characters
 * Description: start with the first and every other
 * @str: the string
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
	_putchar(str[i]);
}
_putchar('\n');
}
