#include <stdio.h>

/**
 * _puts - prints a string
 * Description: to the stdout
 * @str: the string
 * Return:
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	_putchar (str[i]);
}
_putchar ('\n');
}
