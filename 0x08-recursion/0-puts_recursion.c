#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * Description: using recursion
 * @s: the char to print
 */
void _puts_recursion(char *s)
{
if (*s != 0)
{
_putchar(*s);
s++;
_puts_recursion(s++);
return;
}
else
{
_putchar('\n');
}
}
