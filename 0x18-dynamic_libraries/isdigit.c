#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - evaluate variable
 * Description: evaluate if is digit
 * @c: evaluate if is digit
 * Return: one if digit, zero otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
