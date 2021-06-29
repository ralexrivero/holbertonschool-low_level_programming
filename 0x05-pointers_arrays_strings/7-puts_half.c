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
if ((l % 2) == 0) /* lenght is odd */
{
	for (i = (l / 2); i <= l; i++)
	_putchar(str[i]);
} /* else is odd */
for (i = (l - 1 )/ 2; i <= l - 1; i ++)
{
	_putchar(str[i + 1]);
}
_putchar('\n');
}
