#include "holberton.h"

/**
 * puts_half - prints a string
 * Description: beginig in half of string
 * @str: the string
 */

void puts_half(char *str)
{
int l, i;

for (l = 0; str[l] != '\0'; l++)
	;
l += 1;
for (i = (l / 2); i <= l; i++)
{	
	_putchar(str[i]);
}
_putchar('\n');
}
