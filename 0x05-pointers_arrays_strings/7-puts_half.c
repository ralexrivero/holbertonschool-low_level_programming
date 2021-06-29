#include "holberton.h"

/**
 * puts_half - prints a string
 * Description: beginig in half of string
 * @str: the string
 */

void puts_half(char *str)
{
int l, m, i;

for (l = 0; str[l] != '\0'; l++)
	;
if (l % 2 == 1)
m = ((l - 1) / 2);
else
m = l / 2;
for (i = m; i < l; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
