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
