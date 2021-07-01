#include "holberton.h"

/**
 * _strncpy - copy a string
 * Description: emulate strncpy
 * @dest: final string
 * @src: initial string
 * @n: amount of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
