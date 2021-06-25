#include "holberton.h"
#include <ctype.h>

/**
 * _isupper - check character
 * Description: for uppercase
 * @c: character to evaluate
 * Return: zero when done
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
