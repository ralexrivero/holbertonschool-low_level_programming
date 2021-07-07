#include "holberton.h"

/**
 * _strlen_recursion - return length
 * Description: of a string
 * @s: the string to evaluate
 * Return: the addition of one byte of length
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * pal - check palindrome
 * @s: string
 * @i: iterator to string
 * @l: lenght of string
 * Description: if palindrome
 * Return: 1 if true, 0 if not
 */
int pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (pal(s, i + 1, l - 1));
}
/**
 * is_palindrome - evaluate string
 * Description: if is a palindrome
 * Return: 1 if true, 0 if not
 * @s: the string
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (pal(s, 0, _strlen_recursion(s)));
}
