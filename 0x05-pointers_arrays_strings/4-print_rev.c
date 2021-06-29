#include "holberton.h"

/**
 * print_rev - prototype to print a string
 * Description: in reverse
 * @s: the string to print
 */

void print_rev(char *s)
{
int li, ri;

for (li = 0; s[li] != '\0'; li++)
	;
for (ri = (li - 1); ri >= 0; ri--)
{
	_putchar(s[ri]);
}
_putchar('\n');
}
