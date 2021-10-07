#include <stdio.h>

/**
 * _strcmp - works like strcmp
 * Description: compares two strings
 * Return: if equal or 1 if are different
 * @s1: first string
 * @s2: second string
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (0);
}
