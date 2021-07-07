#include "holberton.h"

/**
 * _strlen_recursion - return length
 * Description: using wildcard *
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
 * wildcmp - compares two strings
 * Description: if are identical
 * Return: 1 if are identical, otherwise 0
 * @s1: first string
 * @s2: second string
 */

int wildcmp(char *s1, char *s2)
{
if (_strlen_recursion(s1) != _strlen_recursion(s2))
return (0);
return (1);
}
