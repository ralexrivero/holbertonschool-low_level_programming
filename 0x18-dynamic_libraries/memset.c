#include <stdio.h>

/**
 * _memset - fills memory
 * Description: with constant byte
 * @s: memory to fill
 * @b: char to be copied
 * @n: times to copy b
 * Return: when done
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
