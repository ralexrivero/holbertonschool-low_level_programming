#include "holberton.h"

/**
*main - prints "Holberton"
*
 *Description: _putchar prototype
 *Return: - if the programming ran to completion
 */

int main(void)
{
char char_str[9] = "Holberton";
int i;

for (i = 0; i <= 9; i++)
{
	_putchar(char_str[i]);
}
	_putchar('\n');

	return (0);
}
